#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "AMateria.hpp"
#include <iostream>

class Node {
public:
    AMateria* data;
    Node* next;

    Node(AMateria* data) : data(data), next(NULL) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();

    void insert(AMateria* data);
    void display() const;
};

#endif
