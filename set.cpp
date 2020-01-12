#include <bits/stdc++.h>
using namespace std;

int main(){
  set<int> s;
  s.insert(1);
  s.insert(3);
  s.insert(5);
  s.insert(2);
  s.insert(4);
  s.insert(6); // elements in the set will be in this order: 1,2,3,4,5,6
  
  it = s.find(4);
  cout << *it << endl; // prints 4
  s.erase(it); // 4 is deleted from the set
  
  for(it = s.begin(); it != s.end(); it++){
  cout << *it << " ";
  } // prints 1 2 3 5 6
  
  s.clear();
  cout << s.empty() << endl; // returns 1
  


return 0;
}
