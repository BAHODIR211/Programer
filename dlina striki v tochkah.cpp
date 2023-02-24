#include <iostream>
using namespace std;

int main()
{
	system("COLOR 0A");
	int B;
	cout << "Vvedite dllinu stroki ot 1 do... : ";
	cin >> B;
	while (B > 0 && B < 7000000) {
		cout << '.';
		B--;
	}
	return 0;
}