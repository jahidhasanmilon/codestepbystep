#include <iostream>

using namespace std;

int totalDays(int j,int k){
    int n=0,l=0,f=0,m=0;
    for(int i=1;i<j;i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
            l=l+31;
        }
        if(i==2){
            f=f+28;
        }
        if(i==4||i==6||i==9||i==11){
            m=m+30;
        }
    }
    n=k+l+f+m;
    return n;
}

int main()
{
    int x,y,z,a,b,c,o;
    
   cout<<"This program tells you how many days"<<endl;
   cout<<"it will be until your next birthday."<<endl;
   cout<< endl;
    
   cout<<"Please enter today's date:" <<endl;
   cout<<"What is the month (1-12)? ";
   cin>>x;
   for(int j=1;j<2;j++){
       if(x==1||x==3||x==5||x==7||x==8||x==10||x==12){
           cout<<"What is the day   (1-31)? ";
           cin>>y;
       }
       if(x==2){
           cout<<"What is the day   (1-28)? ";
           cin>>y;
       }
       if(x==4||x==6||x==9||x==11){
           cout<<"What is the day   (1-30)? ";
           cin>>y;
       }
   }
   z=totalDays(x,y);
   cout<<x<<"/"<<y<<" is day #"<<z<<" of 365."<<endl;
   cout<< endl;
   
   cout<<"Please enter your birthday:"<<endl;
   cout<<"What is the month (1-12)? ";
   cin>>a;
   for(int t=1;t<2;t++){
       if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
           cout<<"What is the day   (1-31)? ";
           cin>>b;
       }
       if(a==2){
           cout<<"What is the day   (1-28)? ";
           cin>>b;
       }
       if(a==4||a==6||a==9||a==11){
           cout<<"What is the day   (1-30)? ";
           cin>>b;
       }
   }
   c=totalDays(a,b);
   cout<<a<<"/"<<b<<" is day #"<<c<<" of 365."<<endl;
   cout<< endl;
   
   if(z>c){
       o=(365-z)+c;
   }
   if(c>z){
       o=c-z;
   }
   if(o>1){
      cout<<"Your next birthday is in "<<o<<" days."<<endl;
   }
   if(o==1){
      cout<<"Wow, your birthday is tomorrow!"<<endl;
   }
   if(o==0){
       cout<<"Happy birthday!"<<endl;
   }
    
    return 0;
}
