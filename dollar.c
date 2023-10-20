#include<stdio.h>
int main()
{
    float us_dollar;
    float fee;
    float BDY;
    float SPY;
    float rem_amm;



    printf("Enter dollars you want to convert:");
    scanf("%f",&us_dollar);

    fee = us_dollar * 10/100;
    rem_amm = us_dollar - fee;

    BDY = rem_amm/2*0.39;
    SPY = rem_amm/2*127.65;

    printf("The british pounds will be %f",BDY);
    printF("The japanese yens is %f",SPY);








} 