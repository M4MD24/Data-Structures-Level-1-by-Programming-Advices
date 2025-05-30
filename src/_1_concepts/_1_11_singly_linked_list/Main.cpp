#include <iostream>
#include "singly_linked_list/Node.h"
#include "singly_linked_list/SinglyLinkedList.h"
using namespace std;

int main() {
    SinglyLinkedList<short> numbers;

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

    cout << "\n■ Node Found = ";

    auto *nodeFound = numbers.findNode(
        fourthNode
    );

    cout << nodeFound->getValue() << endl;

    cout << "\n■ After Insert First Found Node" << endl;

    auto *copyOfNodeFound = new Node(
        nodeFound->getValue()
    );
    numbers.insertFirst(
        copyOfNodeFound
    );

    numbers.printValues();

    cout << "\n■ After Insert Last Node" << endl;

    auto *sixthNode = new Node<short>(
        666
    );
    numbers.insertLast(
        sixthNode
    );

    numbers.printValues();

    cout << "\n■ After Insert After Node" << endl;

    auto *seventhNode = new Node<short>(
        77
    );
    numbers.insertAfter(
        fourthNode,
        seventhNode
    );

    numbers.printValues();

    cout << "\n■ After Delete Node" << endl;

    numbers.deleteNode(
        secondNode
    );

    numbers.printValues();

    cout << "\n■ After Delete First Node" << endl;

    numbers.deleteFirst();

    numbers.printValues();

    cout << "\n■ After Delete Last Node" << endl;

    numbers.deleteLast();

    numbers.printValues();

    delete firstNode;
    delete secondNode;
    delete thirdNode;
    delete fifthNode;
    delete nodeFound;
    delete copyOfNodeFound;
    delete sixthNode;
    delete seventhNode;
}