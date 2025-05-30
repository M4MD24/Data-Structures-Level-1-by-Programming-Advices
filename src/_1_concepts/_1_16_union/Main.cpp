#include <iostream>
#include <cstring>
using namespace std;

// Define a union
union Data {
    int first;
    float second;
    char third[20];
};

int main() {
    Data data {};

    // Store an integer
    data.first = 10;
    cout << "data.first = " << data.first << endl;

    // Store a float
    data.second = 98.76;
    cout << "data.second = " << data.second << endl;

    // Now data.first is no longer valid
    cout << "data.first after assigning float = " << data.first << " (garbage value)\n";

    // Store a string
    strcpy(
        data.third,
        "Hello Union"
    );
    cout << "data.third = " << data.third << endl;

    // Now both data.first and data.second are invalid
    cout << "data.first after assigning third = " << data.first << " (garbage value)\n";
    cout << "data.second after assigning third = " << data.second << " (garbage value)";
}