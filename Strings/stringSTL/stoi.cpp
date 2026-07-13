#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

// -----------------------------
// Manual int -> string
// -----------------------------
string intToStr(int n) {
    if (n == 0)
        return "0";

    bool negative = false;

    if (n < 0) {
        negative = true;
        n = -n;
    }

    string result = "";

    while (n > 0) {
        char digit = char('0' + (n % 10));
        result = digit + result;
        n /= 10;
    }

    if (negative)
        result = "-" + result;

    return result;
}

// -----------------------------
// Manual string -> int
// -----------------------------
int strToInt(string s) {
    int result = 0;
    int i = 0;
    bool negative = false;

    if (s[0] == '-') {
        negative = true;
        i = 1;
    }

    for (; i < s.size(); i++) {

        if (s[i] < '0' || s[i] > '9')
            break;

        int digit = s[i] - '0';

        result = result * 10 + digit;
    }

    if (negative)
        result = -result;

    return result;
}

int main() {

    cout << "========== Number to String ==========\n";

    int n = 42;
    double d = 3.14;

    string s1 = to_string(n);
    string s2 = to_string(d);

    cout << "Integer : " << n << endl;
    cout << "to_string(int) : " << s1 << endl;

    cout << "\nDouble : " << d << endl;
    cout << "to_string(double) : " << s2 << endl;

    cout << "\n========== String to Number ==========\n";

    string str = "123abc";

    int x = stoi(str);
    long y = stol(str);
    double z = stod("3.14");

    cout << "Original String : " << str << endl;
    cout << "stoi() = " << x << endl;
    cout << "stol() = " << y << endl;
    cout << "stod(\"3.14\") = " << z << endl;

    cout << "\n========== Exception Example ==========\n";

    try {

        int value = stoi("abc123");

        cout << value << endl;

    }
    catch (invalid_argument &e) {

        cout << "Invalid Argument Exception\n";

    }
    catch (out_of_range &e) {

        cout << "Out of Range Exception\n";

    }

    cout << "\n========== Manual int -> string ==========\n";

    int number = -5824;

    string converted = intToStr(number);

    cout << "Original Integer : " << number << endl;
    cout << "Converted String : " << converted << endl;

    cout << "\n========== Manual string -> int ==========\n";

    string input = "-9876abc";

    int answer = strToInt(input);

    cout << "Original String : " << input << endl;
    cout << "Converted Integer : " << answer << endl;

    return 0;
}