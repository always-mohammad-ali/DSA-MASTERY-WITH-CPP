#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int num;
    long long inputTotal = 0;

    for(int i = 0; i < n-1; i++){
        cin >> num;
        inputTotal += num;

    }


     long long total = (n * (n+1))/2;

     long long missingNum = total - inputTotal;

     cout << missingNum;
     
    
    return 0;
}