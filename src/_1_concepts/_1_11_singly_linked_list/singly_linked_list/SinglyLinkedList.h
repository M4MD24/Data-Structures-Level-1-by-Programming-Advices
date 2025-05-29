#pragma once
#include "Node.h"
using namespace std;

template <typename type>
class SinglyLinkedList {
    Node<type> *head = nullptr;

public:
    void insertFirst(
        Node<type> *node
    ) {
        node->setNext(
            head
        );
        head = node;
    }

    void printValues() {
        cout << "Nodes Values: ";

        Node<type> *current = head;
        while (current != nullptr) {
            cout << current->getValue() << ' ';
            current = current->getNext();
        }

        cout << endl;
    }
};