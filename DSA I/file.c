#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr= fopen("minmax.c","r");

    char ch;
    fscanf (fptr, "%c",&ch);
    printf("%c",ch);
    

    fclose(fptr);

    fptr= fopen("text.txt", "w");
    fprintf(fptr, "%c", "//");
    
}