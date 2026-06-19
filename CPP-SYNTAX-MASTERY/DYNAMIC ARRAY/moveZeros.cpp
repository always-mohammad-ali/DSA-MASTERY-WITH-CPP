#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {0, 3, 0, 5};

    int i = 0;
    int count = 0;

    while(i < nums.size()){
        if(nums[i] == 0){
            nums.erase(nums.begin()+i);
            count++;
        }else{
            i++;
        }
        
    }

    

    for(int x : nums){
        cout << x << endl;
    }

    return 0;
}