#include <iostream>
#include <stack>
using namespace std;

void addFirstNumbers(
    stack<short> &firstNumbers
) {
    firstNumbers.push(
        10
    );
    firstNumbers.push(
        20
    );
    firstNumbers.push(
        30
    );
    firstNumbers.push(
        40
    );
    firstNumbers.push(
        50
    );
}

void addSecondNumbers(
    stack<short> &secondNumbers
) {
    secondNumbers.push(
        60
    );
    secondNumbers.push(
        70
    );
    secondNumbers.push(
        80
    );
    secondNumbers.push(
        90
    );
    secondNumbers.push(
        100
    );
}

void printNumbers(
    const string &TITLE,
    stack<short> numbers
) {
    cout << TITLE;
    while (!numbers.empty()) {
        cout << numbers.top() << ' ';
        numbers.pop();
    }
    cout << endl;
}

void printNumbers(
    const stack<short> &FIRST_NUMBERS,
    const stack<short> &SECOND_NUMBERS
) {
    printNumbers(
        "First Numbers: ",
        FIRST_NUMBERS
    );

    printNumbers(
        "Second Numbers: ",
        SECOND_NUMBERS
    );
}

int main() {
    stack<short> firstNumbers,
                 secondNumbers;

    addFirstNumbers(
        firstNumbers
    );
    addSecondNumbers(
        secondNumbers
    );

    cout << "■ Before Swap" << endl;
    printNumbers(
        firstNumbers,
        secondNumbers
    );

    swap(
        firstNumbers,
        secondNumbers
    );

    cout << "\n■ After Swap" << endl;
    printNumbers(
        firstNumbers,
        secondNumbers
    );
}