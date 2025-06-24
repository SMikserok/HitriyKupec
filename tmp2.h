#pragma once
#include <iostream>
#include <limits>
#include <string>

using namespace std;

template <typename T>
T Input(const string& input) {
    T value;
    while (true) {
        if (cin >> value) {
            break;
        }
        else {
            cout << "Ошибка! Некорректный ввод. Повторите.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return value;
}