#include <iostream>
using namespace std;
int main()
{
    system("color 0E");
    int choice;
    cout << "Spravkka po temam:\n\n";
    cout << "1. for\n";
    cout << "2. if\n";
    cout << "3. switch\n\n";

    cout << "vvedite nomer temi(1-3):";
    cin >> choice;
    cout << "\n";
    switch (choice) {
    case 1:
        cout << "for - eto samiy unuvursalyniy cikl v C++.\n";
        break;
    case 2:
        cout << "if - eto instrukci uslovnogo vostavleniye.\n";
        break;
    case 3:
        cout << "switch - eto instrukcya mnogopravlennogo votstavleniya.\n";
        break;
    default:
        cout << "vi doljni vvesti chislo ot 1 do 3.\n";
        return 0;
    }
}