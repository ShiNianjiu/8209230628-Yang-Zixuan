#include <iostream>
using namespace std;
int main()
{
	char a;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> a;
	int p;
	p = int(a);
	if (p >= 97 && p <= 122)
		cout << static_cast<char>(a - 32) << endl;
	else cout << static_cast<char>(a) << endl;
}