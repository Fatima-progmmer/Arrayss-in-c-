#include <iostream>
using namespace std;
int main()
{
	int arry[4];
	cout << "Enter four integral= " << endl;
	for (int i = 1; i <= 4; i++)
		cin >> arry[i];
	cout << "The value now is ";
	for (int i = 1; i<=4; i++)
		cout << " " << arry[i];
	cout << endl;
	return 0;
}