/* 2.)  Write the following two sorting functions
1. Fastest sorting algorithm that you know
2. Second fastest sorting algorithm that you know
compare them by sorting 100000 randomly generated integers in range 1 to 100 & also print the time taken by both of them*/
//Ans.1 Fastest algorithm is quick sort algorithm which has following algo:-
#include<stdio.h>
#include <time.h>
void quicksort(int number[25],int first,int last){
int i, j, pivot, temp;
if(first<last){
pivot=first;
i=first;
j=last;
while(i<j){
while(number[i]<=number[pivot]&&i<last)
i++;
while(number[j]>number[pivot])
j--;
if(i<j){
temp=number[i];
number[i]=number[j];
number[j]=temp;
}
}
temp=number[pivot];
number[pivot]=number[j];

number[j]=temp;
quicksort(number,first,j-1);
quicksort(number,j+1,last);
}
}

int main() 
{    
int i, count, number[25];
printf("Enter some elements (Max. - 25): ");
scanf("%d",&count);
printf("Enter %d elements: ", count);
for(i=0;i<count;i++)
scanf("%d",&number[i]);
 clock_t t,t2,t1; 
    t1 = clock(); 
quicksort(number,0,count-1);
  t2 = clock();
t=t2-t1; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
printf("The Sorted Order is: ");
for(i=0;i<count;i++)
printf(" %d",number[i]);
printf("took %f seconds to execute \n", time_taken);  
return 0;
}



//2.second fastest algorithm is insertion sort which has following algo:-

#include <stdio.h>
 
int main()
{
int n, array[1000], c, d, t;
printf("Enter number of elements\n");
scanf("%d", &n);
printf("Enter %d integers\n", n);
for (c = 0; c < n; c++)
scanf("%d", &array[c]);
for (c = 1 ; c <= n - 1; c++) {
d = c;
clock_t t,t2,t1; 
    t1 = clock(); 
while ( d > 0 && array[d-1] > array[d]) {
t          = array[d];
array[d]   = array[d-1];
array[d-1] = t;
d--;
}
}
t2 = clock();
printf("Sorted list in ascending order:\n");
for (c = 0; c <= n - 1; c++) {
printf("%d\n", array[c]);
}
printf("took %f seconds to execute \n", time_taken);  
return 0;
}
