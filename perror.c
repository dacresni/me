#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
if (argc < 1) {
    printf("usage: %s error value\n",argv[0]);
    printf("Returns corrosponding error to error value according to unix standard\n" );   }
int input =*argv[1];
char* error_string = strerror(input);
printf("%s\n",error_string);
return 0;
}
