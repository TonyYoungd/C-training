#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,sn,sa;
    double m;
    printf("输入 a,n\n");
    scanf("%d,%d",&a,&n);
    for(m=0,sn=0,sa=a;m<=(n-1);)
    {
        sn=sn+sa;
        sa = sa*10+a;//第m+1个式子
        m++;
    }
    printf("sn=%d",sn);
   return 0;
}
