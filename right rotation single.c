#include<stdio.h>
#define MAX 100
int main(){
    int n,a[MAX],ec=0,odc=0,,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t=a[i];
    for(i=0;i<n;i++){
       a[i]=a[i+1];
    }
    a[n-1]=t;
    printf("Array after rotation:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}