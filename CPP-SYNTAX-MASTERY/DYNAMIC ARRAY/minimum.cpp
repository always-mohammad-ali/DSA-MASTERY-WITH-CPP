#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {-4444444,8, 3, 9, 1, -23, -3212, 500};

    int min = 0;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < min){
            min = nums[i];
        }
    }

    cout << min;

    return 0;
}