#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	system("color 0C");
	int choice;
	cout << "Vvedide chislo:";
	cin >> choice;
	if (choice == 1) {
		int a, b;
		cout << "2 Son kiriting ";
		cin >> a >> b;
		cout << "Javobi barobar" << a + b << '\n';
	}
	else {
		char s1[80], s2[80], s3[80];
		cout << "3 Stroka yozing: ";
		cin >> s1;
		cin >> s2;
		cin >> s3;
		cout << ":...FINISH...:";
	}
}
