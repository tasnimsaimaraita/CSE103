#include<Stdio.h>
int main(){
    int n,i,a[1000],l1,l2;
    printf("enter n:");
    scanf("%d",&n);

    printf("Enter elements:");
    for(i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    if(a[0] > a[1]){
        l1=a[0];
        l2=a[1];
    }
    else{
        l1=a[1];
        l2=a[0];
    }

    for(i=0 ; i<n ; i++){
        if(a[i] > l1){
            l2=l1;
            l1=a[i];
        }
        else if()
    }
}
