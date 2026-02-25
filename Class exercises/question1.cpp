#include <iostream>
using namespace std;

int main(){
    float population = 2000;
    float rate = 0.15;
    float years;

    while(population <= 2000000){
        float populationRate = (population * rate);
        population = population + populationRate;
        years += 0.5;
    }

    cout << "It takes " << years << " for the population to get to 2000000" << endl;
    return 0;
}
