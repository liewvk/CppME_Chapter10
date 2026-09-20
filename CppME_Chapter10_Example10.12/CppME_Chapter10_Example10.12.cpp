#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = { 45, 78, 12, 99, 56 };
    int largest = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    cout << "Largest value = " << largest << endl;

    return 0;
}
