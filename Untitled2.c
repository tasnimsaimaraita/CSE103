#include<stdio.h>
int main(){
    int n,i,age[1000],c=0;

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter ages:");
    for(i=0 ; i<n ; i++){
        scanf("%d",&age[i]);
    }

    for(i=0 ; i<n ; i++){
        if(age[i]>=18)
            c++;
    }
    printf("Eligible %d people \n",c);

    for(i=0 ; i<n ; i++){
        if(age[i]>=18)
            printf("Age: %d\n",age[i]);
    }
    return 0;
}

