#include <stdio.h>
#include <string.h>

#define BUFFSIZ 1000
int main(int argc, const char* argv[]){
    FILE* file1;
    FILE* file2;

    file1 = fopen (argv[1], "r");
    file2 = fopen (argv[2], "r");
    char buf[BUFFSIZ];
    char buf2[BUFFSIZ];
    if(file1 == NULL || file2 == NULL){
        fprintf(stderr,"Cannot open files.");
        return 1;
    }
    while(fgets(buf, BUFFSIZ,file1) && fgets(buf2, BUFFSIZ, file2)){
        if((strcmp(buf, buf2)) != 0){
            printf("%s ---- %s\n", buf, buf2);
        }
    }

    fclose(file1);
    fclose(file2);
    return 0;    
}