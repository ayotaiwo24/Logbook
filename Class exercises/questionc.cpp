#include <iostream>
using namespace std;

int stack[10] = {1,2,3,4,5};
int top = 0;

bool isEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}

int main(){
    if(isEmpty()){
        cout << "The stack is empty" << endl;
    }else{
        cout << "The stack is not empty" << endl;
    }
    return 0;
}