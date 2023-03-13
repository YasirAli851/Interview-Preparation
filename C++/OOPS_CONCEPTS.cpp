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

-----------------------------------------------------------------x-----------------------------------------------x----------------------
Local class:-A local class is a class that is declared inside a function.and the methods of a local class cannot be dfined outside
the class if the class is local.Local obejct is an object that is created inside the funtion in which the class is declared.

#include<iostream>
using namespace std;
void fun()
{
    class animal
    {
        private:
        int tails;
        public:
        void show()
        {
            cout<<"this is local class"<<endl;
        }
    };
    animal a1; //this a1 will be considered as local object.
    a1.show();
}
int main(){
    fun();
}

-------------------------------------------x----------------------------------------x------------------------------------------
Global class:- A global class is a class that is not defined inside any function and accessible throughout the program and 
global object is an object that is created outside the class as well as outside the main function but an object must be used 
inside a function.

#include<iostream>
using namespace std;
void sshow();
class animal
{
    private:
    int tails;
    public:
    void show()
    {
        cout<<"this is global class ";
    }
};
animal a1;
int main(){
    sshow();
}
void sshow()
{
    a1.show();
}

---------------------------------------------x---------------------------------------------x----------------------------------------
Default/non-parameterised constructor is a constructor which gets called automatically whenever an
object is created.

#include<iostream>
using namespace std;
class student
{
    private:
    int s_id;
    string s_name;
    public:
    student()
    {
        s_id=40;
        s_name="pritam";
    }
    void show()
    {
        cout<<"student id is "<<s_id<<" and student name is "<<s_name<<endl;
    }
};
int main()
{
    student s1;
    s1.show();
}

-----------------------------------------------------------x----------------------------------------------x-------------------------------------
Parameterised constructor is a constructor that contains parameter and it gets called
when an object is having same argument as of parameter.

#include<iostream>
using namespace std;
class student
{
    private:
    int s_id;
    string s_name;
    public:
    student(int id,string n)
    {
        s_id=id;
        s_name=n;
    }
    void show()
    {
        cout<<s_id<<" "<<s_name<<endl;
    }
};
int main()
{
    student s1(42,"pritam");
    student s2(53,"prachi");
    student s3(65,"raj");
    s1.show();
    s2.show();
    s3.show();
}

/*
Copy constructor:-Copy constructor is a constructor that is used to copy the data of an existing object on an another object.In copy constructor,we pass an existing object as an argument to the constructor either by reference or by address to copy the data of passed object on an another object.
*/  

//Code of copy constructor:-
#include<iostream>
using namespace std;
class student
{
    private:
    int student_id;
    string student_name;
    public:
    student()
    {
        student_id=0;
        student_name="anyone";
    }
    student(int s_id,string s_name)
    {
        student_id=s_id;
        student_name=s_name;
    }
    student(student *s)
    {
        student_id=s->student_id;
        student_name=s->student_name;
    }
    void show()
    {
        cout<<"The name of the student is "<<student_name<<" and the id of the student is "<<student_id<<endl;
    }
};
int main()
{
    student s1(32,"ayush");
    student s2(&s1);
    s2.show();
}
