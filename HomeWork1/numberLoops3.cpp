#include<iostream>
using namespace std;

int x=5;
for(int i=1; i<=x; i++)
{
    for(int j=i; j<x; j++)
    {
        cout<<".";
    }
    for(int k=i; k<(i+1); k++)
    {
        cout<<i;
    }
    for(int l=1; l<i; l++)
    {
        cout<<".";

    }
    cout<< endl;
}
