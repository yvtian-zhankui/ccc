#include <stdio.h>
#include <stdlib.h>

int main()
{
    int name;
    int * ptr_name;
    int ** ptr_name2;
    ptr_name2 = &ptr_name;
    ptr_name = &name;
    printf("%p\n",ptr_name);
    *ptr_name = 1000;
    printf("%d\n",*ptr_name);
    printf("%d\n",**ptr_name2);
    return 0;
}
