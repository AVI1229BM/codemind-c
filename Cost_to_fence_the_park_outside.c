#include<stdio.h>
int main(){
    int l,b,w,c;
    int area;
    int fench;
    int out;
    scanf("%d %d %d %d",&l,&b,&w,&c);
    area=l*b;
    out=(l+(w+w))*(b+(w+w));
    fench=out-area;
    printf("%d",fench*c);
}