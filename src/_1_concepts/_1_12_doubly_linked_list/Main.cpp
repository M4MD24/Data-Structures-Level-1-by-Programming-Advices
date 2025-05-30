#include <iostream>
#include "doubly_linked_list//Node.h"
#include "doubly_linked_list/DoublyLinkedList.h"
using namespace std;

int main() {
    DoublyLinkedList<short> numbers;

    cout << "■ After Insert First Nodes" << endl;

    auto *firstNode = new Node<short>(
             11
         ),
         *secondNode = new Node<short>(
             22
         ),
         *thirdNode = new Node<short>(
             33
         ),
         *fourthNode = new Node<short>(
             44
         ),
         *fifthNode = new Node<short>(
             55
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
    numbers.insertFirst(
        fourthNode
    );
    numbers.insertFirst(
        fifthNode
    );

    numbers.printValues();

    delete firstNode;
    delete secondNode;
    delete thirdNode;
    delete fourthNode;
    delete fifthNode;
}