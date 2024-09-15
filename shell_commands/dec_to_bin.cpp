#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    string result;
    int decimal = stoi(argv[1]);
    while (decimal != 0) {
        result = to_string(decimal % 2) + result;
        decimal = decimal / 2;
    }
    cout << result << endl;
    return 0;
}
