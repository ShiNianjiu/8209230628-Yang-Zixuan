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
	cout << "ƽ��ÿ�컨" << m << "Ԫ" << endl;
	return 0;
}