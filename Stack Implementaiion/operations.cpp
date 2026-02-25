#include <iostream>
using namespace std;

int stack[10] = {1,2,3,4,5};
int top = 4;

bool isEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}

int size(){
   return top + 1;
}

int topElement(){
    if (isEmpty()) {
        cout << "Stack is empty\n";
        return -1;
    } else {
        return stack[top];
    }
}

void pop(){
    if(isEmpty()){
        cout << "Underflow";
    }else{
        top--;
    }
}

void push(int x){
    if(top == 9){
        cout << "Overflow";
    }else{
        top++;
        stack[top] = x;
    }
}

int main(){
    if(isEmpty()){
        cout << "The stack is empty\n";
    }else{
        cout << "The stack is not empty\n";
    }

    cout << "The number of elements in the stack is: " << size() << endl;
    cout << "The Top element is: " << topElement() << endl;

    push(6);
    push(7);

    for(int i = 0; i <= top; i++){
        cout << stack[i] << endl;
    }

    cout << "\n";

    cout << "The number of elements in the stack is: " << size() << endl << endl;

    pop();

    for(int i = 0; i <= top; i++){
        cout << stack[i] << endl;
    }

    cout << "The number of elements in the stack is: " << size() << endl;
    return 0;
}