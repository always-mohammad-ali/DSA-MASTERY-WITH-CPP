#include <iostream>
#include <string>
using namespace std;

int main(){
    string value;
    cin >> value;

    int i = 0;
    string array[i];

    while(value != "*" && (value == "Hajj" || value == "Umrah")){
        array[i] = value;
        cin >> value;
        i++;
        
    }

    for(int j = 0; j < i; j++){
        if(array[j] == "Hajj"){
            cout << "Case " << j+1 << ": " << "Hajj-e-Akbar \n";
        }else if(array[j] == "Umrah"){
            cout << "Case " << j+1 << ": " << "Hajj-e-Asghar \n";
        }
    }

    return 0;
}