#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    cin >> n;

    int array[n];
    string yesNo[n];

    for(int i = 0; i < n; i++){
        cin >> array[i];

        if(array[i] == 1 || array[i] == 2 || array[i] == 5){
            yesNo[i] = "NO";
        }else{
            yesNo[i] = "YES";
        }
    }

    for(int i = 0; i < n; i++){
        cout << yesNo[i] << endl;
    }

    return 0;
}