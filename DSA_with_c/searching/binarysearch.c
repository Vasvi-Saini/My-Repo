#include<stdio.h>
int main(){
    int a[50],n,i,item,loc,mid,end,beg,flag=0;
    printf("how many elements");
    scanf("%d,&n");
    for(int i=0; i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("ENTER THE ELEMENTS TO BE SEARCHED");
    scanf("%d",&item);
    loc=0;
    beg = 0;
    end=n-1;
    while((beg<=end)&&(item!=a[mid])){
        mid = (beg+=end)/2;
        if(item==a[mid]){
            loc=mid;
            printf("POSITION OF THE ELEMENT IS %d",loc+1);
            flag=flag + 1;
        }
        else if (item<a[mid])
        end = mid+1;
    }
    if(flag==0){
        printf("ITEM NOT FOUND");
    }
    return 0;
}