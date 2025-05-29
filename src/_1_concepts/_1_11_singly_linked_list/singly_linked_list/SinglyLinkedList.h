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
        if (node == nullptr)
            cout << "Can't Insert, Node is null." << endl;
        else {
            node->setNext(
                head
            );
            head = node;
        }
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

    void insertAfter(
        Node<type> *previousNode,
        Node<type> *node
    ) {
        if (
            previousNode == nullptr ||
            node == nullptr
        ) {
            cout << "Can't Insert After, Null pointer detected." << endl;
            return;
        }

        Node<type> *nodeFound = findNode(
            previousNode
        );
        if (nodeFound == nullptr) {
            cout << "Can't Insert After, Previous node not found." << endl;
            return;
        }

        node->setNext(
            previousNode->getNext()
        );
        previousNode->setNext(
            node
        );
    }

    void insertLast(
        Node<type> *node
    ) {
        if (node == nullptr) {
            cout << "Can't Insert Last, Node is null." << endl;
            return;
        }

        if (head == nullptr)
            head = node;
        else {
            Node<type> *current = head;
            while (current->getNext() != nullptr)
                current = current->getNext();
            current->setNext(
                node
            );
        }
    }

    void deleteNode(
        Node<type> *targetNode
    ) {
        if (
            head == nullptr ||
            targetNode == nullptr
        ) {
            cout << "Can't Delete, List is empty or target node is null." << endl;
            return;
        }

        if (head == targetNode) {
            head = head->getNext();
            return;
        }

        Node<type> *current = head;
        while (
            current->getNext() != nullptr &&
            current->getNext() != targetNode
        )
            current = current->getNext();

        if (current->getNext() == targetNode)
            current->setNext(
                targetNode->getNext()
            );
        else
            cout << "Node Not Found." << endl;
    }

    void deleteFirst() {
        if (head == nullptr)
            cout << "Can't Delete First, List is Empty." << endl;
        else
            head = head->getNext();
    }

    void deleteLast() {
        if (head == nullptr) {
            cout << "Can't Delete Last, List is Empty." << endl;
            return;
        }

        if (head->getNext() == nullptr) {
            head = nullptr;
            return;
        }

        Node<type> *current = head;
        while (current->getNext()->getNext() != nullptr)
            current = current->getNext();

        current->setNext(
            nullptr
        );
    }
};