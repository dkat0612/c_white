#include <iostream>
#include <cmath>
using namespace std;
double a, b, c, d, x1, x2;
int main(){
  cin>>a>>b>>c;
  d = b*b - 4*a*c;
  if(a!=0 && d>=0){
    x1=(-b - sqrt(d))/(2*a);
    x2=(-b + sqrt(d))/(2*a);
  } else if(a==0 && b!=0){
    x1=x2=-c/b;
  } else return 0;
  if(x1==x2) cout<<x1;
  else cout<<x1<<" "<<x2;
}
