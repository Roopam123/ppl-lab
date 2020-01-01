#include<conio.h>
#include<iostream.h>

 void main()
 {
    int n;
    cout<<"Enter the value of within (1-7) :";
    cin>>n;
    if (n==1)
       cout<<"Sunday"<<endl;
    else if (n==2)
       cout<<"Monday"<<endl;
    else if (n==3)
       cout<<"Tuesday"<<endl;
    else if (n==4)
       cout<<" wednesday"<<endl;
    else if (n==5)
       cout<<"Thursday"<<endl;
    else if (n==6)
       cout<<"Friday"<<endl;
    else if (n==7)
       cout<<"Saturday"<<endl;
    else
    cout<<"Wrong choice"<<endl;

    getch();
 }
