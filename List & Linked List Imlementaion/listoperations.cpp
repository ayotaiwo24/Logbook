#include <iostream>
using namespace std;

#define MAX 10

int list[MAX] = {1,2,3,4,5};
int lSize = 5;

bool isEmpty(){
    if(lSize == 0){
        return true;
    }else{
        return false;
    }
}

int listSize(){
    return lSize;
}

int get(int index){
    if(index >= 0 && index < lSize){
        return list[index];
    }else{
        cout << "Wrong Index" << endl;
        return -1;
    }
}

int indexOf(int x){
    for(int i = 0; i < lSize; i++){
        if(list[i] == x){
            return i;
        }
    }
    cout << "No such element";
    return -1;
}

void Delete(int index){
    if(index == lSize - 1){
        lSize--;
    }else{
        for(int i = index; i < lSize - 1; i++){
            list[i] = list[i + 1];
        }
        lSize--;
    }
}

void insert(int index, int x){
    if (lSize >= MAX) {
        cout << "List Overflow" << endl;
        return;
    }
    if(index == lSize){
        list[index] = x;
        lSize++;
    }else{
        for(int i = lSize - 1; i >= index; i--){
            list[i + 1] = list[i];
        }
        list[index] = x;
        lSize++;
    }
}

void output(){
    for(int i = 0; i <= lSize - 1; i++){
        cout << list[i] << " ";
    }
    cout << endl;
}

int main(){
    cout << boolalpha;
    cout << isEmpty() << endl;
    cout << listSize() << endl;
    cout << get(3) << endl;
    cout << indexOf(5) << endl;
    Delete(2);
    Delete(1);
    cout << listSize() << endl;
    output();
    insert(1,2);
    insert(2,3);
    insert(5,6);
    insert(6,7);
    cout << listSize() << endl;
    output();
    return 0;
}