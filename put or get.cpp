#include <iostream>
using namespace std;

int& put(int i);
int get(int i);

int vals[10];
int error = -1;

int main()
{
	put(0) = 10;
	put(1) = 20;
	put(9) = 30;

	cout << get(0) << ' ';
	cout << get(1) << ' ';
	cout << get(9) << ' ';

	put(12) = 1;
	return 0;
}
int& put(int i)
{
	if (i > 0 && i < 10)
		return vals[i];
	else {
		cout << "Oshibka narusheniya granits!\n";
		return error;
	}
}
int get(int i)
{
	if (i >= 0 && i < 10)
		return vals[i];
	else {
		cout << "0shibnka narusheniya granichs!\n";
		return error;
	}
}