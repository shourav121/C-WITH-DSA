#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age: ";
    cin>>age;

    if(age>=18)
    {
        cout<<"you can eligible for vote ";
    }
    else{
        cout<<"you can't eligble for vote ";
    }
    return 0;
}