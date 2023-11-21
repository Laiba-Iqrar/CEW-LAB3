#include <stdio.h>
#include <stdlib.h>

int reversee(char *str ){
    int len = strlen(str);

    char *endptr = str +len ;
    while(endptr>= str){
        printf("%c",*endptr);
        endptr -- ;
    }
    return 0;
}
int main(){
    char a[50] ;
    printf("enter a string ");
    scanf("%s",&a);
    printf("Reversered:");
    reversee(a);
    return 0 ;
}
