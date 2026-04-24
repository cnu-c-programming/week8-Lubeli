#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

    char *temp;
    for(int i = argc-1; i>0; i--){
        for(int j = 0; j<i; j++){
            if(strcmp(argv[j], argv[j+1]) >= 0){
                temp = argv[j+1];
                argv[j+1] = argv[j];
                argv[j] = temp;
            }
        }
    }

    for(int i = 0; i < argc; i++){
        printf("%s\n",argv[i]);
    }
    return 0;
}
