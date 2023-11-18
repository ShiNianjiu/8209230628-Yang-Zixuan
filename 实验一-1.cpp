#include<iostream>
using namespace std;
int main()
{
	int k = 2;
	int i = k + 1;
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
/*
原程序错误：
1.将int误写为Int
2.未定义标识符k
3.变量i多次初始化
*/
