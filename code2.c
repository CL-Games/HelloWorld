#include<stdio.h>


int main(){

char name[80] = {'\0'}; 
name[0] = 'J'; 
name[1] = 'u'; 
name[2] = 's'; 
name[3] = 't'; 
name[4] = 'i';
name[5] = 'n';
name[6] = '\0'; 
puts(name);

char buf[80];
printf("輸入字串：");
scanf("%s", buf);
printf("你輸入的字串為 %s\n", buf);
    
}