#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<long>& vec){
  for(int i=0; i<vec.size(); i++){
    cout << vec.at(i) << endl;
  }
}

int main() {
  int x, y, z;
  int k;
  //cin >> x >> y >> z >> k;
  //cin >> x;
  //cin >> y;
  //cin >> z;
  //cin >> k;
  x=10;y=10;z=10;k=20;
  vector<long> a{7467038376, 5724769290, 292794712, 2843504496, 3381970101, 8402252870, 249131806, 6310293640, 6690322794, 6082257488 };
  vector<long> b{1873977926, 2576529623, 1144842195, 1379118507, 6003234687, 4925540914, 3902539811, 3326692703, 484657758, 2877436338};
  vector<long> c{4975681328, 8974383988, 2882263257, 7690203955, 514305523, 6679823484, 4263279310, 585966808, 3752282379, 620585736};
  //for(int i=0; i<x; i++){
  //  cin >> a.at(i);
  //}
  //for(int i=0; i<y; i++){
  //  cin >> b.at(i);
  //}
  //for(int i=0; i<z; i++){
  //  cin >> c.at(i);
  //}
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  cout << "a" << endl;
  print(a);
  cout << "b" << endl;
  print(b);
  cout << "c" << endl;
  print(c);
  int p=x-1;
  int q=y-1;
  int r=z-1;
  //ans.at(0) = a.at(p) * b.at(q) * c.at(r);
  cout << "ans" << endl;
  cout << a.at(p) << "+" << b.at(q) << "+" << c.at(r) << endl;
  cout << p << q << r << endl;
  cout << a.at(p) + b.at(q) + c.at(r) << endl;
  for(int i=1; i<k; i++){
    long da = 0;
    long db = 0;
    long dc = 0;
    if(p>0){
      da = a.at(p-1) + b.at(q) + c.at(r);
    }
    if(q>0){
      db = a.at(p) + b.at(q-1) + c.at(r);
    }
    if(r>0){
      dc = a.at(p) + b.at(q) + c.at(r-1);
    }
    if(da > db && da > dc){
      cout << a.at(p-1) << "+" << b.at(q) << "+" << c.at(r) << endl;
      cout << p-1 << q << r << endl;
      //ans.at(i) = da;
      cout << da << endl;
      p--;
    }else if(db > dc){
      cout << a.at(p) << "+" << b.at(q-1) << "+" << c.at(r) << endl;
      cout << p << q-1 << r << endl;
      //ans.at(i) = db;
      cout << db << endl;
      q--;
    }else{
      cout << a.at(p) << "+" << b.at(q) << "+" << c.at(r-1) << endl;
      cout << p << q << r-1 << endl;
      //ans.at(i) = dc;
      cout << dc << endl;
      r--;
    }
  }
}
