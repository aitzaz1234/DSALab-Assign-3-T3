#include "list.h"

#include <iostream>

using namespace std;

/**
 * @brief Helper function to print a linked list.
 * @param head The head of the linked list.
 */
void printList(node* head) {
    while (head != nullptr) {
        cout << head->data;
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create first list: 'h', 'e', 'l', 'l', 'o'
    node* list1 = new node('h');
    list1->next = new node('e');
    list1->next->next = new node('l');
    list1->next->next->next = new node('l');
    list1->next->next->next->next = new node('o');

    // Create second list: 'w', 'o', 'r', 'l', 'd'
    node* list2 = new node('w');
    list2->next = new node('o');
    list2->next->next = new node('r');
    list2->next->next->next = new node('l');
    list2->next->next->next->next = new node('d');

    // Concatenate the two lists
    cout << "Concatenating lists..." << endl;
    node* concatenated = concatenate(list1, list2);
    cout << "Concatenated list: ";
    printList(concatenated); // Display the concatenated result

    // Compare the original two lists
    cout << "\nComparing lists..." << endl;
    int comparisonResult = compareStrings(list1, list2);
    cout << "Comparison result: " << comparisonResult << endl;
    if (comparisonResult == 0) {
        cout << "The two strings are the same." << endl;
    }
    else if (comparisonResult == 1) {
        cout << "The first string is lexicographically greater." << endl;
    }
    else {
        cout << "The second string is lexicographically greater." << endl;
    }

    // Find intersection between the two lists
    cout << "\nFinding intersection..." << endl;
    node* intersection = findIntersection(list1, list2);
    if (intersection != nullptr) {
        cout << "Intersection found: ";
        printList(intersection); // Display the intersection result
    }
    else {
        cout << "No intersection found." << endl;
    }

    return 0;
}

