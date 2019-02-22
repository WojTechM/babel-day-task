#include <stdio.h>
#include <stdlib.h>

int main() {

    char ch;
    FILE *fp;   // some pointers happens there
    char *yourFullPath = "/home/roman/babel/babel-day-task/en_full.txt"; // your full path to file
    char fileContent[100000] = "";  // set to 100000 just in care

    fp = fopen(yourFullPath, "r"); // read mode

    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while((ch = (char) fgetc(fp)) != EOF) {
        fileContent[i] = ch;
        i++;
    }

    fclose(fp);
    printf("%s", fileContent);

    printf("The longest word: \n");
    printf("The shortest word: \n");
    printf("Average word length: \n");
    printf("Number of words: \n");

    return 0;
}