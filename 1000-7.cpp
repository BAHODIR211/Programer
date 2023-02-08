#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	system("color 0C");
	int i = 1000;
	while (i > 8)
	{
		i = i - 7;
		std::cout << i << " - 7\n";

		Sleep(5);
	}
	std::cout << "Dead Inside\n";
	cout << "Ya gul";
	return 0;
}
