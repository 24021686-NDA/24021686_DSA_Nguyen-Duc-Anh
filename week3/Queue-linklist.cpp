#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Them vao dau
Node* Inserthead(Node* head, int x) {
    Node* temp = new Node(x);
    temp->next = head;
    return temp;
}

// Them vao cuoi 
Node* InsertTail(Node* head, int x) {
    Node* temp = new Node(x);
    if (head == NULL) {
        return temp;
    }
    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = temp;
    return head;
}

// Them vao vi tri k
Node* InsertK(Node* head, int x, int k) {
    Node* current = head;
    for (int i = 1; i < k - 1; i++) {
        current = current->next;
    }
    Node* temp = new Node(x);
    temp->next = current->next;
    current->next = temp;
    return head;
}

// Xoa dau
Node* Deletehead(Node* head) {
    if (head == NULL) return NULL;
    Node* current = head->next;
    delete head;
    return current;
}

// Xoa cuoi
Node* DeleteTail(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    Node* tmp = current->next;
    current->next = NULL;
    delete tmp;
    return head;
}

// Xoa node tai vi tri k
Node* DeleteK(Node* head, int k) {
    Node* current = head;
    for (int i = 1; i < k - 1; i++) {
        current = current->next;
    }

    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
    return head;
}

// Cài đặt Queue 
struct Queue {
    Node* a;
    Queue() {
        a = NULL;
    }

    // Thêm phần tử vào cuối hàng đợi
    void enqueue(int item) {
        a = InsertTail(a, item);
    }

    // Lấy phần tử ở đầu hàng đợi ra và xóa đi
    void dequeue() {
        if (a != NULL) {
            cout << a->data << endl;
            a = Deletehead(a);
        }
    }

    // Xem phần tử ở đầu hàng đợi
    int front() {
        if (a != NULL) {
            return a->data;
        }
        return -1;
    }

    // Kiểm tra rỗng
    void empty() {
        if (a == NULL) {
            cout << "empty" << endl;
        } else {
            cout << "not empty" << endl;
        }
    }
};

int main() {
    Queue tmp;
    tmp.enqueue(1);
    tmp.enqueue(2);
    tmp.enqueue(3);

    int a = tmp.front();
    cout << "Front: " << a << endl;

    tmp.dequeue();
    tmp.dequeue();
    tmp.dequeue(); 

    tmp.empty();
    return 0;
}
