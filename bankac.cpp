#include<iostream>
using namespace std;
class bank{
    private:
    int ac_no;
    float balance=0;
    float amount;
    public:
    void setdata()
    {
        cout<<"Enter your account number:";
        cin>>ac_no;
       

    }
    void deposit()
    {
        cout<<"Enter amount to deposit:";
        cin>>amount;
        balance=balance+amount;
        cout<<amount <<"deposited sucessfully"<<endl;

    }
    void withdraw()
    {
        cout<<"Enter amount to wihtdraw:"<<endl;
        cin>>amount;
        if(amount>balance)
        {
            cout<<"Insufficient balance."<<endl;

        }
        else
        {
            balance=balance-amount;
            cout<<amount <<"withdrawn sucessfully."<<endl;
        }
    }
    void display()
    {
        cout<<"Your account number is :"<<ac_no<<endl;
        cout<<"Your balance is "<<balance<<endl;

    }


};
int main()
{   bank obj;
    int choice;
    do{
    cout<<"\n--------------Bank Menu--------------\n";
     cout<<"1.Deposit\n";
     cout<<"2.Withdraw\n";
     cout<<"3.Display\n";
     cout<<"4.Exit\n";
     cout<<"Enter your choice:\n";
     cin>>choice;

        switch(choice)
        {
            case 1:
            {
                obj.deposit();
                break;
            }
            case 2:
            {
                obj.withdraw();
                break;
            }
            case 3:
            {
                obj.display();
                break;
            }
            case 4:
            {
                cout<<"Exiting program.....";
                break;
            }
            default :{
                cout<<"Invalid choice";
            }
        }
      
    

}
  while(choice!=4);
     return 0;
}