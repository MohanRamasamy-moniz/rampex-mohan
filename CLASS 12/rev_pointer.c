#include <stdio.h>
int main() {
    int arr[] = {50,20,30,25,5};
    int*ptr = arr;
    for(int i=5;i>-1;i--)
    {
        printf("%d\n",*(ptr+i));
    
}
return 0;
}