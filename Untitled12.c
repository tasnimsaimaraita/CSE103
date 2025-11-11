#include<stdio.h>
int main(){
    float s,m,h;

    printf("Enter s:");
    scanf("%f",&s);

    m=s/60;
    h=m/60;

    printf("%.2f minutes\n",m);
    printf("%.2f hours\n",h);

    return 0;
}


