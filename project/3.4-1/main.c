#include <stdio.h>
#include <math.h>
int main()
{
    double a;
    int num;
    printf("你有1000块钱，想存5年\n你有5种选择方案：\n");
    for(int i = 0;i < 5;i--){
        printf("1.一次性存5年期\n");
        printf("2.先存2年期，到期后将本息再存3年期\n");
        printf("3.先存3年期，到期后将本息再存2年期\n");
        printf("4.存一年期到期后将本息再存1年期，连续存5次\n");
        printf("5.存活期，每一季度结算一次\n请输入数字选择方案\n");
        scanf("%d",&num);
        switch(num){
            case 1:
                printf("\n五年后你将会有%.2lf块钱\n\n",1000*(1 + 0.03*5));
                break;
            case 2:
                printf("\n五年后你将会有%.2lf块钱\n\n",1000*(1 + 0.021*2)*(1 + 0.0275*3));
                break;
            case 3:
                printf("\n五年后你将会有%.2lf块钱\n\n",1000*(1 + 0.021*3)*(1 + 0.0275*2));
                break;
            case 4:
                printf("\n五年后你将会有%.2lf块钱\n\n",1000*1.015*1.015*1.015*1.015*1.015);
                break;
            case 5:
                a = pow(1 + 0.0035/4,20);
                printf("\n五年后你将会有%.2lf块钱\n\n",1000 * a);
                break;
            default :
                printf("\n没找到你输入的选项！\n\n");
        }
        printf("您是要继续选择方案还是退出（1.继续\t2.退出）\n");
        scanf("%d",&num);
        if(num != 1){
            i = 1000000000;
        }
    }
    return 0;
}
