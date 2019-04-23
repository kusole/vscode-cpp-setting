#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp = fopen("./text.txt", "w");

    for(size_t i = 0; i < 10; i++)
    {
        fputc('A'+i, fp);
    }
    
    fclose(fp);
    return 0;
}