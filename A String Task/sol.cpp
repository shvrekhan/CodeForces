#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,ans;
    cin>>s;
    for(int i=0;i<s.size();i++){
        char c = s[i] ;
        if((c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' || c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U' || c=='Y' || c=='y') ){
            continue;
            }
        else{
            ans = ans+".";
            int x= c;
            if(x>=97 && x<=122)ans+=c;
            if(x>=65 && x<=90){
                c=c+32;
                ans+=c;
        }
        }
    }
    cout<<ans;
    return 0;
}