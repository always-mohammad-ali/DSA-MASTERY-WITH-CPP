#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cin >> n;

    int matrix[n][n];
    int leftToRight=0, rightToLeft=0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++){
           leftToRight += matrix[i][i];
    }

    for(int i = 0; i < n; i++){
            rightToLeft += matrix[i][n-1-i];  
              
    }

    int result = abs(leftToRight - rightToLeft);

    cout << result;

    return 0;
}
