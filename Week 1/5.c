#include<stdio.h>
int main() {
    int arr[10];
    int num,temp;
    for(int i=0;i<10;i++) {
    printf("Enter number %d:",i+1);
    scanf("%d",&num);
    arr[i]=num;
    }
    for(int i=0;i<10;i++) {
        for(int j=i+1;j<10;j++){
            if(arr[i]>arr[j]){


                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++) {
        printf("%d ",arr[i]);
    }
    printf("\nSecond largest element in the array is %d",arr[9]);
    return 0;
}
