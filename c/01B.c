#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    fp  = fopen ("../data/001.txt", "r");
    char strbuf[30];
    int elf_cals = 0;
    int max_cals0 = 0;
    int max_cals1 = 0;
    int max_cals2 = 0;
    int total_cals;
    

    while(fgets(strbuf, 30, fp) != NULL){
        if(!strcmp(strbuf, "\n")){
            elf_cals > max_cals0 ? max_cals2 = max_cals1, max_cals1 = max_cals0, max_cals0 = elf_cals : elf_cals > max_cals1 ? max_cals2 = max_cals1, max_cals1 = elf_cals : elf_cals > max_cals2 ? max_cals2 = elf_cals : 0;
            elf_cals = 0;
        }else{
            elf_cals += atoi(strbuf);
        }
    }
    
    total_cals = max_cals0 + max_cals1 + max_cals2;
    printf("%d\n", total_cals);

    fclose(fp);
} 
