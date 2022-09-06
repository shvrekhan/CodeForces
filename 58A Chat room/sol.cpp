#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="hello";
    int ptr1=0;
    string k;
    cin>>k;
    int ptr2=0;
    for(int i=0;i<k.length();i++){
        if(s[ptr1]==k[ptr2]){
            ptr1++;
            ptr2++;
        }
        else{
            ptr2++;
        }
    }
    if(ptr1>=s.size())cout<<"YES";
    else cout<<"NO";
    return 0;
}