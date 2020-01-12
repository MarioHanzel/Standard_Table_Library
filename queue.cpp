#include <bits/stdc++.h>
using namespace std;

int main() {
  queue<int> q;
  cout << q.empty();  // prints 1
  q.push(10);  
  q.push(12);
  cout << q.front();  // prints 10
  q.pop();
  cout << q.front();  // prints 12

  return 0;
}
