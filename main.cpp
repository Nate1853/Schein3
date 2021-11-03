#include <iostream>
#include "String.h"

ostream& operator<< (ostream &out, String &s) {
    for(int i=0; i<s.size; i++) {
        out << s.str[i];
    }

    return out;
}


int main() {
    const char* c1 = "Hallo";
    const char* c2 = "HalloWorld";

    String s;
    String s2('H');

    String s3(c1);
    String s4(c2);


    cout << s << endl;
    cout << s2 << endl;

    cout << s3 << endl;
    cout << s4 << endl;


}

