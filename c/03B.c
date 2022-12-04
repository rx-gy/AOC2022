#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    fp  = fopen ("../data/003.txt", "r");
    char strbuf[3][100];
    int result = 0;
    int i;
    int j;
    int k;
    

    while(fgets(strbuf[0], 100, fp) != NULL){
        fgets(strbuf[1], 100, fp);
        fgets(strbuf[2], 100, fp);
        for(i = 0; strbuf[0][i] != '\0'; i++){
            for(j = 0; strbuf[1][j] != '\0'; j++){
                if(strbuf[0][i] == strbuf[1][j]){
                    for(k = 0; strbuf[2][k] != '\0'; k++){
                        if(strbuf[0][i] == strbuf[2][k]){
                            result += (strbuf[0][i] < 97) ? ((int)strbuf[0][i] - 38): ((int)strbuf[0][i] - 96);
                            goto endloop;
                        }
                    }
                }
            }

        }
endloop:
        continue;
    }

    printf("%d\n", result);

    fclose(fp);
} 
