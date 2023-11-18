#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的三边长" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && b + c > a && a + c > b)
	{
		cout << "这个三角形的边长为" << a + b + c << endl;
		if (a == b || a == c || b == c)
			cout << "这个三角形是等腰三角形" << endl;
		else
			cout << "这个三角形不是等腰三角形" << endl;
	}
	else
		cout << "不能组成三角形" << endl;
}