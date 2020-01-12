#include <bits/stdc++.h>
using namespace std;

int main(){

  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5); // stack is now : 5, 4, 3, 2, 1
  
  s.pop(); // stack is now : 4, 3, 2, 1
  cout << s.top(); //prints 4

  return 0;
}
