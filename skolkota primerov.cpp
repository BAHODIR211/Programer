#include <iostream>
#include <cstring>
using namespace std;

void drill();
int bob;
int num_right;
int main()
{

   cout << "Nechta masalla: \n";
   cin >> bob;
   num_right = 0;
   do {
	drill(); bob--;
   } while (bob);
   cout << "Siz berdingiz:"<< num_right << " tog'ri javoblar.\n";
   return 0;
}

void drill()

{
	int bob;
	int a, b, ans;
	a = rand() % 100;
	b = rand() % 100;
	for (bob = 0; bob < 3; bob++) {
		cout << "Nechi boladi" << a << " + " << b << "? ";
		cin >> ans;
		if (ans == a + b) {
			cout << "To'ri javob\n";
			num_right++;
			return;
		}
	}
	cout << "Siz hamma javoblarni ishlatingiz.\n";
	cout << "JAvobi barobar " << a + b << '\n';
}
