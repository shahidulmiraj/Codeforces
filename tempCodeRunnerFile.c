#include <stdio.h>

int main(){ 

int t;

unsigned long int n,count=0,i;

scanf("%d",&t);

while(t--){

scanf("%uld",&n);

if(n%2!=0 && n>1) printf("YES\n");

else{

for(i=3;i<=n;i+=2){

if(n%i==0) {

count++;

if(count>0) break;

}
}
if(count>0) printf("YES\n");

else printf("NO\n");

count=0;

}
}


return 0;
}