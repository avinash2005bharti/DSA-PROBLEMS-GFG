class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {

    Node* front;
    Node* rear;
    int count;

  public:
  
    myQueue() {
        front = rear = nullptr;
        count = 0;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int x) {
        
        Node* temp = new Node(x);

        // If queue is empty
        if(front == nullptr) {
            front = rear = temp;
        }
        else {
            rear->next = temp;
            rear = temp;
        }

        count++;
    }

    void dequeue() {
        
        // If queue is empty
        if(front == nullptr)
            return;

        Node* temp = front;
        front = front->next;

        // If queue becomes empty
        if(front == nullptr)
            rear = nullptr;

        delete temp;
        count--;
    }

    int getFront() {
        
        if(front == nullptr)
            return -1;

        return front->data;
    }

    int size() {
        return count;
    }
};