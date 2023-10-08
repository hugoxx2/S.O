#include <stdio.h>
#include <math.h>
int main(){
    float cateto1, cateto2;
    
    printf("ingrese primer cateto: ");
    scanf("%f",&cateto1);
    
    printf("\ningrese segundo cateto: ");
    scanf("%f",&cateto2);
    
    float cua1=(cateto1*cateto1);
    float cua2=(cateto2*cateto2);
    
    float Hip = (sqrt(cua1 + cua2));
    printf("\nLa hipotenusa es de: %f",Hip);
    
    float A = (cateto1*cateto2)/2;
    printf("\nEl area es de: %f",A);
    
    float Pe=(Hip + cateto1 + cateto2);
    printf("\nEl perimetro es de: %f",Pe);
}
