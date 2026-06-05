#include <iostream>
using namespace std;

int main(){
    int sumValue, input;

    cin >> sumValue;

    int sumOfThreeNumbers = 0;

    for(int i = 0; i < 3; i++){
       cin >> input;
       sumOfThreeNumbers += input; 
    }

    int fourthValue = sumValue - sumOfThreeNumbers;

    cout << fourthValue;
    
    return 0;
}