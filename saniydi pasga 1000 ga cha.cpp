#include <iostream>
using namespace std;

int main()
{
    system("color 0D");
    int i, j;
    for (i = 2; i < 1000; i++) {
        for (j = 2; j <= (i / j); j++)
            if (!(i % j)) break;
        if (j > (i / j)) cout << i << " - Odiy raqam\n";
    }
    return 0;
}
