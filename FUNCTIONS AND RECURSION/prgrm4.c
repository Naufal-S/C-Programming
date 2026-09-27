//call function for fibonacci sequence
#include<stdio.h>
int fibonacci(int n);
int main(){
    int n ;

    printf("Enter a number :");
    scanf("%d",&n);
    printf("Fibonacci of the entered number is : %d\n",fibonacci(n));
    return 0;

}
//recursio function
int fibonacci(int n){
    if (n==0 || n==1){
    if (n==0){
        return 0;
}
if(n==1){
    return 1;
}
    }
    int f0 = fibonacci(n-1);
    int f1 = fibonacci(n-2);
    int fn = f0 + f1 ;
    //printf("fibonacci of %d is :%d\n",n,fn);
    return fn;


}