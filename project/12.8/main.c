#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("性格测试：\n如果你是以为君王，对于身旁的伴侣你希望？\n1、只要一位珍爱的妻子\n2、可以有两位以上的爱人\n3、拥有三千佳丽\n");
    do{
    scanf("%d",&num);

    switch( num )
    {

        case 1:
            printf("您选择了生命中的唯一，然而我早已看出一切\n");
            break;
        case 2:
            printf("你居然是这样的人！\n");
            break;
        case 3:
            printf("男人啊！\n");
            break;
        default :
            printf("只能输入1-3\n");
            printf("请从新输入\n");
            break;
    }
    }
    while(num>=4 || num <= 0);
    getch();

}
