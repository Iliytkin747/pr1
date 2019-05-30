include <stdio.h>
#include <stdlib.h>
#include<time.h>

int funcShellSort(int *arr, int arr_len) {
                               
		int step, tmp1,temp =0;
	  int i, j;
		for (step = arr_len / 2; step > 0; step /= 2) {
      for (i = step; i < arr_len; i++)
			{
				tmp1 = arr[i];
				for (j = i; j >= step; j -= step)
				{
					if (tmp1 > arr[j - step]) {temp++;
            break;
          }
					else {temp++;
            arr[j] = arr[j - step];
          }
          temp++;
				}
				arr[j] = tmp1;
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
a[i] = rand()%  10000 -  3418;
} 
rez = funcShellSort(a,n[f]);
sr_rez +=rez;
}
stop = clock();
printf("%d\n %f \n",n[f],sr_rez/1000);
sr_rez = 0;
rez = 0;
double clock_rez = (stop - start)/(double)CLOCKS_PER_SEC;
printf("%f \n",clock_rez*100000);
start ,stop = 0;
clock_rez = 0;
}
}
