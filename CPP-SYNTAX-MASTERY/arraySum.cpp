#include <iostream>
using namespace std;

int main(){
    int n, element, total = 0;
    
    cin >> n;
   
        for(int i = 0; i < n; i++){
            cin >> element; 

            total += element;
    }

    cout << total;

    return 0;
}