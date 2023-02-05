#include <iostream>
using namespace std;
const int N=1e6+10;
int nex[N],n,m;
char p[N],s[N];
int main(){
    cin>>n>>p>>m>>s;
    nex[0]=-1;
    for(int i=1,j=-1;i<n;++i){
        while(j!=-1 && p[i]!=p[j+1]) j=nex[j];
        if(p[i]==p[j+1]) j++;
        nex[i]=j;  
    }
    int j=-1;
    for(int i=0;i<m;++i){
        while(j !=-1 && s[i]!=p[j+1]) j=nex[j];
        if(s[i]==p[j+1])  j++;
        if(j==n-1){
            cout<<i-j<<" ";
            j=nex[j];
        }
    }
    return 0;
}
