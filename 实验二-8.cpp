#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, x, y, m;
	cout << "请输入a" << endl;
	cin >> a;
	x = a;
	do
	{
		y = (x + a / x) / 2;
		m = y - x;
		x = y;
	} 
	while(fabs(m) > 1e-5);
	cout << a << "的平方根为" << x << endl;
	return 0;
}