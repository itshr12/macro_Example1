#include<stdio.h>
#define AM(x,y)((x+y)/2)
#define AB(x)(x<0?x*-1:x)
#define LU(x)(x+32)
int main()
{
    int q,w,e,r,t,qf,ef;
    char qq;
    printf("enter two number: ");
    scanf("%d %d",&q,&w);
    e=AM(q,w);
    printf("Mean is %d\n",e);
    printf("enter any number of which absolute is going to find :");
    scanf("%d",&qf);
    ef=AB(qf);
    printf("Absolute value is: %d",ef);

    fflush(stdin);

    printf("\nnenter any upper case character :");
    scanf("%c",&qq);
    ef=LU(qq);
    printf("Lower case character is :%c",ef);


}
