#include<iostream>
using namespace std;
int main(){

    int tc;
    cin>>tc;
    while (tc--)
    {
        int x,y;
        cin>>x>>y;
        int calci=x/(y+y);
        cout<<calci<<endl;
    }
    return 0;
}