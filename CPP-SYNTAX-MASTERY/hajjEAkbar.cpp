#include <iostream>
#include <string>
using namespace std;

int main(){
    string value;
    int caseNumber = 1;

    while(cin >> value){
        if(value == "*"){
            break;
        }
        
        if(value == "Hajj"){
            cout << "Case " << caseNumber << ": Hajj-e-Akbar\n";
        }else if(value == "Umrah"){
            cout << "Case " << caseNumber << ": Hajj-e-Asghar\n";
        }

        caseNumber++;
        
    }



    return 0;
}