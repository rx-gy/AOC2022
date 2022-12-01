#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    fp  = fopen ("../data/001.txt", "r");
    char strbuf[30];
    int calorie_count;
    int elf_cals = 0;
    int max_cals = 0;
    

    while(fgets(strbuf, 30, fp) != NULL){
        if(!strcmp(strbuf, "\n")){
            if(elf_cals > max_cals)
                max_cals = elf_cals;
            elf_cals = 0;
        }else{
            elf_cals += atoi(strbuf);
        }
    }

    printf("%d\n", max_cals);

    fclose(fp);
} 
