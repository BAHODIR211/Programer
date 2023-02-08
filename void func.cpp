#include <iostream>
using namespace std;
void func1();
void func2();

int main()
{
    system("color 0C");
    int x;
    x = 3;
    func1();
    func2();
    cout << x; 
    cout << "\n";
    cout << "This is finish";
    return 0;
}
void func1()
 {
int x;
x = 1;
cout << x;
cout << "\n";
 }
void func2()
{
    int x;
    x = 2;
    cout << x;
    cout << "\n";
}