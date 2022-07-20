//3. Write a C program to write something into a text file.

#include <stdio.h>
int main(){
    
    FILE *fp;
    fp = fopen("write.txt", "w");
    fprintf(fp, "Hello World was written in this file");
    fclose(fp);
    return 0;
}