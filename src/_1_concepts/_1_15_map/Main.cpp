#include <iostream>
#include <map>
#include <string>

using namespace std;

void printElements(
    const map<string, int> &STUDENT_GRADES
) {
    for (const auto &PAIR : STUDENT_GRADES)
        cout << PAIR.first << " : " << PAIR.second << '\n';
}

int main() {
    // Define the map
    map<string, int> studentGrades;

    studentGrades["Ahmed"] = 90;
    studentGrades["Mahmoud"] = 85;
    studentGrades["Omar"] = 95;

    // Update a value
    studentGrades["Ahmed"] = 98; // Update Ahmed's grade

    // Iterate through the map
    printElements(
        studentGrades
    );

    // Check if a key exists
    if (
        const string NAME = "Omar";
        studentGrades.count(
            NAME
        )
    )
        cout << '\n' << NAME << " exists with grade: " << studentGrades[NAME] << '\n';
    else
        cout << '\n' << NAME << " not found.\n";

    // Erase an element
    studentGrades.erase(
        "Mahmoud"
    );

    // Display the map after deletion
    cout << "\nAfter deleting Mahmoud:\n";
    printElements(
        studentGrades
    );

    // Get the number of elements
    cout << "\nTotal students: " << studentGrades.size();
}