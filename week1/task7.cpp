#include <iostream>
#include <string>
using namespace std;
string s;
int r=-2, j;
int main(){
  cin>>s;
  for(int i=0;i<s.size();++i)
    if(s[i]=='f' && r<0) { ++r; j = i; }
  if(r>-1) cout << j;
  else cout << r;
}
