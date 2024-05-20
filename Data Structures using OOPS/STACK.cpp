#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 

class Stack 
{
    private:
        int arr[MAX_SIZE]; 
        int top;     

    public:        
        Stack() 
        {
            top = -1; 
        }

        void push(int value) 
        {
            if (top == MAX_SIZE - 1) 
            {
                cout << "Stack Overflow! Cannot push element." << endl;
                return;
            }
            arr[++top] = value; 
            cout<<"Element pushed."<<endl;
        }

        void pop() 
        {
            if (isEmpty()) 
            {
                cout << "Stack Underflow! Cannot pop element." << endl;
                return;
            }
            cout<< "Element popped = " << arr[top--] << endl; 
        }

        void display() 
        {
            if (isEmpty()) 
            {
                cout << "Stack is empty!" << endl;
                return;
            }
            for (int i = top; i >= 0; i--) 
                cout << arr[i] << " ";
            cout << endl;
        }
        
        int stacktop() 
        {
            if (isEmpty()) 
            {
                cout << "Stack is empty!" << endl;
                return -1; 
            }
            return arr[top]; 
        }

        bool isEmpty() 
        {
            return top == -1; 
        }

        int size() 
        {
            return top + 1; 
        }
};

int main() 
{
    Stack myStack;
    int choice, value;
    cout << "\nStack Operations:" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Display" << endl;
    cout << "4. Top" << endl;
    cout << "5. Size" << endl;
    cout << "6. Exit" << endl;
    while (1)
    {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                myStack.push(value);
                break;
            case 2:
                myStack.pop();
                break;
            case 3:
                cout << "Stack elements: " << endl;
                myStack.display();
                break;
            case 4:
                cout << "Top element: " << myStack.stacktop() << endl;
                break;
            case 5:
                cout << "Size of stack: " << myStack.size() << endl;
                break;
            case 6:
                cout << "Exiting program." << endl;
                exit(1);
            default:
                cout << "Invalid choice. Please enter again." << endl;
        }
    }
    return 0;
}
