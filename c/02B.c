#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    fp  = fopen ("../data/002.txt", "r");
    char strbuf[5];

    /* A loses to B loses to C loses to A */
    /* X loses to Y loses to Z loses to X */
    int lookup[3][3] = {{3, 1, 2},   // lose
                        {1, 2, 3},   // draw
                        {2, 3, 1}};  // win
    int a;
    int b;
    int score = 0;
    

    while(fgets(strbuf, 5, fp) != NULL){
        //a = strbuf[0];  //65, 66 or 67
        //b = strbuf[2];  //88, 89 or 90
        a = (int)strbuf[0] - 65;  // 0, 1 or 2
        b = (int)strbuf[2] - 88;  // 0, 1 or 2
        score += b*3;
        score += lookup[b][a];
    }

    printf("%d\n", score);

    fclose(fp);
} 
