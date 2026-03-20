#include <iostream>
using namespace std;

int linearSearch(int array[], int n, int target){
    for(int i = 0; i < n; i++){
        if(array[i] == target){
            return i;
        }
    }
    return -1;
}

int main() {
    int array[] = {56, 7, 48, 22, 30};
    int n = sizeof(array) / sizeof(array[0]);
    int target = 7;

    int result = linearSearch(array, n, target);
    if (result != -1){
        cout << "Linear Search: " << target << " found at index " << result << endl;
    }
    else{
        cout << "Linear Search: " << target << " not found" << endl;
    }

        return 0;
    }