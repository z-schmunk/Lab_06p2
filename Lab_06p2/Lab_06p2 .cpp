//Zac Schmunk - 10/10/2024
//Lab 06 p1

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter number of asterisks per side: ";
    cin >> n;

    if (n < 2) {
        cout << "Invalid input. Length must be greater than or equal to 2." << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
            cout << " ";

        for (int j = 0; j <= i; j++)
            cout << "*";
        for (int j = 1; j <= i; j++) 
            cout << "*";
        
        cout << endl;
    }
    
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << " ";

        for (int j = n; j > i; j--)
            cout << "*";
        for (int j = n; j >= (i + 2); j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}