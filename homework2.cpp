//
// Created by misha on 29.09.2026.
//
#include <iostream>
#include <string>
using namespace std;

// task 1

int convertStringToInt(string s) {
    int length = s.length();
    int num = 0;
    int temp = 0;
    for (int i = 0; i < length; i++) {
        temp = s[i] - '0';
        num = num * 10 + temp;
        temp = 0;
    }
    return num;
}

int main() {
    string s = "123";
    int num = convertStringToInt(s);
    cout << num << endl;
    int num2 = num + 123;
    cout << num2 << endl;
}