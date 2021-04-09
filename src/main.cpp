// Copyright [2021] <Nikita Semaev>
#include <iostream>
#include <string>

#include "../include/postfix.h"

int main() {
    string str;
    cin >> str;
    cout << infix2postfix(str);

    return 0;
}
