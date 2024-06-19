# Quick sort

Partion and sort with pivot element specified.

## Logic

### QuickSort Algorithm

- when low < max; 
- pivot = Partion(low,high,size) 
- then when high qicksort(pivot+1,high,size);
- then when low qicksort(low,pivot-1,size);


#### Partition

- when low<high ; pivot = array[low];
- i=low;
- j=high;
- while (low<high) ;
- Repeat j=j-1 if a[j]<pivot;
- Repeat i=i+1 if a[i]>pivot;
-if(i<j) then exhange a[i] and a[j];
