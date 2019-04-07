#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> dur(5);
  vector<int> hasu(5);
  int time = 0;
  for(int i=0; i<5; i++){
    cin >> dur.at(i);
    hasu.at(i) = dur.at(i) % 10;
    if(hasu.at(i) != 0){
      time += (dur.at(i) / 10 + 1) * 10;
    }else{
      time += (dur.at(i) / 10) * 10;
      hasu.at(i) = 10;
    }
  }
  sort(hasu.begin(), hasu.end());
  time -= (10 - hasu.at(0));
  cout << time << endl;
}
