// Matrix Multiplication
#include<stdio.h>
int main() {
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c], b[r][c], mul[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter the elements for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter the elements for b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            mul[i][j]=0;
            for (int k = 0; k < c; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",mul[i][j]);
        }printf("\n");
    }
    return 0;
}