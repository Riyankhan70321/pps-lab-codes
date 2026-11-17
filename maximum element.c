#include<stdio.h>
int main(void)
{
int a[5],i,max;
for(i=0;i<5;i++)
scanf("%d",a[i]);
for(i=0;i<5;i++){
max=a[0];
if (a[i]>max)
max=a[i];
}
printf("%d\n",max);
return 0;
}
