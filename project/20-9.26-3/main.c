#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums,num,i;
    printf("请输入一个数据\n");
    scanf("%d",&num);
    nums = num;
    char ll[10][4] = {"零","一","二","三","四","五","六","七","八","九"};
    char kk[8][9] = {"","十","百","千","万","十万","百万","千万","亿"};
    for(i  = 0;num >= 1;i++){
        num /= 10;
    }
    printf("输入数据为%d位数\n",i);
    const int num1 = i;
    int num2[num1];
    for(int t = i;t > 0;t--){
        num2[t] = nums % 10;
        nums /= 10;
        printf("写入数据为 %d \n",num2[t]);
    }
    for(int m = 0; m < i;m++){
        printf("%c",ll[num2[m]]);

    }

    return 0;
}
