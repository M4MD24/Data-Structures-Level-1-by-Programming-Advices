#include <iostream>
#include "singly_linked_list/Node.h"
using namespace std;

void printValues(
    Node<short> *head
) {
    cout << "Nodes Values: ";
    while (head != nullptr) {
        cout << head->getValue() << ' ';
        head = head->getNext();
    }
}

int main() {
    Node<short> *head = nullptr,
                *firstNode = nullptr,
                *secondNode = nullptr,
                *thirdNode = nullptr;

    // Allocate Nodes in the Heap
    firstNode = new Node<short>();
    secondNode = new Node<short>();
    thirdNode = new Node<short>();

    // Assign Values
    firstNode->setValue(
        10
    );
    secondNode->setValue(
        20
    );
    thirdNode->setValue(
        30
    );

    // Connect Nodes
    firstNode->setNext(
        secondNode
    );
    secondNode->setNext(
        thirdNode
    );
    head = firstNode;

    // Print Values
    printValues(
        head
    );

    // Clean up
    delete thirdNode;
    delete secondNode;
    delete firstNode;
}