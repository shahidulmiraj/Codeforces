#include<stdio.h>
#include<math.h>
int main()
{
    int t,x,y,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        if(x>y){
            printf("0 0\n");
        }
        else{
            if(y%x!=0){
                printf("0 0\n");
            }
            else{
            int z=y/x;
                for(a=1;a<=z;a++){
                    if(z%a==0){
                        b=z/a;
                        printf("%d %d\n",a,b);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}