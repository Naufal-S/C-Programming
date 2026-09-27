// convertion of temperature from celsius to fahrenhiet
#include<stdio.h>
float cltfa(float celsius);
int main(){
    float far = cltfa(32);

    printf("Temperature is  : %f",far);
    return 0;

}
float cltfa(float celsius){
    float far = celsius * (9.0/5.0) + 32 ;
    return far;


}