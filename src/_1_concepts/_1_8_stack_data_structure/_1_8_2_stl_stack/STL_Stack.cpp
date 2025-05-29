#include <iostream>
#include <stack>
using namespace std;

void addNumbers(
    stack<short> &numbers
) {
    numbers.push(
        10
    );
    numbers.push(
        20
    );
    numbers.push(
        30
    );
    numbers.push(
        40
    );
    numbers.push(
        50
    );
}

void printNumbers(
    stack<short> numbers
) {
    cout << "Numbers are: ";
    while (!numbers.empty()) {
        cout << numbers.top() << ' ';
        numbers.pop();
    }
}

int main() {
    stack<short> numbers;

    addNumbers(
        numbers
    );

    cout << "Count of Numbers: " << numbers.size() << endl;

    printNumbers(
        numbers
    );
}