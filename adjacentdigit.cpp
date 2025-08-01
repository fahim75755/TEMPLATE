#include<bits/stdc++.h>

using namespace std;

int main(){
int i,x,y,r,n;
int sum1=0;
int a,b ,m;
int sum2;
cin>>m;
for(i=0;i<m;i++){

    cin>>x>>y;

for(a=1;;a++){
n=a;
    r=n%10;
    sum1 +=r;
    n /=10;

if (sum1>=x)
break;

}
if(sum1==x){

    b=a+1;
sum2= sum1+(b%10);
if (sum2==y){
    cout<<"yes "<<endl;
}
    
}
else cout<<"No "<<endl;
}
}