#include <iostream>
using namespace std;

int main()
{
	int begin, end;
	do
	{
		cout << "Enter your range [from, to] \n";
		cin >> begin >> end;
	} while (begin >= end || begin < 2 || end < 0);

	for(int num=begin; num <= end; num++){
	int i;
	for(int i = 2; i < num; i++){
		if(num % i == 0)
		break;
	}
	if(i == num)
		cout << num << " is prime" << endl;
}
cout << endl;
return 0;
}
