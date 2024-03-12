#include<stdio.h>

int a[100],n,i,j,temp,k;

void insertion_sort(int a[],int n){
for(k=1;k<=n-1;k++){
    temp = a[k];
    j = k-1;
    while((temp<a[j]) &&(j>=0)){
        a[j+1] = a[j];
        j--;
    }
    a[j+1]=temp;
}
}
int main(){
    printf("enter the  number of elements :");
    scanf("%d",&n);
    for(int i=0; i<=n-1; i++){
        scanf("%d",&a[i]);
    }
     insertion_sort( a, n);
     printf("the elements of sorted array:\n");
     for(int i=0; i<=n-1; i++){
        printf("%d ",a[i]);
}
return 0;
}