#include <stdio.h>

int main(void){
    int i, *p;

    i = 10;

    printf("value of i = %d\n", i);  
    printf("address of i = %p\n", &i);
    printf("value of p = %p\n", p);  
    printf("address of p = %p\n", &p);  

    p = &i;  

    printf("\n\n----- after p = &i ----- \n\n");

    printf("value of p = %p\n", p);  
    printf("address of p = %p\n", &p); 
    printf("dereferening *p = %d\n", *p); 

    return 0;
}