#include<stdio.h>
int main(){
    int i,j,k;
    int arr[3][2]={{1,2},{3,4},{5,6}};
    int brr[2][3]={{1,2,3},{4,5,6}};
    int res[3][3],cr=2;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            res[i][j]=0;
        for(k=0;k<cr;k++){
            res[i][j] += arr[i][k]*brr[k][j];
        }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}