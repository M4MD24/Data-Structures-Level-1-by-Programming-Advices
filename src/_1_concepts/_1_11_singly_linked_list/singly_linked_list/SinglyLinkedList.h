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

    Node<type> *findNode(
        Node<type> *targetNode
    ) {
        Node<type> *current = head;
        while (current != nullptr) {
            if (current == targetNode)
                return current;
            current = current->getNext();
        }
        return nullptr;
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