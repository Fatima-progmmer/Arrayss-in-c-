#include <iostream>
using namespace std;
int age(int arry[])
{
	int sum = 0;
	for (int i = 1; i <= 10; sum = sum + arry[i++])
		;
	return sum;
}
int main()
{
	int arry[10];
	cout << "Enter age " << endl;
	for (int i = 1; i <= 10; i++)
		cin >> arry[i];
	cout << "The average value is ";
	cout << age(arry);
	return 0;
}