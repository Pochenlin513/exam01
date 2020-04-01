#include "mbed.h"

Serial pc( USBTX, USBRX );
PwmOut PWM1(D0);

float data;


int main(){
    wait(5);
    for(float i = 0; i <= 1.01; i+=0.1){
        PWM1.period(0.001);
        PWM1 = i;
        data = PWM1;
        pc.printf("%1.3f\r\n", data);
        wait(0.1);
    }
    for(float i = 0.9; i >= -0.01; i-=0.1){
        PWM1.period(0.001);
        PWM1 = i;
        data = PWM1;
        pc.printf("%1.3f\r\n", data);
        wait(0.1);
    }
    return 0;
}