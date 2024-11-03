#ifndef STACK_H
#define STACK_H

#include <iostream>

template <typename T>
class Node{
    public:
        T data;
        Node *next;
    
        // Constructor to initialize a node with data
        Node(T data) : data(data), next(nullptr) {}
};

template <typename T>
class Stack{
    private:
        Node* top;
    
    public:
        // Constructor to initialize an empty stack
        Stack();

        // Push an element onto the stack
        void push(T data);

        // Pop and return the top element of the stack
        int pop();

        // Check if the stack is empty
        bool isEmpty() const;

        // Peek the top element without removing it
        int peek() const;

        // Destructor to clean up memory
        ~Stack();

};

#endif