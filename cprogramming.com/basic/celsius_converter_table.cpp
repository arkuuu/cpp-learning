// Task: https://www.cprogramming.com/challenges/celsius_converter_table.html

#include <iostream>

using namespace std;

double celsiusToFahrenheit(double celsius)
{
    // Tc = (Tf + 32) * 5/9
    // => Tf = Tc * 9/5 + 32
    return celsius * 9 / 5 + 32;
}

void printTable(int lowerLimit, int upperLimit, int step)
{
    cout << "Celsius\t\tFahrenheit" << endl;
    cout << "-------\t\t----------" << endl;
    for (double i = lowerLimit; i < upperLimit; i = i + step)
    {
        cout.precision(6);
        cout << fixed << i << "\t" << celsiusToFahrenheit(i) << endl;
    }
}

int main()
{
    // TODO constants for max limits
    int lowerLimit, upperLimit, step;

    cout << "Please give in a lower limit, limit >= 0: ";
    cin >> lowerLimit;
    if (lowerLimit < 0)
    {
        cout << "Invalid input, aborting" << endl;
        return 1;
    }

    cout << "Please give in a higher limit, 10 > limit <= 50000: ";
    cin >> upperLimit;
    if (upperLimit <= 10 || upperLimit > 50000)
    {
        cout << "Invalid input, aborting" << endl;
        return 1;
    }

    cout << "Please give in a step, 0 < step <= 10: ";
    cin >> step;
    if (step <= 0 || step > 10)
    {
        cout << "Invalid input, aborting" << endl;
        return 1;
    }

    printTable(lowerLimit, upperLimit, step);

    return 0;
}
