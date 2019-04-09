#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
  int n, ans = 0;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i<n; i++){
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  for(int i = 0; i < n; i++){
    if(i%2!=n%2){
      ans += a.at(i);
    }else{
      ans -= a.at(i);
    }
  }
  cout << ans << endl;
  return 0;
}
