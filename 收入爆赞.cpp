#include<stdio.h>

int main()
{const double rate=8.15;
const int standard=40;
double pay=0.0;
double hours;
printf("����ʱ��");
scanf("%lf",&hours);
if (hours>standard)
pay=standard *rate+(hours-standard)*1.5*standard;
else
pay=hours*rate;
printf("����=%f\n",pay);
    return 0;
}

