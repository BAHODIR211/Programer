#include <iostream>
using namespace std;
void f(int& i);
int main()
{
	system("color 0A");
		int val = 1;
		cout << "Staroye znacheniye val: " << val << '\n';
		f(val);
		cout << "Novoy znachaniye val: " << val << '\n';
		return 0;
	
}
	void f(int& i)
{
	i = 10;
}