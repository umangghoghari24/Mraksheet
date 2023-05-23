#include<stdio.h>
int main()
{
    int guj,math,comp,eng,phy,total,per;
    
    printf("Enter guj mark\n");
    scanf("%d",&guj);
    printf("Enter math mark\n");
    scanf("%d",&math);
     printf("Enter comp mark\n");
     scanf("%d",&comp);
      printf("Enter eng mark\n");
      scanf("%d",&eng);
      printf("Enter phy mark\n");
      scanf("%d",&phy);

    total=guj+math+comp+eng+phy;
    per=total*100/500;
  
     printf("guj=%d\n",guj);
     printf("math=%d\n",math);
     printf("comp=%d\n",comp);
     printf("eng=%d\n",eng);
     printf("phy=%d\n",phy);
     printf("**********\n");
     printf("total:%d\n",total);
     printf("per=%d\n",per);
}