// factorial of n numberss
#include<stdio.h>
int factorial(int n);
int main(){
    printf("factorial of : %d",factorial(5));
    return 0;

}
//recursio function
int factorial(int n){
    if (n==0){
    return 1;
}

    int factnm1 = factorial(n-1);
    int factn= factnm1 * n;
    return factn;


}