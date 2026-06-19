#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printVector(vector<int> &nums){ // "&" doesn't create a new vector copy, but it stores in that orginal array
    for(int x : nums){
        cout << x << endl;
    }
}

int main(){
    vector<int> array = {5, 4, 1};
    printVector(array);
}