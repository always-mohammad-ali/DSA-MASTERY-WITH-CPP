#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    long long factorialNum;
    long long factorialTotal = 1;
    long long array[n];

    for(int i = 0; i < n; i++){
        cin >> factorialNum;

        for(int j = factorialNum; j > 0; j--){
           factorialTotal *= j;
        }

        array[i] = factorialTotal;
        factorialTotal = 1;
  
    }

    for(int i = 0; i < n; i++){
        cout << array[i] << endl;
    }


    return 0;
}