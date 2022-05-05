#include<stdio.h>
#include<string.h>

char n1[100];
char n2[100];      //创建两个字符来实现大数的读取输入
int tempadd[100] = {0};   //创建一个临时数组存储加法运算的中间数组
int shuzun1[100] = {0};
int shuzun2[100] ={0};     //创建两个数组实现对大数的各位数上的读取输入 
int shuzun3[100] = {0};
int shuzun4[100] ={0}; 
int tempsub[100] ={0};   //创建一个临时数组存储减法运算的中间数组,思路基本与加法一致
int main()
{
    int i,j,k,flag = 0;
    scanf("%s %s",n1,n2);

    int lenadd1 = strlen(n1);
    int lenadd2 = strlen(n2);
    for( i = 0;i < lenadd1;i++)
    {
        shuzun1[i] = n1[lenadd1-1-i] - '0';
        //printf("%c",shuzun1[i]);
    }
    for( j = 0;j < lenadd2;j++)
    {
        shuzun2[j] = n2[lenadd2-1-j] - '0';
    }                               //将两个大数拆解为每个数位并倒序存储在最开始创建的两个数组中；其实原因就是我们输入的字符串本身就是倒入的
    //printf("%d %d\n",lenadd1,lenadd2);
    int len = lenadd1 >= lenadd2 ? lenadd1:lenadd2;
    len++;//两个大数相加的结果最多比其中数位最大的再大1
    //printf("%d",len);
    for ( k = 0; k < len ; k++)
    {
        tempadd[k] = shuzun1[k] + shuzun2[k];
        if (flag) tempadd[k]++;
        flag = 0;
        if(tempadd[k] > 9)
        {
            flag = 1;
            tempadd[k]%=10;
        }
        //利用中间数组来存储，并且如果有进位情况，利用flag标记在中间数组中的下一位+1,并且该位应当对10取余
    }
    if (tempadd[len-1] == 0)
    {
        len --;
    }
    for ( i = 0; i < len; i++)
    {
        printf("%d",tempadd[len - i -1]);
        //此处将中间数组逆序输出即可得到正确的结果，但是有一个小小细节值得注意，就是当我们的最高位数并没有进1时，其len位最高保留的依旧是最开始的0，因此我们需要将其进行判断后删掉0
    }
    printf("\n");
    len = lenadd1 >= lenadd2 ? lenadd1:lenadd2;
    if(strcmp(n1,n2)<0 && strlen(n1) == strlen(n2) || strlen(n1) < strlen(n2)) printf("-");
    char temp[100];
    if( strcmp(n1,n2) <0 && strlen(n1) == strlen(n2) || strlen(n1) < strlen(n2))
    {
        strcpy(temp,n1);
        strcpy(n1,n2);
        strcpy(n2,temp);
    } 
    for( i = 0;i < strlen(n1);i++)
    {
        shuzun3[i] = n1[strlen(n1)-1-i] - '0';
    }
    for( j = 0;j < strlen(n2);j++)
    {
        shuzun4[j] = n2[strlen(n2)-1-j] - '0';
    }
    flag = 0;
    for ( k = 0; k <= len ; k++)
    {
        tempsub[k] = shuzun3[k] - shuzun4[k];
        //printf("%d ",tempsub[k]);
        if(flag == 1) tempsub[k]--;
        flag = 0;
        if(tempsub[k] < 0)
        {
            tempsub[k] += 10;
            flag = 1;
        }
        //利用中间数组来存储，并且如果有差位情况，就在中间数组中的下一位-1,并且该位应当应为其对应的绝对值
    }
    for ( i=len; i>=0; i--)
    {
        if (tempsub[i] == 0 && len >= 1) 
        {
            len--;
        }
        else break;
    }
    for ( i = 0; i <= len; i++)
    {
        printf("%d",tempsub[len - i]);
        //此处将中间数组逆序输出即可得到正确的结果，但是有一个小小细节值得注意，就是当我们的最高位数并没有进1时，其len位最高保留的依旧是最开始的0，因此我们需要将其进行判断后删掉0
    }
    return 0;
}