#include <iostream>
using namespace std;

int queue[10] = {1,2,3,4,5};
int front = 0;
int back = 4;

bool empty(){
    if(front > back){
        return true;
    }else{
        return false;
    }
}

int size(){
    return back - front + 1;
}

int frontElement(){
    if(empty()){
        cout << "Queue is empty";
        return -1;
    }else{
        return queue[front];
    }
}

int backElement(){
    if(empty()){
        cout << "Queue is empty";
        return -1;
    }else{
        return queue[back];
    }
}

void enqueue(int q){
    if(back == 9){
        cout << "Queue Overflow";
    }else{
        back++;
        queue[back] = q;
    }
}

void dequeue(){
    if(empty()){
        cout << "Queue Underflow";
    }else{
        front++;
    }
}

int main(){
    cout << "Size: " << size() << endl;
    cout << "Front: " << frontElement() << endl;
    cout << "Back: " << backElement() << endl;

    enqueue(6);
    enqueue(7);

    for(int i = front; i <= back; i++){
        cout << queue[i] << endl;
    }

    cout << "\n";

    cout << "The number of elements in the queue is: " << size() << endl << endl;

    dequeue();

    for(int i = front; i <= back; i++){
        cout << queue[i] << endl;
    }
    
    cout << "\n";
    
    cout << "The number of elements in the queue is: " << size() << endl;


    return 0;
}