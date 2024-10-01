#pragma once

struct node {
    char data;
    node* next;
    node(char d) : data(d), next(nullptr) {}
};

// Function declarations
node* concatenate(node* list1, node* list2);
node* findIntersection(node* list1, node* list2);
int compareStrings(node* list1, node* list2);


