#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> nums = {1, 2, 2, 1, 3, 3, 5, 5, 8, -12, -13, -12};
    vector<int> unique;

   

   for(int x : nums){
       bool found = false;
    for(int y : unique){
        if(x == y){
            found = true;
            break;
        }

    }

    if(found == false){
        unique.push_back(x);
    }

   }


    for(int x : unique){
        cout << x << endl;
    }

    return 0;
}