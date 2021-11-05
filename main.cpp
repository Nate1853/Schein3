/*
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

    String s2(c1);     // Konstruktor: Konstanten

    String s3(c2);     // Konstruktor: Zeichenkette
    String s4(c3);

    String s5(s4);     // Konstruktor: Kopierkonstruktor

    String s6(String("sad"));    // Konstruktor: Verschiebekonstruktor


    String s7;
   // String::operator[](2);
    String s8;
    String s9;
    String s10;


    String stringlist[10] = {s, s2, s3, s4, s5, s6, s7, s8, s9, s10};
    for (int i = 0; i < 10; i++) {
        cout << "Test " << (i + 1) << ": " << stringlist[i] << endl;
    }
}
*/

#include "String.h"

ostream &operator<<(ostream &out, String &s) {
    for (int i = 0; i < s.size; i++) {
        out << s.str[i];
    }

    return out;
}


int main() {
    String s;
    String s2('a');
    String s3("Hallo");
    String s32("HalloWorld");
    String s4(s3);

    cout << endl << "******* Constructors ********" << endl;

    cout << "empty constructor  : '" << s << "'" << endl;
    cout << "char constructor   : '" << s2 << "'" << endl;
    cout << "string constructor : '" << s3 << "'" << endl;
    cout << "copy constructor   : '" << s4 << "'" << endl << endl;

    cout << endl << "******* move Constructor ********" << endl;
    cout << "source            : '" << s3 << "'" << endl;
    String s5 = std::move(s3);
    cout << "move constructor  : '" << s5 << "'" << endl;
    cout << "empty source      : '" << s3 << "'" << endl;


    cout << endl << "******* = operator ********" << endl;

    s2 = s5;
   // s32 = s32;
    cout << "source       : '" << s2 << "'" << endl;
    s2 = s2;
    cout << "copy self    : '" << s2 << "'" << endl << endl;


    cout << "source       : '" << s5 << "'" << endl;
    s3 = std::move(s5);
    cout << "move         : '" << s3 << "'" << endl;
    cout << "empty source : '" << s5 << "'" << endl << endl;


    cout << endl << "******* =+ operator ********" << endl;
    cout << "source            : '" << s3 << "'" << endl;
    s4 += s3;
    cout << "different sources : '" << s4 << "'" << endl << endl;
    s4 += s4;
    cout << "same source       : '" << s4 << "'" << endl << endl;


}
