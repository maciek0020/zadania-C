#include <iostream>
#include <cstdio>

 void toLower(char *text) {
     while (*text) {
         if ('A' <= *text && *text <= 'Z') {
             *text += ('a' - 'A');
         }
         text++;
     }
 }

 void toUpper(char *text) {
     while (*text) {
         if ('a' <= *text && *text <= 'z') {
             *text -= ('a' - 'A');
         }
         text++;
     }
 }

 int textSize(const char *text) {
     int size = 0;
     while (*(text + size)) {
         size++;
     }
     return size;
 }

 void removeNewline(char *text) {
     int i = 0;
     while (text[i]) {
         if (text[i] == '\n') {
             text[i] = '\0';
             break;
         }
         i++;
     }
 }

 int main() {
     char text[80];

     while (true) {
         printf("Enter text: \n");
         fgets(text, 80, stdin);

         removeNewline(text);

         // jeśli pusty enter → koniec programu
         if (text[0] == '\0') break;

         printf("%s\n", text);

         toLower(text);
         printf("%s\n", text);

         toUpper(text);
         printf("%s\n", text);

         printf("%d\n", textSize(text));
     }

     return 0;
 }


 #include <iostream>

void tolower(char text[]) {
    while (*text) {
        if ('A' <= *text && *text <= 'Z') {
            *text += ('a' - 'A');
        }
        text++;
    }
}

int textSize(char *text) {
    int size = 0;
    while (*text) {
        size++;
        text++;
    }
    return size;
}
