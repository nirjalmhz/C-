#include<iostream>
using namespace std;
class universal{
    private:
    string username_signup;
    string password_signup;
    string username_login;
    string password_login;
    public:
    void signup()
    {
        cout<<"Enter Username :";
        cin>>username_signup;
        cout<<"Enter Password :";
        cin>>password_signup;
        cout<<"Account created sucessfully"<<endl;
    }
    void verify()
    {
        cout<<"Enter username:";
        cin>>username_login;
        cout<<"Enter password:";
        cin>>password_login;
        if(username_signup==username_login && password_signup==password_login)
        {
            cout<<"Valid student";
        
        }
        else
        {
            cout<<"No record found for this student";
        }
    }
};
int main()
{
    universal obj;
    obj.signup();
    obj.verify();
    return 0;
}