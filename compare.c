//  APCS  觀念題

typedef int bool;

#define true 1
#define false 0

bool x = true;
bool y = true;
bool z = false;
//假設 x,y,z 為布林(boolean)變數，
//且 x=TRUE,y=TRUE,z=FALSE。
//請問下面各布林運算式的真假值依序為何?(TRUE 表真，FALSE 表假)
int main(){
if( !( y || z) || x){
   printf("true");
}
else{
   printf("false");
}
printf("\n");
if (!y || (z || !x)){
   printf("true");
}
else{
   printf("false");
}
printf("\n");
if( z || ( x && (y || z))){   
    printf("true");
}
else{
   printf("false");
}
printf("\n");
if((x || x) && z){   
    printf("true");
}
else{
   printf("false");
}
printf("\n");
return 0;
}