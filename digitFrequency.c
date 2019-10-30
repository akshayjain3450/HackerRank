#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find(char a,int c,char m[c])
{ int count=0;int j;
  while(m[j]!='\0')
  {
    if(m[j]==a)
    count++;
    j++;
  }
  return count;
}
int main() {

 char num[1001];
 scanf("%s",num);
 int i=0;int a[10];
 for(i=0;i<=9;i++)
{
    char c;
   if(i==0)
   c='0'; 
   if(i==1)
   c='1'; 
   if(i==2)
   c='2'; 
   if(i==3)
   c='3'; 
   if(i==4)
   c='4'; 
   if(i==5)
   c='5'; 
   if(i==6)
   c='6'; 
   if(i==7)
     c = '7';
   if (i == 8)
     c = '8';
   if(i==9)
   c ='9';

   a[i] = find(c, 1001, num);

}
for (i = 0; i <= 9; i++) {
 printf("%d ",a[i]);
}
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
return 0;
}
