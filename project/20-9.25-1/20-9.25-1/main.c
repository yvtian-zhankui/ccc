#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int nums = 1;
    int not = 0;
    printf("�����������ת��������\n");
    scanf("%d",&num);

    while(nums){
        nums = num % 10;
        not++;
    }
    printf("%d\n",not);
    return 0;
}
