#include <iostream>
using namespace std;
int main()
{
	double m, n;
	int p;
	cout << "������мӷ���������1" << endl;
	cout << "������м�����������2"
		 <<"��Ĭ�ϵ�һ����Ϊ���������ڶ�����Ϊ������" << endl;
	cout << "������г˷���������3" << endl;
	cout << "������г�����������4"
		 <<"��Ĭ�ϵ�һ����Ϊ���������ڶ�����Ϊ������" << endl;
	cout << "�������ȡ�࣬������5"
		<< "��Ĭ�ϵ�һ����Ϊ���������ڶ�����Ϊ������" << endl;
	cin >> p;
	cout << "������������" << endl;
	cin >> m;
	cin >> n;
	switch (p)
	{
	  case 1:
		 cout << "result=" << m + n << endl;
		break;
	  case 2:
		 cout << "result=" << m - n << endl;
		 break;
	  case 3:
		  cout << "result=" << m * n << endl;
		  break;
	  case 4:
		  if(n == 0)
		  cout << "��������Ϊ0" << endl;
		  else
		  cout << "result="<<m / n << endl;
		  break;
	  case 5:
		  if (n == 0)
			  cout << "��������Ϊ0" << endl;
		  else
			  cout << "result=" 
			       << static_cast <int>(m) % static_cast <int>(n) << endl;
		  break;
	}
}