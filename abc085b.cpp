#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
  int n, max, ans = 0;
  cin >> n;
  vector<int> d(n);
  for(int i = 0; i < n; i++){
    cin >> d.at(i);
  }
  sort(d.begin(), d.end());
  max = d.at(n - 1) + 1;
  for(int i = n - 1; i >= 0; i--){
    if(d.at(i) < max){
      max = d.at(i);
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
