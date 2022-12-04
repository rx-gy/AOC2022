#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    fp  = fopen ("../data/003.txt", "r");
    char strbuf[100];
    int result = 0;
    int i;
    int j;
    

    while(fgets(strbuf, 100, fp) != NULL){
        for(i = 0; i < 100; i++){
            if(strbuf[i] == '\0') break;
        }
        int compartment = i/2;
        for(j = 0; j < compartment; j++){
            for(i = 0; i < compartment; i++){
                if (strbuf[j] == strbuf[i+compartment]){
                    result += (strbuf[j] < 97) ? ((int)strbuf[j] - 38): ((int)strbuf[j] - 96);
                    goto endloop;
                }
            }
        }
endloop:
        continue;
    }

    printf("%d\n", result);

    fclose(fp);
} 
