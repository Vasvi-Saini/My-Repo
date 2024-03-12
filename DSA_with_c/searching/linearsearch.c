#include<stdio.h>
int main(){
    int a[50],n,i,item,loc=-1;
    printf("enter no of elements \n");
    scanf("%d",&n);
    for(i=0; i<n-1;i++){
     scanf("%d",&a[i]);
    }
    printf("enter the item to be searched: \n");
    scanf("%d",&item);
    for(i=0;i<n-1;i++){
        if(item==a[i]){
            loc=i;
            break;
        }
    
    if(loc>=0){
        printf("%d is  found at position %d",item,loc+1);
    }
    else printf("Item doesn't exists");
    }
    return 0;
}