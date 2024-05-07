#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

class Circular_Queue 
{
    private:
        int arr[MAX_SIZE];
        int front;
        int rear;
        int count;

    public:
        Circular_Queue() 
        {
            front = -1;
            rear = -1;
            count = 0;
        }

        void enqueue(int value) 
        {
            if (count == MAX_SIZE) 
            {
                cout << "Queue Overflow! Cannot enqueue element." << endl;
                return;
            }
            if (isEmpty()) 
                front = 0;
            rear = (rear + 1) % MAX_SIZE;
            arr[rear] = value;
            count++;
        }

        void dequeue() 
        {
            if (isEmpty()) 
            {
                cout << "Queue Underflow! Cannot dequeue element." << endl;
                return;
            }
            cout << "Element dequeued = " << arr[front] << endl;
            if (front== rear) 
            {
                front = -1;
                rear = -1;
            } 
            else 
                front = (front + 1) % MAX_SIZE;
            count--;
        }

        int queuefront() 
        {
            if (isEmpty()) 
            {
                cout << "Queue is empty!" << endl;
                return -1;
            }
            return arr[front];
        }

        bool isEmpty() 
        {
            return count == 0;
        }

        bool isFull() 
        {
            return count == MAX_SIZE;
        }

        void display() 
        {
            if (isEmpty()) 
            {
                cout << "Queue is empty!" << endl;
                return;
            }
            cout << "Circular Queue elements:" << endl;
            int i = front;
            do 
            {
                cout << arr[i] << " ";
                i = (i + 1) % MAX_SIZE;
            } 
            while (i != (rear + 1) % MAX_SIZE);
            cout << endl;
        }
};

int main() 
{
    Circular_Queue myQueue;
    int choice, value;
    cout << "\nCircular Queue Operations:" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Front" << endl;
    cout << "4. Display" << endl;
    cout << "5. Exit" << endl;
    while (1) 
    {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                myQueue.enqueue(value);
                break;
            case 2:
                myQueue.dequeue();
                break;
            case 3:
                cout << "Front element: " << myQueue.queuefront() << endl;
                break;
            case 4:
                cout << "Queue Elements : "<< endl;
                myQueue.display();
                break;
            case 5:
                cout << "Exiting program." << endl;
                exit(1);
            default:
                cout << "Invalid choice. Please enter again." << endl;
        }
    } 
    return 0;
}
