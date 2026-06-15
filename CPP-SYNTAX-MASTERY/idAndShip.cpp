#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;

    char alpha[n];
    string output[n];

    for(int i = 0; i < n; i++){
        cin >> alpha[i];
    }

    for(int i = 0; i < n; i++){
        if(alpha[i] == 'B' || alpha[i] == 'b'){
           output[i] = "BattleShip";
        }else if(alpha[i] == 'C' || alpha[i] == 'c'){
           output[i] = "Cruiser";
        }else if(alpha[i] == 'D' || alpha[i] == 'd'){
           output[i] = "Destroyer";
        }else if(alpha[i] == 'F' || alpha[i] == 'f'){
           output[i] = "Frigate";
        }
    }

    for(int i = 0; i < n; i++){
        cout << output[i] << endl;
    }

    return 0;
}