//Write a C program to copy the contents of a text file to another text file.
#include <stdio.h>
int main(){
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("file1.txt", "r");//open file1.txt in read mode
    fp2 = fopen("file2.txt", "w");//open file2.txt in write mode
    while((ch = fgetc(fp1)) != EOF){
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}