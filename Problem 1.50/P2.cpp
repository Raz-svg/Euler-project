#include <iostream>
using namespace std;
int main(){
    int a[100000];
    a[0]=1;
    a[1]=2;
    int ans=0;
    for (int i=2;i<45;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;a[i]<4000000;i++){
       if(a[i]%2==0){
        ans=ans+a[i];
       }
    }
    cout<<ans;


}