// Matrix Transpose
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c],t[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the elements for a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++)
        for(int j=0; j<c;j++)
            t[i][j]=a[j][i];

    printf("Original Matrix: \n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }

    printf("Transpose: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",t[i][j]);
        }printf("\n");
    }
    return 0;
}
