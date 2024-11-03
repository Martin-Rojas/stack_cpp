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
    }

    // Check if the stack is empty
    bool isEmpty() const {
        // Add definitions
    }

    // Return the top element of the stack without removing it
    int peek() const {
        // Add definitions
        // Check if the Stack if empty
        if(top == nullptr){
            std::cout << "Empty stack\n";
        }
        return top->data;
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

    std::cout << "Top element is: " << stack.peek() << std::endl; // Should print 3

    // while (!stack.isEmpty()) {
    //     std::cout << "Popping: " << stack.pop() << std::endl;
    // }

    return 0;
}