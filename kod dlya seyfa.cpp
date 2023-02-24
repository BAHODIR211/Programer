#include <iostream>
using namespace std;

int main()
{
	system("color 0C");
	int num;
	do {
		cout << " vvedi parol:::";
		cin >> num;
	} while (num != 123);
	if (num) cout << "PAROL TOG'RI SEYF OCHILDI";
	return 0;
}