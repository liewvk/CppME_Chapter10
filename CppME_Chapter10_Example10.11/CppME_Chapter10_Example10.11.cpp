#include <iostream>
using namespace std;

int main()
{
    int marks[5] = { 80, 75, 90, 85, 70 };
    int sum = 0;
    double average;

    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }

    average = sum / 5.0;

    cout << "Average = " << average << endl;

    return 0;
}
