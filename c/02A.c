#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    fp  = fopen ("../data/002.txt", "r");
    char strbuf[5];

    /* A loses to B loses to C loses to A */
    /* X loses to Y loses to Z loses to X */
    //              L  W  D  L  W
    //              0  1  2  3  4
    int lookup[] = {0, 6, 3, 0, 6};
    int a;
    int b;
    int v;
    int score = 0;
    

    while(fgets(strbuf, 5, fp) != NULL){
        //a = strbuf[0];  //65, 66 or 67
        //b = strbuf[2];  //88, 89 or 90
        a = (int)strbuf[0] - 62;  // 3, 4 or 5
        b = (int)strbuf[2] - 87;  // 1, 2 or 3
        v = a - b;  // 0 - 4
        score += b;
        score += lookup[v];
    }

    printf("%d\n", score);

    fclose(fp);
} 
