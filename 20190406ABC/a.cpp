#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> ant(5);
  for(int i=0;i<5;i++){
    cin >> ant.at(i);
  }
  int k;
  cin >> k;
  sort(ant.begin(), ant.end());
  if(ant.at(4) - ant.at(0) <= k){
    cout << "Yay!" << endl;
    return 0;
  }
  cout << ":(" << endl;
}
