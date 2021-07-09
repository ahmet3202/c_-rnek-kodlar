#include <stdio.h>
int main() {
    float sayi1, sayi2, sayi3;
    printf("ilk Sayiyi giriniz \n ");    scanf("%f", &sayi1);
 
    printf("ikinci sayiyi giriniz \n");  scanf("%f", &sayi2);
  
    printf("ucuncu sayiyi giriniz\n:");  scanf("%f", &sayi3);


    if (sayi1 >= sayi2 && sayi1 >= sayi3)
        printf("Girilen En Buyuk Sayi : %.2f", sayi1);

    else if (sayi2 >= sayi1 && sayi2 >= sayi3)
        printf("Girilen En Buyuk Sayi : %.2f", sayi2);

    else
        printf("Girilen En Buyuk Sayi  %.2f", sayi3);
        system("pause");
    return 0;
}
