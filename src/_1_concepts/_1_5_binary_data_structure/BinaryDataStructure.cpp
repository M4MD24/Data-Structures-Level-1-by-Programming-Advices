#include <iostream>
using namespace std;

enum Permissions {
    Create = 1 << 0,
    Read = 1 << 1,
    Update = 1 << 2,
    Delete = 1 << 3,
    Search = 1 << 4
};

void showPermissions(
    const int &permissions
) {
    cout << "User Permissions (" << permissions << "):\n";
    if (permissions & Create)
        cout << "- Create\n";
    if (permissions & Read)
        cout << "- Read\n";
    if (permissions & Update)
        cout << "- Update\n";
    if (permissions & Delete)
        cout << "- Delete\n";
    if (permissions & Search)
        cout << "- Search\n";
}

int main() {
    int userPermissions = 0;

    userPermissions |= Create | Read | Search;

    showPermissions(
        userPermissions
    );

    cout << "\nUser Can" << (
        userPermissions & Create
            ? ""
            : "n't"
    ) << " Create\n";

    userPermissions &= ~Create;

    cout << "\nAfter Removing Create Permission:\n";
    showPermissions(
        userPermissions
    );
}