#include<stdio.h>
#include<stdlib.h>

int main()
{
    float pies,pulg,yard,cms,mts;
    printf("Ingrese una medida en pies: ");
    scanf("%f",&pies);
    pulg=pies*12;
    yard=pies/3;
    cms=pulg*2.54;
    mts=cms/100;
    printf("La medida en pulgadas es: %f\n",pulg);
    printf("La medida en yardas es: %f\n",yard);
    printf("La medida en centimetros es: %fcms\n",cms);
    printf("La medida en metros es: %fmts\n",mts);

    return 0;
}
