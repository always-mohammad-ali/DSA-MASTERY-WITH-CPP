#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    int quantityValue[testCase][2];

    double total = 1;

    double totalArray[testCase];
    

    for(int i = 0; i < testCase; i++){
        
        for(int j = 0; j < 2; j++){
            cin >> quantityValue[i][j];
            total *= quantityValue[i][j];
        }

        totalArray[i] = total;
        total = 1;
        
    }

    for(int i = 0; i < testCase; i++){
        if(quantityValue[i][0] > 1000){
            totalArray[i] = (totalArray[i] * 90) / 100;
            cout << fixed << setprecision(6) << totalArray[i] << endl;
        }else{
           cout << fixed << setprecision(6) << totalArray[i] << endl;
        }
        
    }


    return 0;
}