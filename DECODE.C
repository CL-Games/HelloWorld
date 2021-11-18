#include <stdio.h>
#include <cstring>
#include <cstdlib>
char name[50];
int main() {
    printf("Enter code: ");
    fgets(name, sizeof(name), stdin);
    for (int i = 0; i < strlen(name) - 1; i++){
        if(name[i] >= 97 && name[i] != 32){
          printf("I only accept uppercase\n");
          exit(0);
        }
        if(name[i] < 65 && name[i] != 32){
          printf("I only accept uppercase\n");
          exit(0);
        }
    }
    for (int i = 0; i < strlen(name) - 1; i++){
      if(name[i] != 32){
      name[i] = name[i] - 2;
      if(name[i] < 65){
          name[i] = name[i] + 26;
      }
      }
    }
    printf("%s", name);

    return 0;
}