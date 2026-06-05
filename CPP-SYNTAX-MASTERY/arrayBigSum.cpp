#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long element;

    long long total = 0;

    for(int i = 0; i < n; i++){
        cin >> element;
        total += element;
    }

    cout << total;
    
    return 0;
}