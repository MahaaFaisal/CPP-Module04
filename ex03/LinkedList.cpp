#include "LinkedList.hpp"

LinkedList::LinkedList() : head(NULL) {}

LinkedList::~LinkedList()
{
    Node* current = head;
    Node* nextNode;

    while (current != NULL)
	{
        nextNode = current->next;
        delete current->data;
        delete current;
        current = nextNode;
    }
}

void LinkedList::insert(AMateria* data)
{
    Node* newNode = new Node(data);
    if (!head)
        head = newNode;
	else
	{
        Node* current = head;
        while (current->next != NULL)
            current = current->next;
        current->next = newNode;
    }
}

void LinkedList::display() const
{
    Node* current = head;
    while (current != NULL)
	{
        if (current->data) {
            std::cout << current->data->getType() << " -> ";
        }
        current = current->next;
    }
    std::cout << "NULL" << std::endl;
}