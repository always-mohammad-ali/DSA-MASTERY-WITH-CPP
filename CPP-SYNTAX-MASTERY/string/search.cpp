#include <iostream>
#include <string>
using namespace std;

int main(){

    string sentence = "I love C++";
    cout << sentence.find("C++") << endl;

    cout << sentence.substr(2, 5);

    return 0;
}