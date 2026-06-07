#include <iostream>
using namespace std;

int main(){
    
    int numbers[5];

    for(int i = 0; i < 5; i++){
        cin >> numbers[i];
    }

    int max = numbers[0], min = numbers[0];

    long long sum = 0;

    for(int i = 0; i < 5; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }else if(numbers[i] < min){
            min = numbers[i];
        }

        sum += numbers[i];

    }
   
    long long maxSum = sum - min;
    long long minSum = sum - max;


   
    
    cout << minSum << " " << maxSum;


    return 0;
}