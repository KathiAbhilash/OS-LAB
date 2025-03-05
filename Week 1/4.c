#include<stdio.h>
void main() {
    int i,n,count=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j] && i!=j){
                count++;
            }
        }
    }
    printf("\nNumber of Duplicates:%d",count);
}
