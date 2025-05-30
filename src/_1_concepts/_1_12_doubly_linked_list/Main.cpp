#include <iostream>

#include "doubly_linked_list//Node.h"
using namespace std;

void printNumbers(
    Node<short> *head
) {
    cout << "Numbers: ";
    while (head != nullptr) {
        cout << head->getValue() << ' ';
        head = head->getNext();
    }
}

void printNumbersBackward(
    Node<short> *head
) {
    cout << "Numbers Backward: ";
    while (head && head->getNext())
        head = head->getNext();

    while (head != nullptr) {
        cout << head->getValue() << ' ';
        head = head->getPrevious();
    }
}

int main() {
    Node<short> *head = nullptr,
                *firstNode = nullptr,
                *secondNode = nullptr,
                *thirdNode = nullptr;

    firstNode = new Node<short>(
        100
    );
    secondNode = new Node<short>(
        200
    );
    thirdNode = new Node<short>(
        300
    );

    firstNode->setPrevious(
        nullptr
    );
    firstNode->setNext(
        secondNode
    );

    secondNode->setPrevious(
        firstNode
    );
    secondNode->setNext(
        thirdNode
    );

    thirdNode->setPrevious(
        secondNode
    );
    thirdNode->setNext(
        nullptr
    );

    head = firstNode;

    printNumbers(
        head
    );

    cout << endl;

    printNumbersBackward(
        head
    );

    delete head;
    delete secondNode;
    delete thirdNode;
}