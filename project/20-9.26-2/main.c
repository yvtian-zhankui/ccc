#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int nums;
    //int i;
    printf("请输入一个数字!\n");
    scanf("%d",&num);
    nums = num;
    for(int i = 0;num > 1;i++){
        num /= 10;
    }
    const int p = i;
    int num1[p];
    for(int t = i;t > 0;t--){
        num1[p] = nums % 10 ;
        nums /= 10;
    }

    return 0;
}
