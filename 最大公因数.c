#include<stdio.h>
int main(){
    long long a,b,r,t;
    scanf("%d%d",&a,&b);
    if(a<b){
        int k;
        k=a;a=b;b=k;
    }
    while(a%b!=0){
        t=a/b;
        r=a-b*t;
        a=b;b=r;
    }
    printf("%d",b);
    return 0;
}