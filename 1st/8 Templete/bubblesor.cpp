#include<iostream>
using namespace std;


template <typename T>
void read(T array[], int size)
{
    for( int i=0;i<size;i++)
    {
      
            cin>> array[i];
        
    }
}

template <typename T>
void sort(T array[], int size)
{
    for( int i=0;i<size;i++)
    {
        for (int j = i+1; j < 5; j++)
        {
           if(array[i]>array[j]){
            T temp = array[i];
            array[i]=array[j];
            array[j]=temp;
           }
        }
        
    }
}


template <typename T>
void display(T array[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout << array[i]<<endl;
    }
}






int main(){
    double array[10];
    read(array,3);
    sort(array,3);
    display(array,3);
    return 0;
    

}