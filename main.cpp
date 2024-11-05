
/**
Programmer: Martin Rojas
Project number: 4
Project Desc: A stack class with 4 fuction push, pop, peek and IsEmpty
Course: COSC 2436 PF III Data Structures
Date:   11/03/2024
*/
#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    // Add element to the top of the stack
    void push(int data) {
        
        // Add definitions
        // Create a new node
        Node* newNode = new Node(data);
        
        // point next of new node to topNode
        newNode->next = top;

        // top node will be new node
        top = newNode;
    }

    // Remove and return the top element of the stack
    int pop() {
        // Add definition for pop
        // check if the stack is empty
        if(isEmpty()){
            throw std::out_of_range(" The stack is empty.\n");

        }
        // Store the current top into a tem variable
        Node *temp = top;
        // get data from the old top
        int popedData = top->data;
        // Move the top to next node
        top = top->next;
        
        //delete old top = temp
        delete temp;
        // return the data from the pop node
        return popedData;
    }

    // Check if the stack is empty
    bool isEmpty() const {
        // Add definitions
        if(top == nullptr){
            return true;
        }else{
            return false;
        }
    }

    // Return the top element of the stack without removing it
    int peek() const {
        // Add definitions
        // Check if the Stack if empty
        if(isEmpty()){
            throw std::out_of_range(" The stack is empty.\n");
        }
        return top->data;
    }

    void displayStack(){
        Node *current = top;
        while(current){
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << "\n";
    }

    // Destructor to free the allocated memory
    ~Stack() {
        while (!isEmpty()) {
            pop(); // Pop all elements to free memory
        }
    }
};

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.displayStack();

    std::cout << "Top element is: " << stack.peek() << std::endl; // Should print 3

    while (!stack.isEmpty()) {
        std::cout << "Popping: " << stack.pop() << std::endl;
    }

    return 0;
}