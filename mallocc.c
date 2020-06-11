#include <stdio.h>
#include <stdlib.h>


int main(){
    char buf[256] = "";
    int num;

    fgets(buf, 256, stdin); //入力
    printf("%s",buf);
//関数の空欄埋めていく

    // num = strtol(); 

    // int *ptr = malloc(num*4);

    // for (int i = 0; i < num; i++) {
    //     fgets(buf, 256, stdin);
    //     ptr[i] = strtol();
    // }

    // for (int i = 0; i < num; i++) {
    //     printf("%d\n", ptr[i]);
    // }
    
}