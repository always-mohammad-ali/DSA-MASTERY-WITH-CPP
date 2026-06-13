#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int array[t][3];
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 3; j++){
            cin >> array[i][j];
        }
    }
    
    int totalStudentAppeared = 0;
    double totalPassedPercentage = 0;

    for(int i = 0; i < t; i++){
 
         totalStudentAppeared = array[i][0] * array[i][1];
         totalPassedPercentage = (array[i][2] * 100.0) / totalStudentAppeared;

          if(totalPassedPercentage > 50){
            cout << "YES\n";
          }else{
            cout << "NO\n";
          } 
      
    }
       

    return 0;
}