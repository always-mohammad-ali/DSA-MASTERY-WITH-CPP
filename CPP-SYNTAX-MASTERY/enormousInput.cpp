#include <iostream>
using namespace std;

int main(){
    int testCase, divisor;

    cin >> testCase >> divisor;

    int array[testCase];
    int count = 0;

    for(int i = 0; i < testCase; i++){
        cin >> array[i];

        if(array[i] % divisor == 0){
          count++;
        }
        
    }


    cout << count;


    return 0;
}