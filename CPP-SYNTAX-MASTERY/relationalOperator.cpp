#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int nums[t][2];

    for(int i = 0; i < t; i++){
        for(int j = 0; j < 2; j++){
            cin >> nums[i][j];
            
        }
        
    }
    
   for(int i = 0; i < t; i++){

      if(nums[i][0] < nums[i][1]){
        cout << "<" << "\n";
      }else if(nums[i][0] > nums[i][1]){
        cout << ">" << "\n";
      }else{
        cout << "=" << "\n";
      }
    
   }


    return 0;
}