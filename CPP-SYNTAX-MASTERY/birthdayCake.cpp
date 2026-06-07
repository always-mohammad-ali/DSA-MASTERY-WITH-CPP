#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    int array[n];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int max = 0, total = 0;
    
    
    for(int i = 0; i < n; i++){
      if(array[i] > max){
        max = array[i];
        
      }

    }

    for(int i = 0; i < n; i++){
        if(array[i] == max){
            total++;
        }
    }

    cout << total;

    return 0;
}