#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    cout << endl;
    cout << "Names entered:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}
