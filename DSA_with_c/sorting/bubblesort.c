#include<stdio.h>
void bubble_sort(int a[],int n){
    int temp,i,j;
    for (i=0;i<=n-1;i++){
            for(j=0;j<n-1; j++){
                if(a[j]>a[j+1]){           //ascending order
                  temp = a[j];
                 a[j] = a[j+1];
                 a[j+1] = temp;
                }
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
     bubble_sort( a, n);
     printf("the elements of sorted array:\n");
     for(int i=0; i<=n-1; i++){
        printf("%d ",a[i]);
}
return 0;
}