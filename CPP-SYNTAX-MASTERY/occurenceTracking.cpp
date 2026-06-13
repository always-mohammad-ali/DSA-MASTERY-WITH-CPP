#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> uniqueName;
    string name;
   

    while (cin >> name && name != "s"){

         bool alreadyExists = false;
        
        for(int i = 0; i < uniqueName.size(); i++){
            if(uniqueName[i] == name){
                alreadyExists = true;
                break;
            }

        }

         if(alreadyExists == false){
                uniqueName.push_back(name);
            }
    }
    

    for(int i = 0; i < uniqueName.size(); i++){
        cout << uniqueName[i];
    }

    return 0;
}