#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> array;
    int num;
    
    vector<int> counts;

    

    while(cin >> num){
        

        bool found = false;

        for(int i = 0; i < array.size(); i++){
        if(array[i] == num){
          counts[i]++;
          found = true;
          break;
        }
      }

      if(found == false){
        array.push_back(num);
        counts.push_back(1);
      }

      
             
    }

    for(int i = 0; i < array.size(); i++){
        cout << array[i] << " " << counts[i] << endl;
    }


    return 0;
}