#include<stdio.h>
 long long int factorial(int n){
if(n==0)
    return 1;
return n*factorial(n-1);
}
int main(){
    int n;
    long long int fact;
    scanf("%d",&n);
    fact= factorial(n);
    printf("%lld",fact);
    return 0;
}
