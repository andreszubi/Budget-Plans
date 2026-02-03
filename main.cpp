#include <iostream>
using namespace std;

int main() {
    int budget;

    cout << "Enter your budget: ";
    cin >> budget;

    if (budget == 0)
    {
        cout << "You have no budget, so you stay home and do nothing." << endl;
    }
    else if (budget <= 20) {
        cout << "You have a low budget, so you go buy a book to read." << endl;
    }
    else if  (budget <= 30)
    {
        cout << "You have enough budget to go to the movies." << endl;
    }
    else if ( budget <= 200)
    {
        cout << "You have enough money to buy a new bike and go ride bike" << endl;
    }
    else if (budget > 200)
    {
        cout << "You have enough money to go travel somewhere." << endl;
    }
    return 0;
}
