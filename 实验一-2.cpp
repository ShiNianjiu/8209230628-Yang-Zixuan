#include <iostream>
using namespace std;
int main() 
{
	double r, h;
	cout << "请输入圆锥底的半径" << endl;
	cin >> r;
	cout << "请输入锥高" << endl;
	cin >> h;
	const double p = 3.14;
	cout << "圆锥的体积为："<<(p * r * r * h) / 3 << endl;
}