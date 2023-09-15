#include<iostream>
#include<cmath>
using namespace std;
int main()
{   int i;
    double  sum=0;
    double  a[10];
    cout<<" enter 10 numbers"<< endl;
    for(i=0; i<10; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    double mean=0;
    mean=sum/10;
    double sum2=0;
    for (i=0;i<10;i++)
    {
        sum2+=pow((a[i]-mean),2);
    }
    double standard=0;
    double avg=0;
    avg= sum2/9;
    standard=pow(avg,0.5);
    cout<< standard<<endl;
    return 0;

}