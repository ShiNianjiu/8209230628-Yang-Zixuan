#include <iostream>
using namespace std;
int main()
{
	int a, b, i, j;
	cout << "����������������" << endl;
	cin >> a;
	cin >> b;
	if (a >= b)
	{
		i = b; j = a;
	}
	else
	{
		i = a; j = b;
	}
	for (int n = 2;; n++)
		if ((n * i) >= j && (n * i) % j == 0)
		{
			cout << a << "��" << b << "����С������Ϊ" << n * i << endl;
			break;
		}
	for (; i >= 1; i--)
		if (a % i == 0 && b % i == 0)
		{
			cout << a << "��" << b << "���������Ϊ" << i << endl;
			break;
		}
	return 0;
}
