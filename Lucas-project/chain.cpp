#include <iostream>
using namespace std;

// 定义结构体，包含int变量（编号）、string变量（名字）、next指针（用于指向链表中下一个节点的地址）
struct st_girl {
    struct st_girl* prev;
    int no;
    string name;
    struct st_girl* next;
};

st_girl* head = nullptr;
st_girl* tail = nullptr;

void addNode(int no, string name) {
    st_girl* newNode = new st_girl{nullptr, no, name, nullptr};

    if (head == nullptr) {
        tail = head = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void thoughNode() {
    st_girl* temp = tail;
    while (temp != nullptr) {
        cout << "插入节点：No: " << temp->no << ", Name: " << temp->name << endl;
        temp = temp->prev;
    }
    cout << "==========" << endl;
}

void deleteNode() {
    while (head != nullptr) {
        st_girl* temp = head;
        cout << "删除节点：No: " << head->no << ", Name: " << head->name << endl;
        head = head->next;
        delete temp;
    }
}

int main() {
    addNode(1, "西施");
    addNode(2, "冰冰");
    addNode(3, "玉环");

    thoughNode();
    deleteNode();
}