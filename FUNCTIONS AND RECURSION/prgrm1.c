// sum of first n numbers
#include<stdio.h>
int sum(int n);
int main(){
    printf("Sum of : %d",sum(5));
    return 0;

}
//recursio function
int sum(int n){
    if (n==1){
    return 1;
}

    int sumnm1 = sum(n-1);
    int sumn = sumnm1 + n;
    return sumn;


}