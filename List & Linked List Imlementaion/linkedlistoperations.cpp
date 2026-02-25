#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* Head = NULL;
int lsize = 0;

bool IsEmpty(){
    if(lsize == 0){
        return true;
    }else{
        return false;
    }
}

int ListSize(){
    return lsize;
}

int get(int pos){
    if(pos < 1 || pos > lsize){
        cout << "Invaliid Position" << endl;
        return -1;
    }

    Node* h = Head;
    int count = 1;

    while(count < pos){
        h = h -> next;
        count++;
    }

    return h -> data;
}

int PositionOf(int x){
    Node* h = Head;
    int count = 1;

    while(count <= lsize){
        if(h ->data == x){
            return count;
        }
        h = h -> next;
        count++;
    }
    return -1;
}

void insert(int pos, int x){
    if (pos < 1 || pos > lsize + 1) {
        cout << "Invalid position" << endl;
        return;
    }
    Node* N = new Node;
    N -> data = x;
    N -> next = NULL;

    if(pos == 1){
        N -> next = Head;
        Head = N;
        lsize++;
    }else if(pos == lsize + 1){
        Node* h = Head;
        while(h -> next != NULL){
            h = h -> next;
        }
        h -> next = N;
        lsize++;
    }else{
        int count = 1;
        Node* h = Head;
        while (count < pos - 1){
            h = h -> next;
            count++;
        }
        N -> next = h -> next;
        h -> next = N;
        lsize++;
    }
}

void Delete(int pos){
    if(pos < 1 || pos > lsize){
    cout << "Invalid position" << endl;
    return;
}

Node* temp;

    if(pos == 1){
        temp = Head;
        Head = Head -> next;
    }else if(pos == lsize){
        Node* h = Head;
        int count = 1;
        while(count < pos - 1){
            h = h -> next;
            count++;
        }
        temp = h ->next;
        h ->next = NULL;
    }else{
        Node* h = Head;
        int count = 1;
        while(count < pos -1){
            h = h ->next;
            count++;
        }
        temp = h -> next;
        h ->next = temp ->next;
    }
    delete temp;
    lsize--;
}

void output(){
    Node* h = Head;
    while(h != NULL){
        cout << h ->data << " ";
        h = h ->next;
    }
    cout << endl;
}

int main(){
    cout << boolalpha;
    cout << IsEmpty() << endl;
    cout << ListSize() << endl;

    insert(1,0);
    insert(2,1);
    insert(3,2);
    insert(4,3);
    insert(5,4);
    insert(6,5);

    cout << get(3) << endl;
    cout << PositionOf(4) << endl;
    cout << get(7) << endl;

    cout << IsEmpty() << endl;
    cout << ListSize() << endl;
    output();

    Delete(3);
    Delete(5);

    cout << ListSize() << endl;
    output();
    return 0;
}