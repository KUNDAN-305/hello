#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("%d\n",a);
    }
    for(int i=0;i<a;i++){
        printf("\n%d",i*a);
    }
    return 0;

}