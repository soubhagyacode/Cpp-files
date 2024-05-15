#include<iostream>
using namespace std;

int main()
{
    int num, choice, q,p,r;
    cout<<"enter the number you want currency notes of in 100,50,20,1"<<endl;
    cin>>num;
    cout<<"enter the choice between 100,50,20,1"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 100: 
           q=num/100;
           cout<< q <<endl;
           break;
        case 50: 
           q=num-(num/100)*100;
           cout<< q/50 <<endl;
           break;
        case 20: 
           q=num-(num/100)*100;
           p=num-(q/50)*50;
           cout<< p/20 <<endl;
           break;
        case 1: 
           q=num-(num/100)*100;
           p=num-(q/50)*50;
           r=num-(p/20)*20;
           cout<< r/1 <<endl;
           break;
    }
}