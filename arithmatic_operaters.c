#include <stdio.h>   
int main() {
    int a;
    printf("enter your age:");
    scanf("%d" ,&a);
    
    if (a>19){
        printf("you are eligible as an adult");
            }
       if (a<19){
        printf("you are not eligible as you are minor");
       }

    return 0;   
 }
           