#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuan_ho_ten(char *ho_ten) {
    int length = strlen(ho_ten);
    int i = 0, j = 0;

    while (ho_ten[i] == ' ') {
        i++;
    }
 
       int capitalize = 1;
    char result[100];
    for (; i < length; i++) {
        if (isspace(ho_ten[i])) {

            if (j > 0 && !isspace(result[j - 1])) {
                result[j++] = ' ';
            }
            capitalize = 1;
        } else {
            if (capitalize && isalpha(ho_ten[i])) {
                result[j++] = toupper(ho_ten[i]); 
                capitalize = 0;
            } else {
                result[j++] = tolower(ho_ten[i]);
            }
        }
    }
    if (j > 0 && isspace(result[j - 1])) {
        j--;
    }
    result[j] = '\0'; 
    strcpy(ho_ten, result);
}

int main() {
    char ho_ten[100];
    printf("Nhap ho ten: ");
    fgets(ho_ten , sizeof(ho_ten), stdin);
    ho_ten[strcspn(ho_ten, "\n")] = '\0';
    printf("Ho ten chuan : %s\n", ho_ten);
    return 0;
}
