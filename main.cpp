//Lab_03_2.cpp
//Красноперова Валентина
//Лабораторна робота No 3.4
//Розгалуження, задане графіком функції

#include <iostream>
#include "cmath"

using namespace std;
int main()
{
    double x, y, R;
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    if (y <= R && y >= 0 && y >= -x && x <= 0 ||
        y >= -R && y <= 0 && x <= 0 && y <= x ||
        y <= R && y >= -R && x >= 0 && pow (x,2) + pow(y,2) <= pow(R,2))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}