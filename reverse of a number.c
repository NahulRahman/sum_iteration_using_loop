#include<stdio.h>
int main(){
    int n,x=0;
    scanf("%d",&n);
    while(n!=0){
        x=10*x+(n%10);
        n=n/10;
    }printf("%d ",x);
    return 0;
}
