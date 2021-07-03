// lab7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>
#include <algorithm>

double harmonic(double a, double b) // 
{
    return 2.0 / (1.0 / a + 1.0 / b);
}

void swapnum(double *x, double *y, double *z)
{
        double min = 0, mid = 0, max = 0;
       

        double temp = 0;
        double arr[3] = { *x, *y, *z };
        sort(arr, arr + 3);
       
        (*x) = arr[0];
        (*y) = arr[1];
        (*z) = arr[2];

    
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Задание 1. Введите два числа:" << endl;
    cout << "Первое число: ";
    double a; cin >> a;
    cout << "Второе число: ";
    double b; cin >> b;
    cout << harmonic(a, b) << endl;

    cout << "Задание 2. Введите три числа:" << endl;
    cout << "Первое число:";
    double x; cin >> x;
    cout << "Второе число:";
    double y; cin >> y;
    cout << "Третье число:";
    double z; cin >> z;
    swapnum(&x, &y, &z);
    cout << "x = " << x << " y = " << y << " z = " << z;
}

