//A week consists of 7 days (Monday to Sunday). Akash takes a leave every Saturday.

// If a month consists of N days and the first-day of the month is Monday, find the number of days Akash would take a leave in the whole month.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc=0;
    cin>>tc;
    while (tc--)
    {
        int n=0,temp=0;
        cin>>n;
        if(n<6){
            cout<<"0"<<endl;
        }
        else{
            int temp=(n+1)/7;
            cout<<temp<<endl;
        }

    }
    return 0;
}