﻿#include <iostream>
#define SUB(a,b) (a-b)
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");

    int a = 6;
    int b = 5;
    int c = 2;

    cout << SUB(a, b)          << endl;
    cout << SUB(a, b) * c      << endl;
    cout << SUB(a, (b + c)) * c << endl;
    system("pause");
}