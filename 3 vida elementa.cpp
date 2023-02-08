#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("color 0C");
    int b;
    long h;
    double c;
    b = atoi("10");
    h = atol("1000000");
    c = atof("-0.123");
    cout << b << ' ' << h << ' ' << c;
    cout << ' \n';

    return 0;
}
