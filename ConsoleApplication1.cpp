﻿#include <iostream> 
using namespace std;
int main() {
    setlocale(0, "");
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum = sum + i;
    }
    cout << "Сумма чисел от 1 до 10: " << sum << endl;
    return 0;
}