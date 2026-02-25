#include <iostream>
using namespace std;

int queue[10] = {1,2,3,4};
int front = 0;
int back = 3;

void insert(int n){
    if(back == 9){
        cout << "Queue Overflow";
    }else{
        back++;
        queue[back] = n;
    }
}

int size(){
    return back + 1;
}

int main(){
    cout << "The size of the queue is " << size() << endl <<endl;

    for(int i = 0; i <= back; i++){
        cout << queue[i] << endl;
    }

    cout << "\n";

    insert(5);
    insert(6);

    for(int i = 0; i <= back; i++){
        cout << queue[i] << endl;
    }

    cout << "\n";
    
    cout << "The new size of the queue is " << size() << endl <<endl;
    return 0;
}