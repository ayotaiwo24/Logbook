#include <iostream>
using namespace std;

int binarySearch(int array[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (array[mid] == target)
            return mid;
        else if (array[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main(){
    int array[] = {9, 12, 36, 52, 64, 67, 68, 80, 81, 92};
    int n = sizeof(array) / sizeof(array[0]);
    int target = 45;

    int result = binarySearch(array, n, target);
    if (result != -1)
        cout << "Binary Search: " << target << " found at index " << result << endl;
    else
        cout << "Binary Search: " << target << " not found" << endl;

    return 0;
}