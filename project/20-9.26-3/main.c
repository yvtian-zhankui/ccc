#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums,num,i;
    printf("������һ������\n");
    scanf("%d",&num);
    nums = num;
    char ll[10][4] = {"��","һ","��","��","��","��","��","��","��","��"};
    char kk[8][9] = {"","ʮ","��","ǧ","��","ʮ��","����","ǧ��","��"};
    for(i  = 0;num >= 1;i++){
        num /= 10;
    }
    printf("��������Ϊ%dλ��\n",i);
    const int num1 = i;
    int num2[num1];
    for(int t = i;t > 0;t--){
        num2[t] = nums % 10;
        nums /= 10;
        printf("д������Ϊ %d \n",num2[t]);
    }
    for(int m = 0; m < i;m++){
        printf("%c",ll[num2[m]]);

    }

    return 0;
}
