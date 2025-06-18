#include <iostream> // input/output operations
#include <vector>  // to store dynamic arrays
#include <cstdlib> // for system("cls") to clear the screen
using namespace std;

int main() {
    vector<string> items;
    int choice;

    while (true) {
        cout << "\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t[][][][][][][][][][][][][[][][][][][]\n";
        cout << "\t\t\t\t\t[][][]           Menu          [][][]\n";
        cout << "\t\t\t\t\t[][][][][][][][][][][][][[][][][][][]\n";
        cout << "\t\t\t\t\t[][]                             [][]\n";
        cout << "\t\t\t\t\t[]              1. Add             []\n";
        cout << "\t\t\t\t\t[               2. Edit             ]\n";
        cout << "\t\t\t\t\t[               3. Delete           ]\n";
        cout << "\t\t\t\t\t[               4. Display          ]\n";
        cout << "\t\t\t\t\t[]              5. Exit            []\n";
        cout << "\t\t\t\t\t[][]                             [][]\n";
        cout << "\t\t\t\t\t[][][][][][][][][][][][][[][][][][][]\n";
        cout << "\n\t\t\t\t\tEnter your choice: ";
        cin >> choice;
        system("cls");

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\t\t\t\t\tInvalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
            case 1: { 
                system("cls");
                string item;
                cout << "\n\t\t\t\t\tEnter the item to add: ";
                cin.ignore();
                getline(cin, item);
                items.push_back(item);
                cout << "\t\t\t\t\tItem added!\n";
                break;
            }
            case 2: { 
                if (items.empty()) {
                    cout << "\t\t\t\t\tNo items to edit.\n";
                    break;
                }
                int index;
                cout << "\t\t\t\t\tEnter the index to edit (0 to " << items.size() - 1 << "): ";
                cin >> index;
                if (index >= 0 && index < items.size()) {
                    cout << "\t\t\t\t\tEnter the new item: ";
                    cin.ignore();
                    getline(cin, items[index]);
                    cout << "\t\t\t\t\tItem updated!\n";
                } else {
                    cout << "\t\t\t\t\tInvalid index.\n";
                }
                break;
            }
            case 3: { 
                if (items.empty()) {
                    cout << "\t\t\t\t\tNo items to delete.\n";
                    break;
                }
                int index;
                cout << "\t\t\t\t\tEnter the index to delete (0 to " << items.size() - 1 << "): ";
                cin >> index;
                if (index >= 0 && index < items.size()) {
                    items.erase(items.begin() + index);
                    cout << "\t\t\t\t\tItem deleted!\n";
                } else {
                    cout << "\t\t\t\t\tInvalid index.\n";
                }
                break;
            }
            case 4: { 
                system("cls");
                if (items.empty()) {
                    cout << "\t\t\t\t\tNo items to display.\n";
                } else {
                    cout << "\n\t\t\t\t\t[][][][][][][][][][][][][[][][][][][]\n";
                    cout << "\t\t\t\t\t[][][]            ITEMS          [][]\n";
                    cout << "\t\t\t\t\t[][][][][][][][][][][][][[][][][][][]\n";
                    for (size_t i = 0; i < items.size(); ++i) {
                        cout << "\t\t\t\t\t" << i << ". " << items[i] << "\n";
                    }
                    cout << "\t\t\t\t\t[][][][][][][][][][][][][[][][][][][]\n";
                }
                break;
            }
            case 5: { 
                cout << "\t\t\t\t\tExiting. Goodbye!\n";
                return 0;
            }
            default: {
                cout << "\t\t\t\t\tInvalid choice. Try again.\n";
                break;
            }
        }
    }

    return 0;
}
