#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "�����������ε����߳�" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && b + c > a && a + c > b)
	{
		cout << "��������εı߳�Ϊ" << a + b + c << endl;
		if (a == b || a == c || b == c)
			cout << "����������ǵ���������" << endl;
		else
			cout << "��������β��ǵ���������" << endl;
	}
	else
		cout << "�������������" << endl;
}