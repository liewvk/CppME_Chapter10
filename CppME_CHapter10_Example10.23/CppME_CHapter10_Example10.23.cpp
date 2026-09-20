#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int sum = 0;
    double average;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter mark for student " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    average = sum / 5.0;

    cout << endl;
    cout << "Marks entered:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }

    cout << "Average mark = " << average << endl;

    return 0;
}
