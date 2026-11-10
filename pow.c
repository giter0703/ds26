#include <stdio.h>

int pow_iter(int x, int n){
    int res = 1;
    for(int i = 1; i <= n; i++){
        res *= x;
    }
    return res;
}
int power(int x, int n){
    if(n == 0)
        return 1;
    if(n % 2 == 0)
        return power(x*x, n/2);
    if(n % 2 == 1)
        return power(x*x, (n-1)/2);
}

int main(){
    printf("mul : %d ", power(2, 3));


    return 0;
}