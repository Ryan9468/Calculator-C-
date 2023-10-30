#include "main.h"

int main() {
    char input;
    cout << "Would you like to use the calculator? [Y] or [N]\n";
    cin >> input;
    if(input == 'Y' || input == 'y'){
        calculator();
    }
    else cout << "The calculator was not activated.\n";
    return 0;
}
