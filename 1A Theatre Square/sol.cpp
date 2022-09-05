#include<iostream>
using namespace std;
int main(){
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int x,y;
    x=n/a;
    if(n%a!=0)x+=1;
    y = m/a;
    if(m%a!=0)y+=1;
    cout<< x*y;
    return 0;
}