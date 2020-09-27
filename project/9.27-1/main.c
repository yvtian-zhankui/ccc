#include <stdio.h>
#include <stdlib.h>

int main()
{
    //定时关机软件
    int min,i;
    printf("请选择操作类型\n1.定时关机\t2.取消关机 \n");
    scanf("%d",&i);
    if(i == 1){
        printf("请输入多少分钟后关机\n");
        scanf("%d",&min);
        min *= 60;
        int num[100];
        sprintf(num,"shutdown -s -t %d",min);
        system(num);}
    else{
        system("shutdown /a");
        printf("关机已取消 \n");
        system("pause");
        exit(0);
    }
    do{
        printf("系统将会在%d秒后关机\n",min);
        min --;
        Sleep(1000);
        system("cls");

        }while(min);

    return 0;
}
