#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("�Ը���ԣ�\n���������Ϊ�������������Եİ�����ϣ����\n1��ֻҪһλ�䰮������\n2����������λ���ϵİ���\n3��ӵ����ǧ����\n");
    do{
    scanf("%d",&num);

    switch( num )
    {

        case 1:
            printf("��ѡ���������е�Ψһ��Ȼ�������ѿ���һ��\n");
            break;
        case 2:
            printf("���Ȼ���������ˣ�\n");
            break;
        case 3:
            printf("���˰���\n");
            break;
        default :
            printf("ֻ������1-3\n");
            printf("���������\n");
            break;
    }
    }
    while(num>=4 || num <= 0);
    getch();

}
