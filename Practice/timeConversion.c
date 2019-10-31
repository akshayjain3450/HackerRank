#include<stdio.h>
char* timeConversion(char* s) {
    int h1=(int)(s[0]-'0'),h2=(int)(s[1]-'0');
    int hh=h1*10+h2;
    if(s[8]=='P' && hh<12)
    {
        hh=hh+12;
    }
    if(s[8]=='A' && hh==12)
    hh=0;
    s[1]=(char)(hh%10+48);
    s[0]=(char)(hh/10+48);
    s[8]='\0';
    s[9]='\0';
    return s;
}

int main()
{
    char time[12];
    printf("Enter time in 12-hour format : ");
    scanf("%s",time);
    char *res;
    res = timeConversion(time);
    printf("Time in 24-hour format : %s\n",res);
}