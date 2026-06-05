#include <iostream>
using namespace std;

int main(){
    int a[3], b[3];
    int aTotal = 0, bTotal = 0;

    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }

    for(int i = 0; i < 3; i++){
        cin >> b[i];
    }

    for(int i = 0; i < 3; i++){
        if(a[i] == b[i]){
           aTotal += 0;
           bTotal += 0;
        }else if( a[i] > b[i]){
            aTotal++;
        }else{
            bTotal++;
        }

    }

    cout << aTotal << " " << bTotal;
    
    return 0;
}