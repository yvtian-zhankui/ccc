#include <stdio.h>
#include <math.h>
int main()
{
    double a;
    int num;
    printf("����1000��Ǯ�����5��\n����5��ѡ�񷽰���\n");
    for(int i = 0;i < 5;i--){
        printf("1.һ���Դ�5����\n");
        printf("2.�ȴ�2���ڣ����ں󽫱�Ϣ�ٴ�3����\n");
        printf("3.�ȴ�3���ڣ����ں󽫱�Ϣ�ٴ�2����\n");
        printf("4.��һ���ڵ��ں󽫱�Ϣ�ٴ�1���ڣ�������5��\n");
        printf("5.����ڣ�ÿһ���Ƚ���һ��\n����������ѡ�񷽰�\n");
        scanf("%d",&num);
        switch(num){
            case 1:
                printf("\n������㽫����%.2lf��Ǯ\n\n",1000*(1 + 0.03*5));
                break;
            case 2:
                printf("\n������㽫����%.2lf��Ǯ\n\n",1000*(1 + 0.021*2)*(1 + 0.0275*3));
                break;
            case 3:
                printf("\n������㽫����%.2lf��Ǯ\n\n",1000*(1 + 0.021*3)*(1 + 0.0275*2));
                break;
            case 4:
                printf("\n������㽫����%.2lf��Ǯ\n\n",1000*1.015*1.015*1.015*1.015*1.015);
                break;
            case 5:
                a = pow(1 + 0.0035/4,20);
                printf("\n������㽫����%.2lf��Ǯ\n\n",1000 * a);
                break;
            default :
                printf("\nû�ҵ��������ѡ�\n\n");
        }
        printf("����Ҫ����ѡ�񷽰������˳���1.����\t2.�˳���\n");
        scanf("%d",&num);
        if(num != 1){
            i = 1000000000;
        }
    }
    return 0;
}
