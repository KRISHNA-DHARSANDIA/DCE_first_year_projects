#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    cout<<"hello weclome to this app"<<endl;
    cout<<"plese create a new account"<<endl;

    cout<<"choose a userename"<<endl;
    string user;

    getline(cin,user);

    cout<<"choose a password .."<<endl;
    string pass;

    getline(cin,pass);

    cout<<"plese enter information"<<endl;
    cout<<"Username : "<<endl;
    string username;

    getline(cin,username);

    string password;

    cout<<"password :"<<endl;

    getline(cin,password);


    while(user!=username && pass!=password)
    {
            cout<<" Plese enter rigth USERNAME and Password"<<endl;

            cout<<"Username :"<<endl;

            getline(cin,username);

            cout<<"Password"<<endl;

            getline(cin,password);
    }

    cout<<"welcome to the app"<<endl;

    double balance =5.00;
    
    cout<<"would you link add money into your balance (yes,no)"<<endl;

    string q1;

    getline(cin,q1);

    if(q1=="yes")
    {
        cout<<"enter how much money wnat you enter "<<endl;

        double add;

        cin>>add;

        cout<<"your newbalnce is"<<balance+add<<"INR"<<endl;

    }
    
    else
    {
        cout<<"alright"<<endl;
    } 

    cout<<"would you link burger today.......(yes,no)"<<endl;

    string q2;

    getline(cin,q2);

    if(q2=="yes")
    {
        cout<<"please select what burger you want"<<endl;

        string burgertype[]={"nature burger","chees burger","noraml burger","spaceal begel"};

        double burgerprice[]={50.00,70.00,100.00,120.00};

        cout<<"1. "<<burgertype[0]<<"--"<<burgerprice[0]<<"INR"<<endl;
        cout<<"2. "<<burgertype[1]<<"--"<<burgerprice[1]<<"INR"<<endl;
        cout<<"3. "<<burgertype[2]<<"--"<<burgerprice[2]<<"INR"<<endl;
        cout<<"4. "<<burgertype[3]<<"--"<<burgerprice[3]<<"INR"<<endl;

        cout<<"youer chooise"<<endl;

        int q3;

        cin>>q3;
    

        while(q3>4||q3<1)
        {
            cout<<"thsi is not valid  input plase trye again"<<endl;

            cin>>q3;
        }
        if(q3==1)
        {
            cout<<"you have order a"<<burgertype[0]<<endl;

            cout<<"The total of your order is "<<burgertype[0]<<endl;

            cout<<"You have "<<balance<<burgerprice[0]<<"  INR left on your account"<<endl;
        } 

        else if(q3==2)
        {
            cout<<"you have order a"<<burgertype[1]<<endl;

            cout<<"The total of your order is "<<burgertype[1]<<endl;

            cout<<"You have "<<balance<<burgerprice[1]<<"INR left on your account"<<endl;
        }

        else if(q3==3)
        {
            cout<<"you have order a"<<burgertype[2]<<endl;

            cout<<"The total of your order is "<<burgertype[2]<<endl;

            cout<<"You have "<<balance<<burgerprice[2]<<"INR left on your account"<<endl;
        }

         else if(q3==4)
        {
            cout<<"you have order a"<<burgertype[3]<<endl;

            cout<<"The total of your order is "<<burgertype[3]<<endl;

            cout<<"You have "<<balance<<burgerprice[3]<<"INR left on your account"<<endl;
        }
    }

    else{
        cout<<"have a good day"<<endl;
    }


    
    return 0;
} 