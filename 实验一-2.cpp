#include <iostream>
using namespace std;
int main() 
{
	double r, h;
	cout << "������Բ׶�׵İ뾶" << endl;
	cin >> r;
	cout << "������׶��" << endl;
	cin >> h;
	const double p = 3.14;
	cout << "Բ׶�����Ϊ��"<<(p * r * r * h) / 3 << endl;
}