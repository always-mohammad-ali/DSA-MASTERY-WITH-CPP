#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int array[n];

    float plus=0, minus=0, zero=0;

    for(int i = 0; i < n; i++){
        cin >> array[i];

    }

    for(int i = 0; i < n; i++){
         if(array[i] > 0){
            plus++;
        }else if(array[i] < 0){
            minus++;
        }else{
            zero++;
        }
    }



    cout << fixed << setprecision(6) << (plus/n)  << endl;
    cout << fixed << setprecision(6) << (minus/n) << endl;
    cout << fixed << setprecision(6) << (zero/n)  << endl;

    return 0;
}