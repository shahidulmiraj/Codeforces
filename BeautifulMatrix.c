#include<stdio.h>
#include<math.h>
int main()
{
    int matrix[5][5];
    int i,j,a=0,b=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(matrix[i][j]==1){
                a=i;
                b=j;
                break;
            }
        }
    }
    int ans=abs(a-2)+abs(b-2);
    printf("%d\n",ans);
    return 0;
}