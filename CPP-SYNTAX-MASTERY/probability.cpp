#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int array[t][2];
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 2; j++){
          cin >> array[i][j];
        }
    }

    for(int i = 0; i < t; i++){
        for(int j = 0; j < 2; j++){
            cout << array[i][j];
            
        }
    }


    return 0;
}