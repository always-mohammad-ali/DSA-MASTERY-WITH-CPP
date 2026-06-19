#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    int even[] = {3, 4, 5};
   // cout << even.length(); static array doesn't have length, 

    vector<int> array = {4, 5, 1};

    array.insert(array.begin()+2, 5);
    array.erase(array.begin()+1);

  string name = "ali";
  name.insert(3, "m");
  name.insert(4, " bro ");

  

  name.insert(name.size(), "sei");


  cout << "Name before erase : " << name << endl;

  name.erase(name.begin());

  cout << "Name after erase : " << name << endl;

  vector<int> nums = {1, 2, 3, 4};
  cout << "Array size : " << nums.size() << endl;
  
  



    return 0;
}