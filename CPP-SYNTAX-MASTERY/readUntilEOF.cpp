#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> numsArray;
    int num;
    int total = 0;

    while(cin >> num){
        numsArray.push_back(num);
        total += num;
    }
    cout << total;

    return 0;
}