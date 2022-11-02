#include<stdio.h>
#include<string.h>
int main()
{
    int n,j=0,count=0;
    char stone[50];
    scanf("%d %s",&n,&stone);
    while(j!=n){
        int check=0;
        if(stone[j]=='R'){
            while(stone[j+1]=='R'){
                count++;
                j++;
                check=1;
            }
            if(check==0){
                j++;
            }
        }
        else if(stone[j]=='G'){
            while(stone[j+1]=='G'){
                count++;
                j++;
                check=1;
            }
            if(check==0){
                j++;
            }
        }
        else{
            while(stone[j+1]=='B'){
                count++;
                j++;
                check=1;
            }
            if(check==0){
                j++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}