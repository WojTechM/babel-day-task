#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

void findDuplicates(char text1[], char text2[]);

int main() {
    findDuplicates("hello world dupa", "dupa");
   return 0;
}

void findDuplicates(char text1[], char text2[]) {

    int word1Index = 0;
    int word2Index = 0;
    char word1[100] = "";
    char word2[100] = "";
    char end1[1] = " ";
    char end2[1] = " ";

    printf("%s", "common words: ");

    while (word1Index < strlen(text1)) {

        strcpy(word1, "");
        while (text1[word1Index] != ' ') {
            end1[0] = text1[word1Index];
            strcat(word1, end1);
            word1Index++;
        }
        word1Index++;
        printf("%s", word1);

        while (word2Index < strlen(text2)) {
            strcpy(word2, "");
            while (text2[word2Index] != ' ') {
                end2[0] = text2[word2Index];
                strcat(word2, end2);
                word2Index++;
            }
            word2Index++;

            if (strcmp(word1, word2) == 0) {
                printf("%s", word1);
            }
        }
    }
}

