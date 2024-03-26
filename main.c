#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){
  FILE *ptr = fopen("text.txt", "r");
  char ch;
  if(ptr == NULL){
    printf("couldn't open the file \n");
  }
  while ((ch = fgetc(ptr)) != EOF) {
    if(isdigit(ch)){
      while((ch=fgetc(ptr))!=','){
        ;
      }
      printf("DIGIT \n");
    }
    switch(ch){
      case '{':
        printf("LBRACKET\n");
        break;
      case '}':
        printf("RBRACKET\n");
        break;
      case ':':
        printf("COLON\n");
        break;
      case '"':
        while((ch=fgetc(ptr))!='"'){
          ;
        }
        printf("STRING \n");
        break;
      case ',':
        printf("COMMA\n");
        break;
      case '[':
        printf("LSBRACKETI\n");
        break;
      case ']':
        printf("RSBRACKET\n"); 
        break;
    }
  }
  fclose(ptr);
  return 0;
}
