#include<stdio.h>
float a[5];

int main(){
double d;
for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
printf("Enter Number %d: ",  i+1);
scanf("%lf", &d);
a[i] = d;
}
double sa;
for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
    if(a[i] > sa){
        sa = a[i];
    }
}
double avg = 0;
for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
    avg += a[i];
}
avg /= sizeof(a) / sizeof(a[0]);
printf("Biggest: %f\n",  sa);
printf("Average: %f\n",  avg);

return 0;
}