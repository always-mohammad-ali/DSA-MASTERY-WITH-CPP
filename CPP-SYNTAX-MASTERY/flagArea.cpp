#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    int length[t];
    
    for(int i = 0; i < t; i++){
        cin >> length[i];
    }

    for(int i = 0; i < t; i++){
       double radius = length[i]/5.0;
       double width = length[i] * (6.0/10.0);
       double redCircleArea = (acos(-1.0) * radius * radius);
       double greenPartArea = ((length[i] * width) - redCircleArea);

       cout << fixed << setprecision(2) << redCircleArea << " " << greenPartArea << endl;
    }
    
   
    return 0;
}