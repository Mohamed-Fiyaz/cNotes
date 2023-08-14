//using malloc in matrix multiplication
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,k,r,c;
    printf("Enter rows: ");
    scanf("%d",&r);
    printf("Enter columns: ");
    scanf("%d",&c);
    int **a=(int**)malloc(r*sizeof(int));
    int **b=(int**)malloc(r*sizeof(int));
    int **mul=(int**)malloc(r*sizeof(int));
    for(i=0;i<r;i++){
        a[i]=(int*)malloc(c*sizeof(int));
        b[i]=(int*)malloc(c*sizeof(int));
        mul[i]=(int*)malloc(c*sizeof(int));
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter [%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            mul[i][j]=0;
            for(k=0;k<c;k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",mul[i][j]);
        }printf("\n");
    }
    for(i=0;i<r;i++){
        free(a[i]);
        free(b[i]);
        free(mul[i]);
    }
    free(a);
    free(b);
    free(mul);
    return 0;
}

#include<stdio.h>
struct student{
    char name[20];
    int age;
    int phyM;
    int chemM;
    int mathM;
};