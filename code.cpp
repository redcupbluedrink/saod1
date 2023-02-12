#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define N 10
void FillInc (int *, int);
void FillDec (int *, int);
void FillRand (int *, int);
int CheckSum (int *, int);
int RunNumber (int *, int);
void PrintMas (int *, int);

int main (void) {
int a[N],cnt1, cnt2, cnt3, sum;



printf("Vozrastaushee");
FillInc(a, N);
PrintMas(a, N);
cnt1 = RunNumber(a, N);
printf("Serii = %d\n", cnt1);
sum = CheckSum(a, N);
printf("Summa = %d\n", sum);
printf("\n");

printf("Ubivaushie");
FillDec(a, N);
PrintMas(a, N);
cnt2 = RunNumber(a, N);
printf("serii = %d\n", cnt2);
sum = CheckSum(a, N);
printf("Summa = %d\n", sum);
printf("\n");

printf("Sluchainie");
FillRand(a, N);
PrintMas(a, N);
cnt3 = RunNumber(a, N);
printf("Serii = %d\n", cnt3);
sum = CheckSum(a, N);
printf("Summa = %d\n", sum);
return 0;
}

void FillInc (int *a, int size) {
for (int i = 0; i < size; i++)
a[i] = i;
}

void FillDec (int *a, int size) {
for (int i = 0; i < size; i++)
a[i] =N - i;
}

void FillRand (int *a, int size) {
srand( (unsigned int)time(NULL)/2 );
for (int i = 0; i < size; i++)
a[i] = rand() %100;
}

int CheckSum (int *a, int size) {
int sum=0;
for(int i = 0; i< size;i++)
sum=sum+a[i];
return sum;
}

int RunNumber (int a[], int size) {
int k, count = 0;
for (int i = 0; i < size; i++, count++) {
for (k = 1; k < size-i && a[i+k-1] < a[i+k]; k++);
i += k-1;
}
return count;
}

void PrintMas (int *a, int size) {
for (int i = 0; i < size; i++)
printf(" %d", a[i]);
puts("\n");
}
