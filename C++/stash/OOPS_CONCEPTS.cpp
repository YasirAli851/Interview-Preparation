What is class?
Ans:-a class is a collection of data members and member functions.
What is an object?
Ans:-An object is something that contains all the characteristics that is there inside a class.

#include <iostream>
using namespace std;
class animal
{
    private: //access specifiers
    int legs; //data memebers
    int eyes;
    int tail;
    int wings;
    int ears;
    public:   //access specifier
    void get_animal_details() //member functions
    {
        cout<<"enter the number of legs"<<endl;
        cin>>legs;
        cout<<"enter the number of eyes"<<endl;
        cin>>eyes;
        cout<<"enter the number of tails"<<endl;
        cin>>tail;
        cout<<"enter the number of wings"<<endl;
        cin>>wings;
        cout<<"enter the number of legs"<<endl;
        cin>>ears;

    }
    void show_animal_details() //member function
    {
        cout<<"legs are "<<legs<<endl;
        cout<<"eyes are "<<eyes<<endl;
        cout<<"wings are "<<wings<<endl;
        cout<<"ears are "<<ears<<endl;
        cout<<"tail is "<<tail<<endl;
    }
};
int main()
{
    cout<<"enter the details for dog"<<endl;
    animal dog;
    dog.get_animal_details();
    cout<<"details of dog are shown below"<<endl;
    dog.show_animal_details();

    cout<<"enter the details of peacock"<<endl;
    animal peacock;
    peacock.get_animal_details();
    cout<<"details of peacock are shown below"<<endl;
    peacock.show_animal_details();
}
------------------------------x-------------------------------------------x---------------------
state identity and behavior of an object:
//example of bank account
state:-balance,name and customer_id
behaviour:-withdrawal,deposit
identity:-nitish's account is similar to kanu's account but state has different values.

//example of car
state:-name,chesis_num,colour
behavior:-drop from one place to another
identity:-nitish's car is similar piyush's car but states different.

-------------------------------x----------------------------------------x---------------------
Q:-what is the use of scope resolution operator in c++.
Ans:-There are many uses of scope resolution operator in c++,but one basic use of scope resolution operator is to define the member function outside of the class using the scope resolution operator.

Lets have a look on the code:-

#include<bits/stdc++.h>
using namespace std;
class student
{
    private:
    int roll;
    string name;
    int adm_no;
    string stream;
    char sec;
    public:
    void get_det();
    void put_details();
}; 
void student::get_det()
{
    cout<<"enter your name "<<endl;
    cin>>name;

    cout<<"enter your adm_no "<<endl;
    cin>>adm_no;

    cout<<"enter your stream "<<endl;
    cin>>stream;

    cout<<"enter your roll "<<endl;
    cin>>roll;

    cout<<"enter your section "<<endl;
    cin>>sec;
}
void student::put_details()
{
    cout<<"your name is "<<name<<endl;
    cout<<"your roll is "<<roll<<endl;
    cout<<"your adm_no is "<<adm_no<<endl;
    cout<<"your stream is "<<stream<<endl;
    cout<<"your section is "<<sec<<endl;
}
int main()
{
    student s;
    s.get_det();
    s.put_details();
}