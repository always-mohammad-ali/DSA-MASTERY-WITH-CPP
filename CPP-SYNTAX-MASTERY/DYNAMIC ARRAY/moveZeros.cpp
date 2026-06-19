#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {0, 3, 0, 5};

    int i = 0;
    
    int n = nums.size();

    while(i < n){
        if(nums[i] == 0){
            int zero = nums[i];
            nums.erase(nums.begin()+i);
            nums.push_back(zero);

            n--;

        }else{
            i++;
        }
        
    }

    

    for(int x : nums){
        cout << x << endl;
    }

    return 0;
}