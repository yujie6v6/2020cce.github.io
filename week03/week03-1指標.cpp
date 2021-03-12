#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p=666;

    printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}
