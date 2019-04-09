#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
  string s;
  cin >> s;
  vector<string> pat{"dream", "dreamer", "erase", "eraser"};
  bool match = false;
  while(1){
    match = false;
    for(int i = 0; i < 4; i++){
      //cout << s << " " << pat.at(i) << endl;
      if(s == pat.at(i)){
        cout << "YES" << endl;
        return 0;
      }else if(s.size() > pat.at(i).size() && s.substr(s.size() - pat.at(i).size()) == pat.at(i)){
        //cout << s.size() - pat.at(i).size() << endl;
        s = s.substr(0, s.size() - pat.at(i).size());
        //cout << s << endl;
        match = true;
      }
    }
    if(match){
      continue;
    }
    cout << "NO" << endl;
    return 0;
  }
}
