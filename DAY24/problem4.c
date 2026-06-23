#include <stdio.h>

int main() {
    char str[100];
    int visited[256] = {0};
    int j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char val = str[i];
        if (visited[val] == 0) {
            visited[val] = 1;
            str[j++] = str[i]; // In-place update
        }
    }
    str[j] = '\0'; // Null-terminate modified string

    printf("String after removing duplicates: %s\n", str);
    return 0;
}