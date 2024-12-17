#include <iostream>
using namespace std;
int sum(const int arry[], const int length)
{
	long sum = 0;
	for (int i = 0; i < length; sum += arry[i++])
		;
	return sum;
}
int main()
{
	int arry[] = {2, 5, 7, 9, 67, 89};
	cout << "Sum " << sum(arry, 7) << endl;
	return 0;
}