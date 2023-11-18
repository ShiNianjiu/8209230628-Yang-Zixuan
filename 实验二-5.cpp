#include <iostream>
using namespace std;
int main()
{   
	char c;
	int letters, numbers, spaces, others;
	letters = 0; numbers = 0; spaces = 0; others = 0;
	cout << "ÇëÊäÈë×Ö·û" << endl;
	do 
	{
		cin.get(c);
		if (c == '\n')
			break;
		else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			letters++;
		else if (c >= 48 && c <= 57)
			numbers++;
		else if (c == 32)
			spaces++;
		else others++;
	} 
	while (c != '\n');
	cout << "letters=" << letters << endl;
	cout << "numbers=" << numbers << endl;
	cout << "spaces=" << spaces << endl;
	cout << "others=" << others << endl;
	return 0;
}