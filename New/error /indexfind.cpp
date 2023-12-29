#include<iostream>

using namespace std;
 
int read(int b,int a[]) {
    int i;
    for(i=0;i<10;i++)
    {
        if (a[i] == b)
        {
            return i;
        };

    };

};


int main () 
{
    int b, c;
     int a[10],i;
     cout << "Enter a number in an array ";
    for(i=0;i<10;i++)
    {
        cin>> a[i];

    }
    cout << "Enter a number to find index";
    cin >> b;
    c= read(b, a);
    cout << "The index is " << c;
    return 0;
}





// #include<iostream>
// using namespace std;
// void comp(int, int a[]);
// int main()
// {
//     int b, i,j;
//     cout<<"enter a number between 0 and 50"<<endl;
//     cin>>b;
//     int a[10]={1,2,3,4,5,6,7,8,9,0};
//     comp(b,a);
//     return 0;
// }
// void comp(int b, int a[])
// {
//     int i;
//     for(i==0;i<10;i++)
//     {
//         if(b==a[i])
//         {
//             cout<<i;
//         }

//     }
// }