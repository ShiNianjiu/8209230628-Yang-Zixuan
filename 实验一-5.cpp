#include <iostream>
using namespace std;
int main()
{
	double F;
	double C;
	int a;
	cout << "�����뻪���¶�" << endl;
	cin >> F;
	F = F - 32;
	a = (F * 100) / 1.8;
	C = a / 100.00;
	cout << "ת��Ϊ�����¶���" << C << endl;
}