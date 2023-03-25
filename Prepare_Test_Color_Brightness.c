#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

//---------------------------------------------------[_USER VARIABLE_]--------------------------------------------------------//
uint16_t duty=0;
uint8_t status=1;
//Color        C1  C2   C3   C4   C5   C6   C7   C8
uint8_t r[10]={10,  0 ,  0 , 10 ,  0 , 10 , 10,   };
uint8_t g[10]={0 , 10 ,  0 , 10 , 10 ,  0 , 10,   };
uint8_t b[10]={0 ,  0 , 10 ,  0 , 10 , 10 , 10,   };
// Brightness
uint8_t br[10]={1,2,3,4,5,6,7,8,9,10};

//---------------------------------------------------[_USER FUNCTION_]--------------------------------------------------------//
void display(uint8_t color, uint8_t brightness)
{
    softPwmWrite(r[color]*br[brightness]);
    softPwmWrite(g[color]*br[brightness]);
    softPwmWrite(b[color]*br[brightness]);
}
int main()
{   

}