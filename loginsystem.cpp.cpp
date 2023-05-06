using namespace std;
#include<iostream>
#include<string>

using namespace std;

struct materials{
    string username, password, email;
};

string login(materials data){
    string name, gmail, pass;

    cout<<"Email-> ";
    cin>>gmail;
    if(gmail != data.email)
    {
        cout<<"Email does not match."<<endl;
        return "error";
    }

    cout<<"Password->";
    cin>>pass;
    if(pass != data.password)
    {
        cout<<"Incorrect password."<<endl;
        return "error";
    }

    string yorno;
    cout<<"Login Successful"<<endl<<"Enter y to see your profile"<<endl;
    cin>>yorno;
    if(yorno != "y")
    {
        cout<<"Okay, if you don't want to check your profile, your account will be deleted from the server."<<endl;
        return "error";
    }

    int checkPassword;
    cout<<"username-"<<data.username<<endl<<"Email-"<<data.email<<endl<<"password- *******"<<endl<<"Enter 0 to see your password"<<endl;
    cin>>checkPassword;
    if(checkPassword != 0)
    {
        cout<<"Invalid input."<<endl;
        return "error";
    }

    cout<<"Password-"<<data.password<<endl;
    return "success";
}

string signUp(){
    materials data;

    cout<<"Enter your name-> ";
    cin>>data.username;
    if(data.username.empty())
    {
        cout<<"Please enter a valid username."<<endl;
        return "error";
    }

    cout<<"Create a password-> ";
    cin>>data.password;
    if(data.password.empty())
    {
        cout<<"Please create a strong password."<<endl;
        return "error";
    }

    cout<<"Enter your email-> ";
    cin>>data.email;
    if(data.email.empty() || data.email.find('@') == string::npos || data.email.find(".com") == string::npos)
    {
        cout<<"Please enter a valid email."<<endl;
        return "error";
    }

    cout<<"Now it's time to login."<<endl;
    string result = login(data);
    return result;
}

int main()
{
    string result = signUp();
    if(result == "success")
    {
        cout<<"Signup Successful."<<endl;
    }
    else
    {
        cout<<"Signup Failed."<<endl;
    }
    return 0;
}

