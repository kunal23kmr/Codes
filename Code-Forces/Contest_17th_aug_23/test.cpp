#include <iostream>
#include<string.h>
using namespace std;

int main() {
    try {
        cout << "he" << endl;
        cout.flush();  // Flush output
        // Code that might throw an exception
        // int numerator = 10;
        // int denominator = 0;
        // int result = numerator / denominator;  // This will cause a division by zero exception
        string s="";
        s.pop_back();
    } catch (const exception& e) {
        cout << "HI";
    }

    return 0;
}
