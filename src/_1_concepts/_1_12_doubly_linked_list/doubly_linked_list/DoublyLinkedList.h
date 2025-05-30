#pragma once
#include "Node.h"
using namespace std;

template <typename type>
class DoublyLinkedList {
    Node<type> *head = nullptr;

public:
    void insertFirst(
        Node<type> *node
    ) {
        if (head != nullptr) {
            head->setPrevious(
                node
            );
            node->setNext(
                head
            );
        }
        head = node;
    }

    void printValues() {
        cout << "Nodes Values: ";
        Node<type> *current = head;
        while (current != nullptr) {
            cout << current->getValue() << ' ';
            current = current->getNext();
        }
    }

    void printValuesBackward() {
        cout << "Nodes Values Backward: ";

        Node<type> *current = head;
        while (current && current->getNext())
            current = current->getNext();

        while (current != nullptr) {
            cout << current->getValue() << ' ';
            current = current->getPrevious();
        }
    }
};