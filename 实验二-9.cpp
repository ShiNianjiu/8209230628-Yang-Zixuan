#include <iostream>
using namespace std;
int main()
{
	const double price = 0.8;
	double d = 0, w = 0;
	for (int n = 2; n <= 100; n = n * 2)
	{
		w = w + n * price;
		d++;
	}
	double m = w / d;
	cout << "平均每天花" << m << "元" << endl;
	return 0;
}