#include <iostream>
#include "String.h"

ostream &operator<<(ostream &out, String &s) {
    for (int i = 0; i < s.size; i++) {
        out << s.str[i];
    }
    return out;
}


int main() {
    const char c1 = 'H';
    const char *c2 = "Hallo";
    const char *c3 = "HalloWorld";

    String s;          // Konstruktor: Standard

    String s2(c1);      // Konstruktor: Konstanten

    String s3(c2);     // Konstruktor: Zeichenkette
    String s4(c3);

    String s5(s4);     // Konstruktor: Kopierkonstruktor

    String s6;
    String s7;
    String s8;
    String s9;
    String s10;


    String stringlist[10] = {s, s2, s3, s4, s5, s6, s7, s8, s9, s10};
    for (int i = 0; i < 10; i++) {
        cout << "Test " << (i + 1) << ": " << stringlist[i] << endl;
    }
}

