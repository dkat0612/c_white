#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a;
vector<int> v;
int main(){
  cin>>a;
  while(a){
    v.push_back(a%2);
    a/=2;
  }
  reverse(begin(v), end(v));
  for(auto d:v)
    cout<<d;
}
