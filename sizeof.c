#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[]){
    printf("Short int... \tsize: %ld bytes \t",sizeof(short int));
    printf("%d to %d \n",SHRT_MAX,SHRT_MIN);

    printf("long int... \tsize: %ld bytes \t",sizeof(long int));
    printf("%ld to %ld \n",LONG_MAX,LONG_MIN);

    printf("char... \tsize: %ld bytes \t",sizeof(char));
    printf("float... \tsize: %ld bytes \n",sizeof(float));
    printf("double... \tsize: %ld bytes \n",sizeof(double));

    return 0;
}