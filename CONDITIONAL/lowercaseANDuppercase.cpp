#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter character ";
    cin>>ch;
    if(ch>='a'&&ch<='z')
    {
        cout<<"lowercaase";
    }
    else if(ch>='A'&&ch<='Z')
    {
        cout<<"uppercase";
    }
    else{
        cout<<"invalid";
    }
    return 0;
}