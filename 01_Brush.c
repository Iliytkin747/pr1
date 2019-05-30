#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int funcHairbrushSort(int *arr, int arr_len) {

        int temp =0;
	int step = arr_len;

	while (step > 1)
	{
		if (step > 1) {
      step = (int)(step / 1.247330950103979);
      temp++;
    }
		for (int i = 0; i + step < arr_len; i++) {
      if (arr[i] > arr[i + step]) {
        temp++;
        int tmp = arr[i];
        arr[i] = arr[i + step];
        arr[i + step] = tmp;
        temp++;
			}
    }
	}
	return temp;
}

int main()
{
  clock_t start,stop;
unsigned long t;
    double rez,sr_rez = 0;
int n[15] = {1,2,3,4,5,10,15,20,25,30,50,75,100,250,500};
for (int f = 0 ; f <15;f++)
{
int *a;
a = (int*)malloc(n[f] * sizeof(int));
start = clock();
for (int j = 0;j <1000;j++)
{
for (int i = 0;i < n[f]; i ++)
{
a[i] = rand()%  10000 - 3519;
} 
rez = funcHairbrushSort(a,n[f]);
sr_rez +=rez;
}
stop = clock();
printf("%d\n %f \n",n[f],sr_rez/1000);
sr_rez = 0;
rez = 0;
double clock_rez = (stop - start)/(double)CLOCKS_PER_SEC;
printf("%f \n",clock_rez*1000000);
start ,stop = 0;
clock_rez = 0;
}
}
