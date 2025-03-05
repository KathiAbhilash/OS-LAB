#include<stdio.h>
int main() {
    int m,n,num,k=1;
    printf("Enter no of rows: ");
    scanf("%d",&m);
    printf("Enter no of coloumns: ");
    scanf("%d",&n);
    int mat[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++){
        printf("Enter A%d%d:",i+1,j+1);
        scanf("%d",&num);
        mat[i][j]=num;
        }}
    for(int i=0;i<m;i++) {
            int sum=0;
        for(int j=0;j<n;j++){
            sum+=mat[i][j];
        }
        printf("Sum of row %d:%d\n",k++,sum);
    }
    k=1;
    for(int j=0;j<n;j++) {
        int sum=0;
        for(int i=0;i<m;i++){
            sum+=mat[i][j];
        }
        printf("Sum of coloumn %d:%d\n",k++,sum);
    }
    return 0;
}
