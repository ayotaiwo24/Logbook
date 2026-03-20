#include <iostream>
using namespace std;

void bubbleSort(int array[], int n) { 
    for (int i = n-1; i >= 0; i--) {
        bool is_sorted = true;
        for (int j = 1; j <= i; j++) {
            if (array[j-1] > array[j]){
                swap(array[j], array[j-1]);
                is_sorted = false;
            }
        }

        if(is_sorted){
            return;
        }
    }
}

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
        cout << endl;
}

int main() {
    int array[] = {10, 6, 34, 65, 45, 86, 23, 98};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before sorting: ";
    printArray(array, n);

    bubbleSort(array, n);

    cout << "After sorting:  ";
    printArray(array, n);

    return 0;
}