#include<stdio.h>

void selection_sort(int a[],int n){
  int min,loc,temp,i,j;
  min=a[0];
  for(i=0; i<=n-1;i++){
    min=a[i];
    loc = i;
    for (j=i+1; j<=n-1; j++){
        if(a[j]<min){
            min=a[j];
            loc = j;
        }
        }
        if(loc!=i){
            temp = a[i];
            a[i]=a[loc];
            a[loc]=temp;
        }
    }
  }

int main(){
    int a[50],n,i;
    printf("enter the  number of elements :");
    scanf("%d",&n);
    for(int i=0; i<=n-1; i++){
        scanf("%d",&a[i]);
    }
     selection_sort( a, n);
     printf("the elements of sorted array:\n");
     for(int i=0; i<=n-1; i++){
        printf("%d ",a[i]);
}
return 0;
}