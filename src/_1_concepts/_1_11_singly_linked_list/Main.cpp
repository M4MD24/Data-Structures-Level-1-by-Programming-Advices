#include <iostream>
#include "singly_linked_list/Node.h"
#include "singly_linked_list/SinglyLinkedList.h"
using namespace std;

int main() {
    SinglyLinkedList<short> numbers;

    auto *firstNode = new Node<short>(
             11
         ),
         *secondNode = new Node<short>(
             22
         ),
         *thirdNode = new Node<short>(
             33
         );

    numbers.insertFirst(
        firstNode
    );
    numbers.insertFirst(
        secondNode
    );
    numbers.insertFirst(
        thirdNode
    );

    numbers.printValues();

    delete firstNode;
    delete secondNode;
    delete thirdNode;
}