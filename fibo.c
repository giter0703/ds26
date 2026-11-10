#include <stdio.h>
//p, pp, res
int fib_iter(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    
    int res = 0;
    int pp = 0;
    int p = 1;
    for(int i = 2; i <= n; i++){
        res = p+pp;
        pp = p;
        p = res;
    }
    return res;
}

int fib(int n){
    if(n <= 1) return n;
    else return (fib(n-2)+fib(n-1));
}

int main(){
    printf("%d ", fib_iter(3));
    printf("%d ", fib_iter(5));
    printf("%d ", fib(3));
    printf("%d ", fib(5));
    
    return 0;
}