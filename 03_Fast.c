#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int funcFastSort(int *arr, int left, int right)
{
    int temp =0;
    int _left = left;
    int _right = right;
    int resolveItem;
    resolveItem = arr[left];

    while (_left < _right)
    {
        while ((_left < _right) && (arr[_right] >= resolveItem))

        _right--;

        if (_right != _left)
        {
            arr[_left] = arr[_right];
            _left++;
            temp++;
        }

        while ((arr[_left] <= resolveItem) && (_left < _right)) {
          _left++;
        }

        if (_right != _left)
        {
            temp++;
            arr[_right] = arr[_left];
            _right--;
        }
     temp++;
    }
    
    arr[_left] = resolveItem;
    resolveItem = left;
    left = _left;
    right = _right;
    temp ++;
    if (left < resolveItem) {
     temp+= funcFastSort(arr, left, resolveItem - 1);
    }

    if (right > resolveItem) {
      temp += funcFastSort(arr, resolveItem + 1, right);
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
a[i] = rand()%  10000 - 8419;
} 
rez += funcFastSort(a,0,n[f]);

}
stop = clock();
printf("%d\n %f \n",n[f],rez/1000);

rez = 0;
double clock_rez = (stop - start)/(double)CLOCKS_PER_SEC;
printf("%f \n",clock_rez*100000);
start ,stop = 0;
clock_rez = 0;
}
}
