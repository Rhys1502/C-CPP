#include <iostream>
#include <string>
#include <wchar.h>
using namespace std;

int main() {
    // integer variables
    short s = 32767;
    int i = 2147483647;
    long l = 2147483647;
    long long ll = 9223372036854775807;

    // floating-point variables
    float f = 3.14159f;
    double d = 3.141592653589793;

    // character variables
    char c = 'A';
    wchar_t wc = L'€';

    // boolean variable
    bool b = true;

    // string variable
    string str = "Hello, world!";

    // display variable values
    cout << "short: " << s << endl;
    cout << "int: " << i << endl;
    cout << "long: " << l << endl;
    cout << "long long: " << ll << endl;
    cout << "float: " << f << endl;
    cout << "double: " << d << endl;
    cout << "char: " << c << endl;
    wcout << "wchar_t: " << wc << endl;
    cout << "bool: " << b << endl;
    cout << "string: " << str << endl;

    return 0;
}