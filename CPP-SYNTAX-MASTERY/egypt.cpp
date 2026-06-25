#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    
    int a, b, c;
    vector<string> output;
    int count = 0;

    while(cin >> a >> b >> c){
        if(a==0 && b==0 &&c==0){
            break;
        }
        count++;
        if(a > b){ swap(a, b);}
        if(b > c){ swap(b, c);}
        if(a > b){ swap(a, b);}

        if((((a*a) + (b*b)) == (c * c))){
            output.push_back("right");
        }else{
            output.push_back("wrong");
        }
    }

    for(int i = 0; i < count; i++){
        cout << output[i] << endl;
    }

    return 0;
}