#include <iostream>
using namespace std;

int main(){

    int n; 
    cin >> n;
    int array[n][3];

    int total = 0;
    int output[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> array[i][j];
            total += array[i][j];
        }
        output[i] = total;
        total = 0;
    }

    for(int i = 0; i < n; i++){
        if(output[i] == 180){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}