#include<iostream>
using namespace std;

int quicksort(int size,int array[]);
int partition(int low,int high,int size,int array[]);


int main () {
  int size;
  int array[] = {1,6,3,7,8,4,5};
  quicksort(size,array);
  return 0;
}


void quicksort(int size,int array[]){
  int low=0;
  int high=size-1;
  int pivot = partition(low,high,size,array)
    quicksort(pivot+1,high,size,array)
    quicksort(low,pivot-1,size,array)
}


int partition(int low,int high, int size,int array[]){
  int i = low;
  int j= high;
  while(low<high){
    while(array[i]>pivot){
        i = i+1;
    }
    while(array[j]<pivot){
        j=j+1;
    }
    if(i<j){
    swap(a[i],a[j])
    }
      
    }
      return pivot;

  }

