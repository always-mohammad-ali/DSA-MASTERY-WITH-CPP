#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int t;
    cin >> t;

    int fair[t][2];

    for(int i = 0; i < t; i++){
       for(int j = 0; j < 2; j++){
        cin >> fair[i][j];
       }
    }

    for(int i = 0; i < t; i++){
        fair[i][1] += 1;
    }

    
    for(int i = 0; i < t; i++){
        int fairShare = floor(fair[i][0] / fair[i][1]);

        fair[i][1] -= 1;
        int paidByYou = fair[i][0] - (fairShare * fair[i][1]);

        cout << paidByYou << endl;

    }
    
    return 0;
}