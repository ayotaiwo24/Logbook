#include <iostream>
using namespace std;

int main(){
    int num[5];
    int sum = 0;
    int count = 0;
    cout << "Enter 5 numbers" << endl;

    for(int i = 0; i <= 4; i++){
        cin >> num[i];
        count++;
        sum += num[i];
    }

    cout << "The sum of the numbers is " << sum << endl;
    cout << "The number of digits is " << count << endl; 
    return 0;
}