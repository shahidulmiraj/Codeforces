#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        b=b*2;
        if(a==0){
            printf("1\n");
        }
        else{
            c=a+b;
            printf("%d\n",c+1);
        }
    }
    return 0;
}