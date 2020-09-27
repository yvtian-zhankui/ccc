#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int nums = 1;
    int not = 0;
    printf("将输入的数字转换成中文\n");
    scanf("%d",&num);

    while(nums){
        nums = num % 10;
        not++;
    }
    printf("%d\n",not);
    return 0;
}
