#include <stdio.h>
int main(){
    int a=5;
    int *p =&a;
    printf("%d\n",*p);
    printf("%p\n",&a);
    printf("%p\n",p+1);
    printf("%d\n",*p+1);
    return 0;
}