#include <iostream>
#include <queue>
using namespace std;

void addFirstNumbers(
    queue<short> &firstNumbers
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
    queue<short> &secondNumbers
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
    queue<short> numbers
) {
    cout << TITLE;
    while (!numbers.empty()) {
        cout << numbers.front() << ' ';
        numbers.pop();
    }
    cout << endl;
}

void printNumbers(
    const queue<short> &FIRST_NUMBERS,
    const queue<short> &SECOND_NUMBERS
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
    queue<short> firstNumbers,
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