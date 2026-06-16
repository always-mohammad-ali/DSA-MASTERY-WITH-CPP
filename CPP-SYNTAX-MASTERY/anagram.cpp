#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    string word1, word2;
    cin >> word1 >> word2;

    for(int i = 0; i < word1.length(); i++){
        cout << word1[i] << endl;
        cout << word2[i] << endl;
    }
    
   

    
    return 0;
}