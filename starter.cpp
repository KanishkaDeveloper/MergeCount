
#include <iostream>
#include <string>
using namespace std;

struct Node {
    long long value;
    string label;
    Node* next;
};

/*     DONT CHANGE ANYTHING ABOVE            */

class LinkedList {
private:
    Node* head;

    /*
    Implement helper functions inside this class as needed.
    */

public:
    LinkedList() {
        head = nullptr;
    }

    //use your private helper functions and complete the functions which are given
    void pushFront(int value, string label) {

    }

    void pushBack(int value, string label) {

    }

    void popFront() {

    }

    void popBack() {

    }
    void find(int value) {

    }

    void display() {

    }

    void count() {

    }

    void mergeSort() {

    }

    void mergeSortCount() {

    }

    ~LinkedList() {
        //Free all remaining nodes.
    }
};
/* DONT CHANGE ANYTHING BELOW */

int main() {
    int Q;
    cin >> Q;

    LinkedList list;

    for (int i = 0; i < Q; i++) {
        string command;
        cin >> command;

        if (command == "PUSH_FRONT") {
            int value;
            string label;
            cin >> value >> label;
            list.pushFront(value, label);
        }
        else if (command == "PUSH_BACK") {
            int value;
            string label;
            cin >> value >> label;
            list.pushBack(value, label);
        }
        else if (command == "POP_FRONT") {
            list.popFront();
        }
        else if (command == "POP_BACK") {
            list.popBack();
        }
        else if (command == "FIND") {
            int value;
            cin >> value;
            list.find(value);
        }
        else if (command == "DISPLAY") {
            list.display();
        }
        else if (command == "COUNT") {
            list.count();
        }
        else if (command == "SORT") {
            list.mergeSort();
        }
        else if (command == "SORT_COUNT") {
            list.mergeSortCount();
        }
    }

    return 0;
}
