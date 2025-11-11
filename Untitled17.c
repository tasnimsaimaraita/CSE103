#include<stdio.h>
int main(){
    float temp,conv;
    char cho;

    printf("Enter temp:");
    scanf("%f",&temp);

    printf("Convert to (C/f):");
    scanf(" %c",&cho);

    if(cho=='c' || cho=='C'){
        conv=(temp-32)*5/9;
    }
    else if(cho=='f' || cho=='F'){
        conv=(temp*9/5)+32;
    }
    else{
        printf("Invalid choice");
    }
    printf("Converted temp: %.2f",conv);
    return 0;
}
