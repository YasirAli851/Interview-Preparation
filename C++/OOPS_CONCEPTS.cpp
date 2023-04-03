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
-------------------------------------------x---------------------------------------x----
/*
Copy constructor:-Copy constructor is a constructor that is used to copy the data of an existing object on an another object.
In copy constructor,we pass an existing object as an argument to the constructor either by reference or by address to copy the 
data of passed object on an another object.
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

-------------------x---------------------------x-------------------------

/*

Destructor:-It is a special member function that gets called whenever an object goes out of scope.If destructor will not be declared by the programmer
then compiler will automatically generate default destructor.

*/

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
    ~student()
    {
        cout<<"Destructor called for student name "<<s_name<<" and student id "<<s_id<<endl;
    }
};
int main()
{
    student s1(12,"yasir");
    student s2(31,"Ankit");
    student s3(21,"Pratik");
    student s4(41,"akash");
}

/*
output:-

Destructor called for student name akash and student id 41
Destructor called for student name Pratik and student id 21
Destructor called for student name Ankit and student id 31
Destructor called for student name yasir and student id 12

as we can see in the output,destructor is called first for the object that is created
at last.
*/
--------------------x----------------------x-------------------------
/*

Friend class:-If a class C is a friend of an another class B, then all the private and protected member of the class C can be accessed by class B.
A friend class in C++ can access all the private and protected members of the class in which it is declared as a friend.

*/

#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    int student_id;
    string student_name;
    public:
    student(int r,int s_id,string n)
    {
        roll=r;
        student_id=s_id;
        student_name=n;
    }
    friend class show_student_data;
};
class show_student_data
{
    public:
    void show_data(student s)
    {
        cout<<"The name of the student is "<<s.student_name<<endl;
        cout<<"The id of the student is "<<s.student_id<<endl;
        cout<<"The roll number of the student is "<<s.roll<<endl;
    }
};
int main()
{
   student raj(12,902,"Raj");
   show_student_data show1;
   show1.show_data(raj);

}

/*

On the above code, class student is friend of class show_student_data.So,class show_student_data can access all the private and protected members of 
class student with the help of an object of class student.

*/
-------------------------------------x-----------------x-------------------
/*

Inline functions:-inline function is a feature related to functions in c++ that reduces the execution time and increases the speed of the program.
An inline function is a function that replicates itself in the line where it has been called.We can make a function inline if it does not contain any if
else/loops and the body of the inline function must be very short and simple.If the function is made inline and if it contains any if else/loops then 
compiler will not consider the function as an inline functions and work like a normal function.
Code for the inline function is shown below.

*/
#include<iostream>
using namespace std;
inline int add(int a,int b)
{
    return a+b;
}
int main()
{
    int res=add(10,20);
    cout<<"This is an inline function "<<endl;
    cout<<"The addition of two numbers is "<<res<<endl;
}

/*
----------------------------x------------------x-------------------------
Array of objects:-By using array of objects, we can store many objects in a single variable.Code of array of object is shown below.

*/

#include<iostream>
using namespace std;
int cnt1=0;
int cnt2=0;
class student
{
    private:
    int s_id;
    string s_name;
    public:
    void getData()
    {
        cnt1++;
        cout<<"enter the name of the student "<<cnt1<<endl;
        cin>>s_name;
        cout<<"enter the id of the student "<<cnt1<<endl;
        cin>>s_id;
    }
    void showData()
    {
        cnt2++;
        cout<<"The name of the student"<<cnt2<<" is "<<s_name<<endl;
        cout<<"The id of the student"<<cnt2<<" is "<<s_id<<endl;
    }
};
int main()
{
    student s[5];
    for(int i=0;i<5;i++)
    {
        s[i].getData();
    }
    for(int i=0;i<5;i++)
    {
        s[i].showData();
    }
}

------------------------x--------------------------------x-------------------

/*
Memory management operators:-We have 2 memory management operators NEW and DELETE.
NEW and DELETE operators are used to allocate and deallocate objects dynamically.
Code of use of NEW and DELETE operator is shown below:-
*/
#include<iostream>
using namespace std;
class student
{
    private:
    int s_id;
    string s_name;
    public:
    void getData()
    {
        cout<<"enter the s_id "<<endl;
        cin>>s_id;
        cout<<"enter s name"<<endl;
        cin>>s_name;
    }
    void showData()
    {
        cout<<"the name is "<<s_name<<endl;
        cout<<"The id is "<<s_id<<endl;
    }

};
int main()
{
    student *s1=new student();
    s1->getData();
    s1->showData();
    delete s1;
}

Inheritance:-In programming, Inheritance is a feature in which we can access the property of an existing class on an another class. 

Types of inheritance:-

1)single level inheritance:-It is a type of inheritance where there is only one base class and only one derived class.In this type of inheritance, only one derived class is there which accesses the property of base class.
#include<iostream>
using namespace std;
class base. //base class 
{
    public:
    int a=10;
};
class derived:public base //Inheriting the property of base class in the derived class publically.
{
    public:
    void show()
    {
        cout<<"The value of A is "<<a<<endl;
    }
};
int main()
{
    derived d;
    d.show();
}



2)Multilevel inheritance:-In this type of inheritance, there is only one base class and more than one derived class.We can say that, one class inherits the property another class which is further inherited by another classes.

#include<iostream>
using namespace std;
class grandfather  //base class for class father
{
    public:
    string eyes_colour="blue";
};
class father:public grandfather //derived class and (base class for class son).
{
    public:
    string hair_colour="white";
};
class son:public father //derived class and accessing the property of class father
{
    public:
    double height=6.2;
    void show()
    {
        cout<<"the hair colour of son is "<<hair_colour<<endl;
        cout<<"The eyes's colour of son is "<<eyes_colour<<endl;
        cout<<"the height of the son is "<<height<<endl;
    }
};
int main()
{
   son s1;
   s1.show();
}

3)Multiple inheritance:-It is a type of inheritance in which there is more than one base class and only one derived class.

#include<iostream>
using namespace std;
class grandfather //base class 
{
    public:
    string hair_colour="white";
};
class father //base class
{
    public:
    string eyes_colour="black";
};
class son:public father,public grandfather //Here,the derived class is son which is accessing the property of more than one base class(father and grandfather).
{
    public:
    double height=6.2;
    string hair_colour="black";
    void show()
    {
        cout<<"the hair colour of son is "<<hair_colour<<endl;
        cout<<"The eyes's colour of son is "<<eyes_colour<<endl;
        cout<<"the height of the son is "<<height<<endl;
    }
};
int main()
{
   son s1;
   s1.show();
} 

4)Hybrid inheritance:-In this inheritance, we can combine two different types of inheritance in a single program.

#include<iostream>
using namespace std;
class base   
{
    public:
    int a=10;
};
class derived_1:public base  //single inheritance is happening here.
{
    public:
    int b=20;
};
class derived_2
{
    public:
    int c=30;
};
class derived_3:public derived_2,public derived_1  //Multiple inheritance is happening here.
{
    public:
    int d=40;
    void show()
    {
        cout<<"the addition is "<<a+b+c+d<<endl;
    }
};
int main()
{
    derived_3 d3;
    d3.show();
}

--------------------------------------------x--------------------------------------------------------x-------------------------------------------------------------------

Access modes In inheritance:-
1)Public 2)Private 3)Protected.

Note:-Private members of the base class can never be inherited in any mode.

1)Public mode:-When we inherit the property of base class publically, then the public members of base class becomes the public member of the derived class and
Protected members of base class becomes protected member of the derived class.

2)Protected mode:-When we inherit the property of base class protectedly,then the public members of base class becomes the protected member of the derived class and
Protected members of base class becomes protected member of the derived class.

3)Private mode:-When we inherit the property of base class privately, then the public members of base class becomes the private member of the derived class and
Protected members of base class becomes private member of the derived class.

____________________________________________________________________________
Base class  |                         Derived class                         | 
____________|_______________________________________________________________|           
            |       public              private      Protected              |
            |_______________________________________________________________|
            |                                                               |
Public      |      public            not inherited   protected              |  
            |                                                               |
Private     |      not inherited     not inherited   not inherited          |
            |                                                               |
Protected   |      protected         not inherited   protected              |
____________|_______________________________________________________________|



---------------------------------------x------------------------------------------------x----------------------------------------------------------------------
Constructor in derived class:-In this concept, we basically understands the hierarchy of constructor calls in inheritance.Suppose we have three class A B and C.
So, if we inherit the property of class A into B and then property class B into C and then when we create an object of class C then constructor for class A will be called first then constructor of class B will be called and then at the end the constructor of class C will be called at last.

#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"inside the constructor of class A"<<endl;
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"inside the constructor of class B"<<endl;
    }
};
class C:public B
{
    public:
    C()
    {
        cout<<"inside the constructor of class C"<<endl;
    }
};
int main()
{
    C c1;
}


//one more example of constructors in derived class.In this example, we are giving the values to the constructor of class base1 and class base2 with
the help of the constructor of the derived class that is inheriting the properties of both class base1 and base2.

#include<iostream>
using namespace std;
class base1
{
    public:
    int a;
    base1(int i)
    {
        a=i;
        cout<<"inside constructor of class base 1 and value of a is "<<a<<endl;
    }
};
class base2
{
    public:
    int b;
    base2(int j)
    {
        b=j;
        cout<<"inside constructor of class base 2 and the value of b is "<<b<<endl;
    }
};
class derived:public base1,public base2
{
    public:
    int c;
    derived(int val1,int val2,int val3):base2(val2),base1(val3)
    {
        c=val1;
        cout<<"inside constructor of derived class and the value of c is "<<c<<endl;
    }   
};
int main()
{
    derived d(40,30,20);
}

--------------------------------------------------------x-----------------------------------------------------x---------------------------------

Function overriding:-It is concept of runtime polymorphism(discussed later in this section) in which we redefine the function of base class in the derived class.

#include<iostream>
using namespace std;
class base
{
    public:
    void func()
    {
        cout<<"Hello"<<endl;
    }
};
class derived:public base
{
    public:
    void func() //redefination of function func in the derived class.
    {
        cout<<"Hello world"<<endl;
    }
};
int main()
{
    derived d;
    d.func();
}

-----------------------------------------------x-------------------------------------------x--------------------------------------