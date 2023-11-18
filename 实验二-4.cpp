#include <iostream>
using namespace std;
int main()
{
	double m, n;
	int p;
	cout << "如果进行加法，请输入1" << endl;
	cout << "如果进行减法，请输入2"
		 <<"（默认第一个数为被减数，第二个数为减数）" << endl;
	cout << "如果进行乘法，请输入3" << endl;
	cout << "如果进行除法，请输入4"
		 <<"（默认第一个数为被除数，第二个数为除数）" << endl;
	cout << "如果进行取余，请输入5"
		<< "（默认第一个数为被除数，第二个数为除数）" << endl;
	cin >> p;
	cout << "请输入两个数" << endl;
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
		  cout << "除数不能为0" << endl;
		  else
		  cout << "result="<<m / n << endl;
		  break;
	  case 5:
		  if (n == 0)
			  cout << "除数不能为0" << endl;
		  else
			  cout << "result=" 
			       << static_cast <int>(m) % static_cast <int>(n) << endl;
		  break;
	}
}