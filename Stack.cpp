#include "Stack.h"

// Node constructor to initialize a node with data
template <typename T>
Node<T>::Node(T data) {
    this->data = data;
    this->next = nullptr;
};

// Stack constructor to initialize an empty stack
template <typename T>
Stack<T>::Stack() {
    top = nullptr;
}

// Add element to the top of the stack
template <typename T>
void Stack<T>::push(T data) {
    // Add definitions
}

// Remove and return the top element of the stack
template <typename T>
int Stack<T>::pop() {
        // Add definition for pop
}

// Check if the stack is empty
template <typename T>
bool Stack<T>::isEmpty() const {
    // Add definitions
}

// Return the top element of the stack without removing it
template <typename T>
int Stack<T>::peek() const {
        // Add definitions
}

// Destructor to free the allocated memory
template <typename T>
Stack<T>::~Stack() {
    while (!isEmpty()) {
        pop(); // Pop all elements to free memory
    }
}