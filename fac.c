#include <stdio.h>

int fac(int n){
    if(n<=1){
        return 1;
    }
    else{
        return (n*fac(n-1));
    }
}
int main(){

    printf("fac : %d", fac(5));

}