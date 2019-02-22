#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int handleFile(char text[]) {
    size_t size = strlen(text);
    char word[100] = "";
    char longestWord[100] = "";
    char shortestWord[20] = "";
    int averageWordLength = 0;
    int numberOfWords = 0;
    size_t len = 0;
    for(int i = 0; i < size; i = i+1) {
        if(text[i] == ' ') {
            size_t wordSize = strlen(word);
            size_t longestWordSize = strlen(longestWord);

            len = len + wordSize;
            numberOfWords = numberOfWords + 1;
            if(wordSize > strlen(longestWord)) {
                char longestWord = malloc(strlen(longestWord) + 1 +1);
                strcpy(longestWord, word);

            } else if(wordSize < (size_t) shortestWord) {
                char shortestWord = malloc(strlen(shortestWord) + 1 +1);
                strcpy(shortestWord, word);

            }
            char word = malloc(strlen(word) + 1 +1);
            strcpy(word, "");
        }else {
            word[i] = text[i];
        }

    }
    printf(longestWord);

}


int main() {
   handleFile("testaaaa beee feee didididi blebelebelebele");

   return 0;
}