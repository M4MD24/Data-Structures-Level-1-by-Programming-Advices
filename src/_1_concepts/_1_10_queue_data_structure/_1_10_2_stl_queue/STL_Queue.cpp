#include <iostream>
#include <queue>
using namespace std;

void addNumbers(
    queue<short> &numbers
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
    queue<short> numbers
) {
    cout << "Numbers are: ";
    while (!numbers.empty()) {
        cout << numbers.front() << ' ';
        numbers.pop();
    }
}

int main() {
    queue<short> numbers;

    addNumbers(
        numbers
    );

    cout << "Count of Numbers: " << numbers.size() << endl;

    if (!numbers.empty()) {
        cout << "Front element: " << numbers.front() << endl;
        cout << "Back (Rear) element: " << numbers.back() << endl;
    }

    printNumbers(
        numbers
    );
}