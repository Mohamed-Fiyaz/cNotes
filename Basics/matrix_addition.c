// Matrix Addition
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c],b[r][c],add[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the elements for a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the elements for b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",add[i][j]);
        }printf("\n");
    }
    return 0;

}