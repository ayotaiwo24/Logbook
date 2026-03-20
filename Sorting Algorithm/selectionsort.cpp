#include <iostream>
using namespace std;

void selectionSort(int array[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        int max = i;
        for (int j = 0; j < i; j++) {
            if (array[j] >= array[max])
                max = j;
        }
        swap(array[i], array[max]);
    }
}

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
        cout << endl;
}

int main() {
    int array[] = {88, 25, 52, 36, 11, 45, 7};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before sorting: ";
    printArray(array, n);

    selectionSort(array, n);

    cout << "After sorting:  ";
    printArray(array, n);

    return 0;
}
