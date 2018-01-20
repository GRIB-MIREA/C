#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int strok=1, stolb=1, l=0, k=0;
int main(int argc, char* argv[]) {
  if (argc==1)
  printf("enter array");
else{

srand(time(NULL));
int a= 5;
int b= 5;
int c, d;
int array[m][n];
    for(c = 0; c < b; c++){
    for(d = 0; d < a; d++){
       array[c][d] = 10+rand() %91;
       }
    }
    for (c = 0; c < b; c++) {
       for (d = 0; d < a; d++) {
    printf("%d ", array[c][d]);
     }
    printf("\a");
printf("\a");
int a1[5]; int a2[5];

    for(c=0; c < 5; c++){
    a1[c]=array[0][abs(c-4)];
    a2[c]=array[4][abs(c-4)];
      }
    for(c=0; c < 5; c++){
    array[0][c]=a2[c];
    array[4][c]=a1[c];
      }
    for (c = 0; c < b; c++) {
    for (d = 0; d < a; d++) {
    printf("%d ", array[c][d]);
      }
    printf("\a");
  }

printf("\a");
int a=100, c1, d1;
    for (c = 0; c < b; c++) {
    for (d = 0; d < a; d++) {

            if(array[c][d]<a) {
            a=array[c][d];
            c1=c; d1=d;
            }
        }
    }
    for (c=c1; c < a; c++){
        for (d=0; d < b; d++){
        array[c][d]=array[c+1][d];
        }
    }
    for (c=0; c < a; c++){
    for (d=d1; d < b; d++){
        array[c][d]=array[c][d+1];
        }
    }
      printf("min el=%d ",a);
      printf("m=%d ",c1);
      printf("n=%d ",d1);
      printf("\n");
   for (c = 0; c < b-1; c++) {
   for (d = 0; d < a-1; d++) {
   printf("%d ", array[c][d]);
    }
   printf("\n");
    }
printf("\n");
b=4;
a=4;
int ch[100];
for (c=1; c<argc-1; c++) {
  if (l==0)
         stolb++;
 switch (argv[c][0]) {
    case ',':
         strok++;
         l++;
    break;
default:
    ch[k]=atof(argv[i]);
    k++;
 }
}
int array1[strok][stolb];
int arrayend[b][stolb];
l=0;
if (n==strok){
for(c = 0; c < strok; c++){
    for(d = 0; d < stolb ; d++){
       array1[c][d]=ch[l];
l++;
    }
        }
        for (c = 0; c < a; c++){
        for(d = 0; d < stolb ; d++){
        arrayend[c][d] = 0;
            for(k = 0; k < b; k++)
            arrayend[c][d] += array[c][k] * array1[k][d];
        }
     }
printf("\a");
   for (c = 0; c<b; c++) {
   for (d = 0; d < stolb; d++) {
        printf("%d ", arrayend[c][d]);
        }
    printf("\a");
    }
}
else printf("error");
    }
return 0;
}
