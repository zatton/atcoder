#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
  int n;
  long long y;
  cin >> n >> y;
  //1000
  for(int i = 0; i <= y/10000; i++){
    int total_a = 10000 * i;
    //5000
    for(int j = 0; j <= (y - total_a)/5000; j++){
      int rest = y - total_a - 5000 * j;
      if(rest % 1000 == 0 && rest/1000 + i + j == n){
        cout << i << " " << j << " " << rest/1000 << endl;
        return 0;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
}
