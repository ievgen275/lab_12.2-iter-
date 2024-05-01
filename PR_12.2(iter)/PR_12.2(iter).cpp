#include <iostream>
#include <Windows.h>

using namespace std;

typedef int Info;
struct Elem {
    Elem* link;
    Info info;
};

Elem* p = nullptr;

void append(Info newData) {
    Elem* newNode = new Elem();
    newNode->info = newData;
    newNode->link = nullptr;

    if (p == nullptr) {
        p = newNode;
        return;
    }

    Elem* lastNode = p;
    while (lastNode->link != nullptr) {
        lastNode = lastNode->link;
    }
    lastNode->link = newNode;
}

void increaseListValues(Info increaseBy) {
    Elem* current = p;
    while (current != nullptr) {
        current->info += increaseBy;
        current = current->link;
    }
}

void printList() {
    Elem* node = p;
    while (node != nullptr) {
        cout << node->info << " ";
        node = node->link;
    }
    cout << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    append(1);
    append(2);
    append(3);
    append(4);
    append(5);

    cout << "Початковий список: ";
    printList();

    Info increaseBy;
    cout << "Введіть на скільки збільшити значення кожного елемента: ";
    cin >> increaseBy;

    increaseListValues(increaseBy);

    cout << "Змінений список: ";
    printList();

    return 0;
}
