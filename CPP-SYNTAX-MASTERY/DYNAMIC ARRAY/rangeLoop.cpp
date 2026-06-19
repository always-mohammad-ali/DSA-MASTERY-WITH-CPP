#include <iostream>
using namespace std;

int main(){
    int array[3] = {4, 5, 3};

    for(int x : array){ // takes every value from array and put into x;
        cout << x << endl; 
    }

    return 0;
}