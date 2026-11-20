#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int main() {
    cout << "Welcome to the calculator!" << endl;
    cout << "Enter two numbers to add: ";
    int a, b;
    cin >> a >> b;
    int result = add(a, b);
    cout << "The sum of " << a << " and " << b << " is: " << result << endl;
    return 0;
}