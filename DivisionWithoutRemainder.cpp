// Пользователь вводит целое число. Необходимо вывести все целые числа, на которое заданное число делиться без остатка.


#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int userInput = 0;
    cout << "Введите число и узнаете все числа на которое оно делится без остатка : ";
    cin >> userInput;

    for (int i = 1; i <= userInput; i++)
    {
        if (userInput % i == 0)
            cout << "Данное число " << i << " делится на " << userInput << " без остатка" << endl;
    }
}

