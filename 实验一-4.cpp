#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;
	cout << "output in unsigned int type:" << testUnint << endl;
	cout << "output in char type:" << static_cast <char>(testUnint) << endl;
	cout << "output in short type:" << static_cast <short>(testUnint) << endl;
	/*
	为什么结果为 - 2 ? : 
	siged short int表示范围是 - 32768到32767，此处数值溢出，
	编译器进行35534-65536=-2的处理
	*/
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" 
		 << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; 
	/*16进制输出*/
	cout << "output in Hex unsigned int type:" << oct << testUnint << endl;
	/*8进制输出*/
    double a = 4.56;
	cout << "output in int type=" << static_cast<int>(a) << endl;
	/*将一个实数转化成int*/
	system("pause");
	return 0;
}