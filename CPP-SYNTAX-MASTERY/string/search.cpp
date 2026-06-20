#include <iostream>
#include <string>
using namespace std;

int main(){

    string sentence = "I love C++";
    cout << sentence.find("C++") << endl;

    if(sentence.find("java") == string::npos){
        cout << "not found" << endl;
    }

    cout << sentence.substr(2, 5);



    return 0;
}