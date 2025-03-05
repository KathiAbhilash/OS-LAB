#include<stdio.h>
int main() {
    int m,num,sum=0;
    printf("Enter no of rows: ");
    scanf("%d",&m);
    int mat[m][m];
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++){
        printf("Enter A%d%d:",i+1,j+1);
        scanf("%d",&num);
        mat[i][j]=num;
        if(i==j){
            sum+=num;
        }
        }
    }
    printf("Sum of left diagonal elements in a matrix: %d",sum);
    return 0;
}
