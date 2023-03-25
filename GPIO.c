/*Step cofigure 

Wiring PiSetup(void); -> numper in Wpi
WiringPiSetupGpio(); -> BCM
WiringPiSetupPhys(); -> Physical 

Example 
Nếu chân số 12 ở phần cứng(Physical) ta phải xem qua cột wPi là 1

*/ 
#include <stdio.h>
#include <stdint.h>
#include <wiringPi.h>

#define Led 12
#define BT 11

void Button_interrupt(void)
{
    // Khi nút 1 bật đèn sáng nhả ra đèn tắt
    if(digitalRead(BT)==1)
    {
        digitalWrite(LED,HIGH);
    }
    else 
    {
        digitalWrite(LED,LOW);
    }
}

int main()
{   // setup thư viện wiringPi
    wiringPiSetupPhys();
    // KHAI BÁO IO
    pinMode(Led,OUTPUT);
    pinMode(BT, INPUT);
    // Interrupt (ngắt) 
    wiringPiISR(BT,INT_EDGE_BOTH,&Button_interrupt)  // Phát hiện 2 trường hợp xuống và lên
    while(1)
    {

    }
   return 0; 
}