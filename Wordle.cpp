#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while (tc--)
    {
        string s,t,sample;
        cin>>s>>t;
        int n=s.length();
        for (int i = 0; i < n; i++)
        {
            if(s[i]==t[i]){
                sample=sample+'G';
            }
            else
            sample=sample+'B';
        }
        cout<<sample<<endl;

    }
    
}