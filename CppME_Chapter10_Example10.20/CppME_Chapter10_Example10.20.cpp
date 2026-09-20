#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;

    cout << "Enter password: ";
    cin >> password;

    if (password == "cpp2026")
    {
        cout << "Correct password." << endl;
    }
    else
    {
        cout << "Wrong password." << endl;
    }

    return 0;
}
