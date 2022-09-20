#include<stdio.h>
int main()
{
    int a=9,b=8;
    int fun(int a,int b){
        if(4<a && (b-a)<(a-b))
        {
            b=a+3;
            b=1+2+b;
            return fun(a,b+a);

        }
        b=b+3;
        return a-b+1;
    }
    printf(fun(a,b));
}