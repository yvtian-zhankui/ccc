#include <stdio.h>
#include <stdlib.h>

int main()
{
    //��ʱ�ػ����
    int min,i;
    printf("��ѡ���������\n1.��ʱ�ػ�\t2.ȡ���ػ� \n");
    scanf("%d",&i);
    if(i == 1){
        printf("��������ٷ��Ӻ�ػ�\n");
        scanf("%d",&min);
        min *= 60;
        int num[100];
        sprintf(num,"shutdown -s -t %d",min);
        system(num);}
    else{
        system("shutdown /a");
        printf("�ػ���ȡ�� \n");
        system("pause");
        exit(0);
    }
    do{
        printf("ϵͳ������%d���ػ�\n",min);
        min --;
        Sleep(1000);
        system("cls");

        }while(min);

    return 0;
}
