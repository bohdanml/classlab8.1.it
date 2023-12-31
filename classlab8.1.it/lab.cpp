﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


///neo
//  приймає рядок str та повертає кількість входжень груп "no" в рядок.

int Count(char* str) {
    if (strlen(str) < 3)
        return 0;
    int k = 0;
    for (int i = 1; str[i + 1] != 0; i++)
        if (str[i - 1] == 'n' && str[i + 1] == 'o')
            k++;
    return k;
}
//приймає str і міняє всі входження no на **
char* Change(char* str) {
    size_t len = strlen(str);
    if (len < 3)
        return str;
    //тимчасовий рядок для збереження зміненого рядка
    char* tmp = new char[len * 4 / 3 + 1];
    char* t = tmp;
    tmp[0] = '\0';
    size_t i = 0;

    // Проходжу по рядку str та замінюю "n o" на "**".
    while (i < len && str[i + 2] != 0) {
        if (str[i] == 'n' && str[i + 2] == 'o') {
            strcat(t, "**");
            t += 2;
            i += 3;
        }
        else {
            *t++ = str[i++];
            *t = '\0';
        }
    }

    *t++ = str[i++];
    *t++ = str[i++];
    *t = '\0';
    strcpy(str, tmp);
    return tmp;
}

int main() {
    //рядок для введення
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    //  Count та вивід кількісті входжень груп "no".
    cout << "String contained " << Count(str) << " groups of 'n o'" << endl;

    //  функція Change, яка замінює групи "no" на "**".
    char* dest = new char[151];
    dest = Change(str);

    cout << "Modified string (param): " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    delete[] dest;
    return 0;
}
