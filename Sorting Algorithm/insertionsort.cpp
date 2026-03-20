#include <iostream>
using namespace std;

void insertionSort(int array[], int n){  
    for (int i = 1; i < n; i++) {
        int next = array[i]; 
        int j;

        for (j = i-1; j >= 0 && array[j] > next; j--){
            array[j+1] = array[j];
        }

        array[j+1] = next;
    }
}

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
        cout << endl;
}

int main() {
    int array[] = {18, 57, 9, 23, 78, 33, 90, 18, 66, 88};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before sorting: ";
    printArray(array, n);

    insertionSort(array, n);

    cout << "After sorting:  ";
    printArray(array, n);

    return 0;
}