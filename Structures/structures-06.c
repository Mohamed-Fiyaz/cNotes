// pointer to structure variable
#include<stdio.h>
struct abc{
    int x;
    int y;
};
int main(){
    struct abc a = {0,1};
    struct abc *ptr = &a;
    printf("%d %d",ptr->x,ptr->y); // (*ptr).x is same as ptr->x here ptr=&a,
    // so we can say that ptr=&a therefore, (*&a).x here * and & are cancelled so ptr->x is same as a.x
    return 0;
}
