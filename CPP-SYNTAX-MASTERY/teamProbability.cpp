#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;

    int player[t];
    int result = 1;
    int output[t];

    for(int i = 0; i < t; i++){
        cin >> player[i];

        result = player[i] * pow(2, (player[i]-1));
        output[i] = result;
        result = 1;

    }

    for(int i = 0; i < t; i++){
        cout << "Case #" << i+1 << ": " << output[i] << endl;
    }

    return 0;
}