#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans = max(a*b,a+b);
    ans = max(ans*c,ans+c);
    int an2 = max(c+b,c*b);
    an2 = max(an2*a,an2+a);
    cout<<max(ans,an2);
    return 0;
}