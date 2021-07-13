/*Time conversion 24 hour to 12 hour */
#include<iostream>

using namespace std;
int time_converter_to_12(int* , int* ,int* );//func. declaration
int time_converter_to_24_am(int* , int* ,int* );
int time_converter_to_24_pm(int* , int* ,int* );
int input(int* );
int main()
{   int n;
    cout<<"Type 1 to get time in 12 hour format and 2 to get time in 24 hour format\n";
    cin>>n;
    input(&n);

    return 0;

}
int time_converter_to_12(int*n1,int*n2,int*n3)
{  
    if ((*n1<12)&&(*n1>=1))
    {
        *n1=*n1;
        *n2=*n2;
        *n3=*n3;
        cout<<"The converted time in 12 hour clock is:\n"<<*n1<<":"<<*n2<<":"<<*n3<<"am\n";
    }   
    else if(*n1==12)
    {
        cout<<"The converted time in 12 hour clock is:\n"<<*n1<<":"<<*n2<<":"<<*n3<<"pm\n";
    }
    
    else if((*n1<24)&&(*n1>12))
    {
        *n1=*n1-12;
        *n2=*n2;
        *n3=*n3;
        cout<<"The converted time in 12 hour clock is:\n"<<*n1<<":"<<*n2<<":"<<*n3<<"pm";
    }   

    else if((*n1==24)||(*n1==0))
    {
        *n1=0;
        if((*n2!=0)||(*n3!=0))
        cout<<"Wrong input\n";
        else if((*n2==0)||(*n3==0))
        {
            *n2=0;
            *n3=0; 
        
        cout<<"The converted time in 12 hour clock is:\n"<<*n1<<":"<<*n2<<":"<<*n3<<"midnight.\n";
    }   }
    
    
    return 0;
}

int time_converter_to_24_am(int*n1,int*n2,int*n3)
{     if((*n1>12))
    {
        cout<<"Wrong input";}
    else if(*n1==12)
    {
        
        
        if((*n2>0)||(*n3>0))
        {
            
            cout<<"The converted time in 24 hour clock is:\n"<<"0"<<":"<<*n2<<":"<<*n3<<" am\n";
        }
    }
    else
   {*n1=*n1;
    *n2=*n2;
    *n3=*n3;
    cout<<"The converted time in 24 hour clock is:\n"<<*n1<<":"<<*n2<<":"<<*n3<<" am.\n";
    }
    return 0;
}
int time_converter_to_24_pm(int*n1,int*n2,int*n3)
{
    if(*n1>12)
    {
        cout<<"Wrong input";
    }
    else 
    {
        *n1=*n1+12;
        *n2=*n2;
       *n3=*n3;
    cout<<"The converted time in 24 hour clock is:\n"<<*n1<<":"<<*n2<<":"<<*n3<<" pm.\n";
    }
    return 0;
}


int input(int*n4)
{
    int req_time;
   int a,b,c,p;
   cout<<"Please  enter the time(first hours,minutes then seconds).\n";
   cin>>a>>b>>c;//Taking the input.
   if((a>24)||(b>60)||(c>60)||(a<0)||(b<0)||(c<0))
   {
       cout<<"WRONG INPUT ,ERROR!";
   }
   else if(*n4==2) 
   {
    cout<<"Type 3 for am and 4 for pm\n";
    cin>>p;
    if(p==3)
    {  if(a==12)
    cout<<"Time entered by you:\n"<<a<<":"<<b<<":"<<c<<"am\n";
    else
    cout<<"Time entered by you:\n"<<a<<":"<<b<<":"<<c<<"am\n";
    req_time=time_converter_to_24_am(&a,&b,&c);//FUNC CALL
    
    }
    else if(p==4)
    { 
    cout<<"Time entered by you:\n"<<a<<":"<<b<<":"<<c<<"pm\n";
    req_time=time_converter_to_24_pm(&a,&b,&c);//FUNC CALL
    
    }
    }
   else if(*n4==1)
    {
    cout<<"Please the enter the time again(first hours,minutes then seconds).\n";
    cin>>a>>b>>c;//Taking the input.
    cout<<"Time entered by you:\n"<<a<<":"<<b<<":"<<c<<"\n";
    req_time=time_converter_to_12(&a,&b,&c);//FUNC CALL
    }   
    return 0;

}