#include<stdio.h>
#include<stdlib.h>
#include<time.h>

    // ----------------Giải thích chương trình--------------//
    // 1. Random từ 20 đến 90                               //
    // 2. Nếu Random nhỏ hơn hoặc = 80 in ra giá trị random //
    // 3. Nếu Random nhiều hơn 80 in ra Hello World         //
    // 4. srand(time(NULL)); 
    // -----------------------------------------------------//

// --------------------[VOID FUNCTION]---------------------------------//
void random_20_90(void)
{
    srand(time(NULL)); // các lần random không bị trùng nhau
    while(1)
    {
        int random = (20+rand()%81);
        if (random<=80)
        {
           printf("Random still continue: %5d\n",random);
        }
        else if (random>80)
        {
            printf("Random stop at:%5d\n",random);
            break;
        }
        
    }
}
// --------------------[MAIN FUNCTION]---------------------------------//
int main(void){
    random_20_90();
    return 0;
}