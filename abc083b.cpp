#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<cstddef>
using namespace std;

int main(){
  int n, a, b;
  int total = 0;
  cin >> n >> a >> b;

  for(int x = 1; x <= n;x++){
    int sum = 0;
    string cur = to_string(x);
    for(int i = 0; i < cur.size(); i++){
      sum += cur[i] - '0';
    }
    //cout << cur << " " << sum << endl;
    if(sum <= b && sum >= a){
      total += x;
    }
  }

  cout << total << endl;
  return 0;
}
