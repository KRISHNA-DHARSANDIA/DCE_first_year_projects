#include<string>
#include<conio.h>
#include<iostream>
using namespace std;

//Check Balance
//cash WithDraw
//User Detail
//Update Moblie Number

class atm
{
    private:
            long int account_no;
            string name;
            int PIN;
            double balance;
            string mobile_no;
    public:
            void setdata(long int account_no_a,string name_a,int PIN_a,double balance_a,string mobile_no_a)
            {
                account_no=account_no_a;
                name=name_a;
                PIN=PIN_a;
                balance=balance_a;
                mobile_no=mobile_no_a;
            }

    long int getAccountNo()
    {
        return account_no;
    }

    string getname()
    {
        return name;
    }

    int getpin()
    {
        return PIN;
    }

    double getbalance()
    {
        return balance;
    }

    string getmobile_num()
    {
        return mobile_no;
    }



    void setMobile(string mob_pre,string mob_new)
    {
        if(mob_pre==mobile_no)
        {
            mobile_no= mob_new;

            cout<<"😀😀Sucessfull update Mobile number.....😀😀"<<endl;

           // _getch();
        }

        else
        {
            cout<<"😨😨Incorrect !!!!!!!! Old mobile no......😨😨"<<endl;
        }
    }

    void  cash_WithDraw(int amount_a)
    {
        if(amount_a > 0 && amount_a < balance)
        {
            balance -= amount_a;
            cout<<"💵💵plese collect your Cash💵💵"<<endl;
            cout<<"💲Available balnce💲:"<<balance<<endl;

            //_getch();
        }

        else
        {
            cout<<"Invalid input or insufficint Balance"<<endl;

           // _getch();

        }
    }


};

int main()
{

    int choise=0,enterPin;
    long int enterAccountNo;

    system("cls");

    atm user1;

    user1.setdata(1234567,"Krishna",1111,45000.90,"1234567");

    do
    { 
        system("cls");

        cout<<endl<<"💲💲💲💲welcome to ATM💲💲💲💲"<<endl;

        cout<<endl<<"Enter your account number...";
        cin>>enterAccountNo;

        cout<<endl<<"enter PIN......";
        cin>>enterPin;


        if((enterAccountNo==user1.getAccountNo()) && (enterPin==user1.getpin()))
        {
                do
               {
                    int amount=0;
                    string oldmobileNo,newmobileNo;

                    system("cls");
                    
                    cout<<"1.Check Balance"<<endl;
                    cout<<"2.cash WithDraw"<<endl;
                    cout<<"3.User Detail"<<endl;
                    cout<<"4.Update Mobile Number"<<endl;
                    cout<<"5.exit"<<endl;

                    for(int i=0;i<10;i++)
                    {
                    cout<<"=\t";
                    }

                    cout<<"Choise Any one the option......."<<endl;
                    cin>>choise;

                    switch (choise)
                    {
                        case 1:

                        cout<<endl<<"Youer bank balance is ....."<<user1.getbalance()<<endl;
                       // _getch();
                        break;

                        case 2:

                        cout<<endl<<"Enter your amount  :";
                        cin>>amount;
                        user1.cash_WithDraw(amount);
                        break;

                        case 3:
                       //👤👤

                        cout<<endl<<"showing Useer Detail";
                        cout<<endl<<"---> account number...."<<user1.getAccountNo();
                        cout<<endl<<"---> Name...."<<user1.getname();
                        cout<<endl<<"---> Balsnce..."<<user1.getbalance();
                        cout<<endl<<"--->  Mobile No..."<<user1.getmobile_num();

                       // _getch();
                        break;
                        

                        case 4:

                        //📱📱📳📶

                        cout<<"Updating Mobile Number"<<endl;

                        cout<<"enter old number"<<endl;
                        cin>>oldmobileNo;
                        
                        cout<<"enter new number"<<endl;
                        cin>>newmobileNo;

                        user1.setMobile(oldmobileNo,newmobileNo);
                        break;

                        case 5:
                        cout<<"exiting..............."<<endl;
                        exit(1);
                
                        default:
                        cout<<"Not valid..."<<endl;
                    
                    }


                } while (1);         
        }   

        else
            {
                cout<<"enter valid USER NAME and PASSWORD"<<endl;
            }              
                    
    }while (1);

return 0;
}
    