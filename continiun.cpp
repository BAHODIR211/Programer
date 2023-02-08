#include <iostream>
using namespace std;
int main()
{
    system("color 0D");
    int x;
    for (x = 0; x <= 100000; x++) {
        if (x % 2) continue;
        cout << x << ' ';
    }
    return 0;
}