#include <iostream>
using namespace std;

//***************************************************************

class Node
{
public:
    int data;
    Node *next;
    Node(int data);
    Node(int data, Node *next);
};

class LinkedList
{
private:
    Node *Head;
    Node *Tail;
    int length;

public:
    LinkedList();
    ~LinkedList();
    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node *predecessor);
    void removeToHead();
    void removeToTail();
    void remove(int data);
    bool search(int data);
    void retrive(int data, Node *&nodePointer);
    void traversal();
};

//***************************************************************
Node::Node(int data) : data(data) {}
Node::Node(int data, Node *next) : data(data), next(nullptr) {}

LinkedList::LinkedList()
{
    Head = nullptr;
    Tail = nullptr;
    length = 0;
}

LinkedList::~LinkedList()
{
    Node *currentNode = Head;
    while (currentNode != nullptr)
    {
        Node *nextNode = currentNode->next;
        delete currentNode;
        currentNode = nextNode;
    }
    length = 0;
}

bool LinkedList::isEmpty()
{
    return Head == nullptr;
}

void LinkedList::addToHead(int data)
{
    Node *newNode = new Node(data);
    if (isEmpty())
    {
        Head = Tail = newNode;
        Head->next = Tail->next = nullptr;
    }
    else
    {
        newNode->next = Head;
        Head = newNode;
    }
    length++;
}

void LinkedList::addToTail(int data)
{
    Node *newNode = new Node(data);
    if (isEmpty())
    {
        Head = Tail = newNode;
    }
    else
    {
        Tail->next = newNode;
        newNode->next = nullptr;
        Tail = newNode;
    }
    length++;
}

void LinkedList::add(int data, Node *predecessor)
{
    Node *newNode = new Node(data);
    if (predecessor == nullptr)
    {
        cerr << "Error: predecessor cannot be null" << endl;
        return;
    }
    else
    {
        newNode->next = predecessor->next;
        predecessor->next = newNode;
    }
    if (predecessor == Tail)
    {
        Tail = newNode;
    }
    length++;
}

void LinkedList::removeToHead()
{
    if (isEmpty())
    {
        cerr << "Error list is empty!" << endl;
        return;
    }
    Node *nodeToremove = Head;
    if (Head == Tail)
    {
        delete Head;
        Head = Tail = nullptr;
    }
    Head = nodeToremove->next;
    delete nodeToremove;
    length--;
}

void LinkedList::removeToTail()
{
    if (isEmpty())
    {
        cerr << "Error list is empty!" << endl;
        return;
    }
    if (Head == Tail)
    {
        delete Tail;
        Head = Tail = nullptr;
    }
    else
    {
        Node *currentNode = Head;
        while (currentNode->next != Tail)
        {

            currentNode = currentNode->next;
        }
        delete Tail;
        Tail = currentNode;
        Tail->next = nullptr;
    }
    length--;
}

void LinkedList::remove(int data)
{
    if (isEmpty())
    {
        cerr << "Empty already";
        return;
    }
    if (Head->data == data)
    {
        removeToHead();
        return;
    }
    Node *prevNode = Head;
    Node *currentNode = Head->next;
    while (currentNode->next != nullptr)
    {
        if (currentNode->data == data)
        {
            prevNode->next = currentNode->next;
            if (currentNode == Tail)
            {
                Tail = prevNode;
            }
            length--;
            delete currentNode;
            return;
        }
        prevNode = currentNode;
        currentNode = currentNode->next;
    }

    cerr << "Error: Data not found in the list" << endl;
}

bool LinkedList::search(int data)
{
    Node *currentNode = Head;
    while (currentNode->next != nullptr)
    {
        if (currentNode->data == data)
        {
            return true;
        }
        currentNode = currentNode->next;
    }
    return false;
}

void LinkedList::retrive(int data, Node *&nodePointer)
{
    Node *currentNode = Head;
    while (currentNode->next != nullptr)
    {
        if (currentNode->data == data)
        {
            nodePointer = currentNode;
            return;
        }
        currentNode = currentNode->next;
    }
    nodePointer = nullptr;
}

void LinkedList::traversal()
{
    Node *currentNode = Head;
    while (currentNode != nullptr)
    {
        cout << currentNode->data;
        if (currentNode->next != nullptr)
        {
            cout << " --> ";
        }
        currentNode = currentNode->next;
    }
    cout << endl;
}

int main()
{
    LinkedList list;
    list.addToHead(10);
    list.addToHead(50);
    list.addToHead(160);
    list.addToTail(20);

    Node *predecessor = nullptr;
    if (list.search(10))
    {
        list.retrive(10, predecessor);
    }
    list.add(15, predecessor); // Adding 15 after 10 if 10 exists

    list.traversal();

    list.remove(15);
    list.traversal();

    list.removeToHead();
    list.traversal();

    list.removeToTail();

    list.traversal();

    return 0;
}