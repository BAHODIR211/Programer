#include <iostream>
using namespace std;

int main(void)
{
    float   ch1, ch2, res;
    char    sim;
    cout << "Soon: \n";
    cin >> ch1 >> ch2;
    cout << "Znak:\n";
    cin >> sim;

    switch(sim)

    {
    case '*':
        res = ch1 * ch2;
        break;
    case '/':
        res = ch1 / ch2;
        break;
    case '-':
        res = ch1 - ch2;
        break;
    case '+':
        res = ch1 + ch2;
        break;
    }
        cout<<ch1<<sim<<ch2<<"="<<res<<endl;
        system("pause");
        return 0;
    }