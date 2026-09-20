#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[3] = { "Ali", "Siti", "John" };
    string searchName;
    bool found = false;

    cout << "Enter a name to search: ";
    cin >> searchName;

    for (int i = 0; i < 3; i++)
    {
        if (names[i] == searchName)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << searchName << " was found." << endl;
    }
    else
    {
        cout << searchName << " was not found." << endl;
    }

    return 0;
}
