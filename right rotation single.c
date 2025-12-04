//c program to perform left rotation of array elements//
#include<stdio.h>
#define MAX 100
int main(){
    int n,a[MAX],i,r;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("How many rotation");
    scanf("%d",&r);
    for(i=0;i<r;i++){
        int t=a[0];
        for(int j=0;j<n;j++){
           a[j]=a[j+1];
        }
        a[n-1]=t;
    }
    int t=a[0];
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
