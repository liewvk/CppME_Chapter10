#include <iostream>
using namespace std;

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << endl;
    cout << "The marks entered are:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}
