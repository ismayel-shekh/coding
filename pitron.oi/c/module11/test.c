#include <stdio.h>

int main() {
    char a[1000];
    char b[1000];
    scanf("%s", a);
    scanf("%s", b);
    int i = 0;
    while (1) {
        if (a[i] == '\0' && b[i] == '\0') {
            printf("shoman\n");
            break;
        }
        if (a[i] == '\0') {
            printf("A shoto\n");
            break;
        } else if (b[i] == '\0') {
            printf("B shoto\n");
            break;
        }
        if (a[i] == b[i]) {
            i++;
        } else if (a[i] < b[i]) {
            printf("A shoto\n");
            break;
        } else {
            printf("B shoto\n");
            break;
        }
    }
    return 0;
}
