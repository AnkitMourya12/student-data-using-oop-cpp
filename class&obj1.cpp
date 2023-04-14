#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void PrintInfo()
    {
        cout<<"Name = ";
       cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;

    }

};

int main()
{
    student arr[2];
    for(int i=0;i<2;i++)
    {   
        cout<<"Name = ";
        cin>>arr[i].name;
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;

    }
    for(int i=0;i<2;i++)
    {
        arr[i].PrintInfo();
    }
    return 0;
}