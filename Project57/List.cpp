#include "list.h"


/**
 * @brief Concatenates two linked lists.
 * @param list1 The head of the first linked list.
 * @param list2 The head of the second linked list.
 * @return The head of the concatenated linked list.
 */
node* concatenate(node* list1, node* list2) {
    if (list1 == nullptr) return list2;
    node* temp = list1;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = list2;
    return list1;
}

/**
 * @brief Finds the intersection of two linked lists.
 * @param list1 The head of the first linked list.
 * @param list2 The head of the second linked list.
 * @return The head of the intersection linked list.
 */
node* findIntersection(node* list1, node* list2) {
    node* result = nullptr;
    node* temp = nullptr;
    while (list1 != nullptr) {
        node* temp2 = list2;
        while (temp2 != nullptr) {
            if (list1->data == temp2->data) {
                if (result == nullptr) {
                    result = new node(list1->data);
                    temp = result;
                }
                else {
                    temp->next = new node(list1->data);
                    temp = temp->next;
                }
                break;
            }
            temp2 = temp2->next;
        }
        list1 = list1->next;
    }
    return result; // Ensure a value is returned
}

/**
 * @brief Compares two linked lists lexicographically.
 * @param list1 The head of the first linked list.
 * @param list2 The head of the second linked list.
 * @return 0 if the lists are equal, 1 if list1 is greater, -1 if list2 is greater.
 */
int compareStrings(node* list1, node* list2) {
    while (list1 != nullptr && list2 != nullptr) {
        if (list1->data > list2->data) return 1;
        if (list1->data < list2->data) return -1;
        list1 = list1->next;
        list2 = list2->next;
    }
    if (list1 != nullptr) return 1;
    if (list2 != nullptr) return -1;
    return 0;
}

