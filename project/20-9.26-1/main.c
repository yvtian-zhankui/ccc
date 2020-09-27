#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c = 1,d,e;
    do{printf("输入一个奇数\n");
    scanf("%d",&a);//接受菱形大小
    }while(a % 2 == 0);
    d = a;
    a /= 2;
    b = a + 1;
    e = b;
    for(int i = 0;i < e;i++){
        for(int t =1;t < b;t++){
            printf(" ");
            }
        for(int p = 0;p < c;p++){
            printf("*");
        }

        printf("\n");
        c += 2;
        b--;
    }
    b = 1;
    c = d - 2;
    for(int i =0;i < a;i++){
        for(int t = 0;t < b;t++){
            printf(" ");
        }
        for(int p = 0; p < c;p++){
            printf("*");
        }
        printf("\n");
        b++;
        c -= 2;
    }
    return 0;
}
