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
Ans:-There are many uses of scope resolution operator in c++,but one basic use of scope resolution operator is to define the member function outside 
of the class using the scope resolution operator.

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

Destructor:-It is a special member function that gets called whenever an object goes out of scope.If destructor will not be declared by the 
programmer then compiler will automatically generate default destructor.

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

//Inheritance:-In programming, Inheritance is a feature in which we can access the property of an existing class on an another class. 

//Types of inheritance:-

//1)single level inheritance:-It is a type of inheritance where there is only one base class and only one derived class.In this type of inheritance, 
//only one derived class is there which accesses the property of base class.

#include<iostream>
using namespace std;
class base //base class 
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



//2)Multilevel inheritance:-In this type of inheritance, there is only one base class and more than one derived class.We can say that, one class
//inherits the property another class which is further inherited by another classes.

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

//3)Multiple inheritance:-It is a type of inheritance in which there is more than one base class and only one derived class.

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
class son:public father,public grandfather //Here,the derived class is son which is accessing the property of more than one base 
    //class(father and grandfather).
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

//4)Hybrid inheritance:-In this inheritance, we can combine two different types of inheritance in a single program.

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

//--------------------------------------------x--------------------------------------------------------x-------------------------------------------------------------------
/*
Access modes In inheritance:-
1)Public 2)Private 3)Protected.

Note:-Private members of the base class can never be inherited in any mode.

1)Public mode:-When we inherit the property of base class publically, then the public members of base class becomes the public member of the derived 
class and Protected members of base class becomes protected member of the derived class.

2)Protected mode:-When we inherit the property of base class protectedly,then the public members of base class becomes the protected member of the 
derived class and Protected members of base class becomes protected member of the derived class.

3)Private mode:-When we inherit the property of base class privately, then the public members of base class becomes the private member of the derived
class and Protected members of base class becomes private member of the derived class.

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

*/


//---------------------------------------x------------------------------------------------x------------------------------------------------------
//Constructor in derived class:-In this concept, we basically understands the hierarchy of constructor calls in inheritance.Suppose we have three 
//class A B and C. So, if we inherit the property of class A into B and then property of class B into C and then when we create an object of class 
//C then constructor for class A will be called first then constructor of class B will be called and then at the end the constructor of class C will
//be called at last.

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
//the help of the constructor of the derived class that is inheriting the properties of both class base1 and base2.

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

//Function overriding:-It is concept of runtime polymorphism(discussed later in this section) in which we redefine the function of base class in the 
//derived class.

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
/*
Ambiguity resolution using scope resolution operartor.
what is ambiguity?
When we create two classes DERIVED1 and DERIVED2 by inheriting the property of one class called class Base and then again we create one more class 
called Derived3 by inheriting the property of class Derived1 and class Derived2 then ambiguity arisies because base class's property has been 
transferred to class derived1 and derived2 and when we are accessing the property of class derived1 and derived2 in derived3,then the property of 
base class is transferred in class derived 3 two times because the property of base's class is transferred two times in class derived3 through class
derived1 and derived2.

*/
// Ambiguity resolution using scope resolution operator.

#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    base()
    {
        a=10;
    }
    void show()
    {
        cout<<"Show function of class base has been called ";
    }
};
class derived1:public base
{
    public:
    void show()
    {
        cout<<"Show function of class derived1 has been called ";
    }
};
class derived2:public base
{
    public:
    void show()
    {
        cout<<"Show function of class derived2 has been called ";
    }
};
class derived3:public derived1,public derived2
{
    
};
int main()
{
    derived3 d;
    d.derived2::show(); 
    /* telling the compiler to execute the show function of class derived2
    because derived2 is getting inherited in class derived3 so with help of the object of class
    derived3 we are accessing class derived2 and executing the show function of class derived2. 
    */
}

//ambiguity resolution using virtual base class:-

#include<iostream>
using namespace std;
class base
{
    public:
    void show()
    {
        cout<<"inside show function of class base "<<endl;
    }
};
class derived1:virtual public base
{
    
};
class derived2:virtual public base
{
    
};
class derived3:public derived1,public derived2
{
    
};
int main()
{
    derived3 d;
    d.show();
}

-----------------------x--------------------------------x-----------------------------------------------------------

/*Nesting of class:-Nesting of class allows us to create a class inside an existing class.If a class is declared or defined inside an existing class,
then we have to create an instance of that existing class in which another class is declared and defined.So,with the help of an object of existing 
class, we can access the class that is there inside an existing class.
*/
Ways of implementing nesting of classes:-

Way 1:

#include<iostream>
using namespace std;
class base //existing class
{
    public:
    class B //new class inside an existing class.
    {
        private:
        int a;
        public:
        void get_data()
        {
            cout<<"enter the value of a "<<endl;
            cin>>a;
        }
        void put_data()
        {
            cout<<"the value of a is "<<a<<endl;
        }
    };
};
int main()
{
    /*
    Inside this main function, we are going to class B from class base with the 
    Help of scope resolution operator and after going to class B,we have created an object of class B named as b1 and with the help of b1,we are 
    accessing the member functions of class B.
    */
    base::B b1;
    b1.get_data();
    b1.put_data();
}


Way 2:-

#include<iostream>
using namespace std;
class base //existing class
{
    private:
    int c;
    public:
    base()
    {
        c=20;
        cout<<"the value of C is "<<c<<endl;
    }
    class B //new class inside an existing class.
    {
        private:
        int a;
        public:
        void get_data()
        {
            cout<<"enter the value of a "<<endl;
            cin>>a;
        }
        void put_data()
        {
            cout<<"the value of a is "<<a<<endl;
        }
    };
    public:
    B b1;  /* we have created an object of class B named as b1 and this object will be considered as public member of class base */
};
int main()
{
    /* here inside main function, we have created an object of class base and we are accessing the object b1 of class B with the help of the object of class base because 
    b1 is a public member of class base.so,after accessing b1 with the help of the object of class base, we are accessing the member function of class B as b1 is an object 
    of class B. */

    base b;
    b.b1.get_data();
    b.b1.put_data();
}

----------------------------------------------x---------------------------x------------------------------------x-----------------------------x----------------------------
/*
Polymorphism:-In object orientation,it is a feature that follows the concept of  "same name different works".

we have two types of polymorphism:-

1)Compile time polymorphism:-Function overloading is the best example of compile time polymorphism.
*/

//Function overloading:-In function overloading,we create more than one function of same name but keeping number of parameters,data types of 
//parameters,and arrangement of parameters different and functions will be called based on the passing of arguments from the main function.

#include<iostream>
using namespace std;
//1st calculation function
int calculation(int a,int b)
{
    return a*b;
}
//2nd calculation function
int calculation(int a,int b,int c)
{
    return a+b+c;
}
//3rd calculation function
double calculation(double a,double b)
{
    return a/b;
}
int main()
{
    int result1=calculation(10,20,30); //2nd calculation function will be called as return type of function,data types of arguments,arrangement of 
    //arguments and numbers of arguments are matching with the parameters of the 2nd calculation function.

    int result2=calculation(10,30); //1st calculation function will be called as return type,data types of arguments,arrangement of arguments and
    //numbers of arguments are matching with the parameters of the 1st calculation function.

    double result3=calculation(10.0,5.0); //3rd calculation function will be called as return type,data types of arguments,arrangement of arguments 
    //and numbers of arguments are matching with the parameters of the 3rd calculation function.

    cout<<"The value of result 1 is "<<result1<<endl;
    cout<<"The value of result 2 is "<<result2<<endl;
    cout<<"The value of result 3 is "<<result3<<endl;
    /*
    This code is an example of polymorphism by parameters too.
    */
}


// Run time polymorphism:-Function overriding is best example of run time polymorphism.

//Function overriding:-It is concept of runtime polymorphism in which we redefine the function of base class in the derived class

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


------------------------------------x--------------------------x------------------------
/*
operator overloading:-By using the operator overloading,we can use operator for those purpose for which it has not been made.
for an example,we can overload (+) operator to add two objects.
*/
//Binary operating overloading(+):-
#include<iostream>
using namespace std;
class add
{
    public:
    int num1;
    int num2;
    add(){}
    add(int a,int b)
    {
        num1=a;
        num2=b;
    }
    add operator+(add a1)
    {   add ad;
        ad.num1=num1+a1.num1;
        ad.num2=num2+a1.num2;
        return ad;
    }
    void show()
    {
        cout<<"The value of num1 is "<<num1<<" and the value of num2 is "<<num2<<endl;
    }
};
int main()
{
    add a1(10,20);
    add b1(30,40);
    add c1=a1.operator+(b1);
    //here,we have three objects a1,b1 and c1.We have values in a1 and b1 and with the help of the operator overloading,we are adding the value of num1 and num2 of both 
    //the objects a1 and b1 and storing their sum in an another object c1.
    c1.show();
}

// overloading preincrement unary operator
#include<iostream>
using namespace std;
class increment
{
    public:
    int num1;
    increment(){}
    increment(int a)
    {
        num1=a;
    }
    increment operator++()
    {   
        increment i;
        i.num1=++num1;
        return i;
    }
    void show()
    {
       cout<<"The value of num1 is "<<num1<<endl;
    }
};
int main()
{
    increment i1(10);
    increment i2;
    i2=++i1;
    i2.show();
    
}

// overloading postincrement unary operator

#include<iostream>
using namespace std;
class increment
{
    public:
    int num1;
    increment(){}
    increment(int a)
    {
        num1=a;
    }
    increment operator++(int a)
    {   
        increment i;
        num1++;
        i.num1=num1;
        return i;
    }
    void show()
    {
       cout<<"The value of num1 is "<<num1<<endl;
    }
};
int main()
{
    increment i1(10);
    increment i2;
    i2=i1++;
    i2.show();
}

//overloading insertion(<<) and extraction(>>) operator.

#include<iostream>
using namespace std;
class ope_ov
{
    public:
    int a;
    int b;
    friend istream &operator>>(istream &in,ope_ov &ob);
    friend ostream &operator<<(ostream &out,const ope_ov &ob);
};
istream &operator>>(istream &in,ope_ov &ob)
{
    cout<<"enter the value of a "<<endl;
    in>>ob.a;
    cout<<"enter the value of b"<<endl;
    in>>ob.b;
    return in;
}
ostream &operator<<(ostream &out,const ope_ov &ob)
{
    out<<"The value of a is "<<ob.a<<" and the value of b is "<<ob.b<<endl;
    return out;
}
int main()
{
    ope_ov ov1;
    cin>>ov1;
    cout<<ov1;
}

//Pointer to an object:-
#include<iostream>
using namespace std;
class student
{
    public:
    int age;
    string name;
    public:
    void get_data()
    {
        cout<<"enter your name "<<endl;
        cin>>name;
        cout<<"enter your age "<<endl;
        cin>>age;
    }
    void show_data()
    {
        cout<<"The name of the student is "<<name<<endl;
        cout<<"The age of the student is "<<age<<endl;
    }
};
int main()
{
    student s1;
    student *obj;
    obj=&s1;
    obj->get_data();
    obj->show_data();
}

//This pointer is a pointer that can be called inside struct,union and non-static member function of a class.With the help of this pointer,we can get the address of the 
//object from which the non static member function has been called.

//uses of this pointer:-
//1)When the name of the local variable is same as data member's name.
#include<iostream>
using namespace std;
class student
{
    private:
    int student_id;
    int student_roll;
    public:
    void get_data(int student_id,int student_roll)
    {
        this->student_id=student_id; 
        this->student_roll=student_roll;
        //in left hand side we have used "this",so,in "this" pointer,the address of the object is stored from which "get_data" function has been called,that means "this" 
        //pointer is having the address of object s1.now,look at the function's parameters,the name of the parameter is same as name of the data members,here ambiguity 
        //arises,so i have used this->student_id and this->student_roll so that the value of function's parameters(student_id and student_roll) will go inside object s1's 
        //student_id and s1's student_roll.
    }
    void show_data()
    {
        cout<<"The id of the student is "<<student_id<<endl;
        cout<<"The roll of the student is "<<student_roll<<endl;
    }
};
int main()
{
    student s1;
    s1.get_data(24,254);
    s1.show_data();
}

//2)Method chaining:-It simply means calling multiple methods using the same object and its reference.

#include<iostream>
using namespace std;
class student
{
    private:
    int s_roll;
    int s_id;
    public:
    student& set_roll(int roll)
    {
        s_roll=roll;
        return *this;
    }
    student& set_student_id(int id)
    {
        s_id=id;
        return *this;
    }
    void show_data()
    {
        cout<<"The roll of the student is "<<s_roll<<endl;
        cout<<"The id of the student is "<<s_id<<endl;
    }
};
int main()
{
    student s1;
    s1.set_roll(10).set_student_id(326);
    s1.show_data();
}

//Virtual functions:
//Suppose we have two classes,one is base class and another is derived class,When we create a pointer of base class and on that pointer when we store the address of object 
//of derived class and whenever we call the member function using that pointer then the member functions of base's class gets called because the pointer is of base class,but 
//we have stored the address of object of derived class in that base class's pointer so that member function of derived class should be called right?but member function of 
//base class has been called,so,we will make the function of base class as virtual function so that despite of having a pointer of base class,the member function of derived 
//class will be called because the pointer of base class is storing the address of object of derived class.

#include<iostream>
using namespace std;
class A
{
    public:
    virtual void fun()
    {
        cout<<"This is fun of class A "<<endl;
    }
};
class B:public A
{
    public:
    void fun()
    {
        cout<<"This is fun of class B "<<endl;
    }
};
int main()
{
    A *a1;
    B b1;
    a1=&b1;
    a1->fun();
}

//Pure virtual function:pure virtual function is a virtual function that ends with (=0).if a class is having atleast one pure virtual function then that class will become 
//abstract class.Abstract class is a class whose member functions must be defined inside the derived class otherwise that derived class will also become abstract class.
//An abstract class is a class whose object cannot be created and member functions of abstract class must be defined inside derived class.

#include<iostream>
using namespace std;
class A
{
    public:
    virtual void fun()=0; //fun is a pure virtual function that made this class A an abstract class.
};
class B:public A
{
    public:
    void fun() //function fun of class A has been defined here.
    {
        cout<<"Inside derived class "<<endl;
    }
};
int main()
{
    B b1;
    b1.fun();
}


----------------------------x------------------------x--------------------------
Strings:-string is something that is enclosed with double quotes "Yasir ali".As well as we call it a combination of characters.In c++ string is a class which helps us in implementing strings.In order to use strings,we need to include string header file.At the end of every string,'\0' character is placed by the compiler that indicates the end of the string.

lets implement string:-

#include<iostream>
#include<string>
using namespace std;
int main()
{
    //declaring a string variable.
    string name="preeti";
    cout<<"The value inside name is "<<name<<endl;
}

lets discuss some of the functions of strings:-

1)length():-This function gives the size of the string.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name="manchester united";
    cout<<"The size of the string is "<<name.length();
}
The output of the above code will be 17 as we have used length function that is giving the count of characters (i.e 17).

2)resize():-It helps in growing and shrinking the string with the given size.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name="manchester united";
    name.resize(15);
    cout<<"The string after resizing is "<<name;
}

The output of the above code will be manchester unit as we have used resize function by giving the size as 15,so,in output we will get only 15 characters of string.

3)begin():-using begin() function,we get the address of first character of string.
4)end():-using end() function,we get the address of that position that is present after the address of last character.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="manchester united";
    //begin function and end function
    string::iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i;
    }
}

5)swap():-This swap function helps in swapping the values between 2 strings.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Pritam singh";
    string s2="Raj singh";
    cout<<"Before swapping,the value of s1 is "<<s1<<" and the value of s2 is "<<s2<<endl;
    s1.swap(s2);
    cout<<"after swapping,the value of s1 is "<<s1<<" and the value of s2 is "<<s2<<endl;
}

6)rbegin():-This function is the opposite of begin() function.Just like begin() function keeps the address of first character,rbegin() keeps the address of last character.

7)rend():-This function is the opposite of end() function.Just like end() function keeps the address of that position that is present after the address of last character,rend() function keeps the address of that position that is present before the address of first character.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="jasraj kaur";
    string::reverse_iterator i;   
    i=s.rend();
    i--;
    for(i;i>=s.rbegin();i--)
    {
        cout<<*i;
    
    }
}

8)append():-This function helps in concatenating two strings.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Zainab ahmad";
    string s2="shariqua hazra";
    s1.append(s2); //string s2 will be added at the end of string s1.
    cout<<"The string after concatenating is "<<s1<<endl;
}

Streams and file handling:-
streams:-streams is considered as a base/parent class for all the derived class(istream,ostream and more).

File handling:-File handling is a concept through which we read the contents(binary,text and executable) of file in our program and write the contents(binary,text and executable) from our program in the file.

Reading from a file:-
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s;
    ifstream i("fileHandling.txt"); /* We have a text inside a file named "fileHandling.txt". and with the help of the object of ifstream class named "i",we are able to access the content of that file as i have passed the name/path of the file as an argument while creating ifstream class's object "i". */
    getline(i,s); /* We have used getline because the text is space separated in fileHandling.txt file.One thing to be noted here is that inside getline i have passed ifstream's object "i" because we are accessing the contents of file and saving those contents in a string variable called "s" and then printing the content of the file with the help of "s"*/
    cout<<"The content in the fileHandling.txt file is "<<s<<endl;
    i.close();//closing the file.
}

writing to a file

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s;
    cout<<"enter the name of your college "<<endl;
    cin>>s;
    ofstream o("fileHandling.txt"); /* We have a file named "fileHandling.txt". and with the help of the object of ofstream class named "o",we are able to write the content of our program on that file as i have passed the name/path of the file as an argument while creating ofstream class's object "o". */
    o<<s; /* in this line i have written "o" then insertion operator(<<) and then string data type called "s" (o<<s) and this will help us to write the content on fileHandling.txt file as i have used ofstream class's object that is having the name/path of fileHandling.txt file and then i have written "s" after insertion operator so that the content of string s must be written inside fileHandling.txt file.
    */
    o.close();//closing the file.
}

-----------------------------x-------------------------------x--------------------------------------
Exception handling:-Exception is an abnormal situation that happens during run time of the program.So,in order to handle those abnormal situation,we use a concept called exception handling.

try block:-It is a block where the code must be written so that if any exception occurs then we will be able to handle that exception using throw and catch keywords.

throw:-The use of throw is to throw the exception.

catch:-the catch block allows us to define a block which should be executed if there would be any exception in the code that is there inside try block.

handling array index out of bound exception:

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,6,10};
    int s=5;
    int ind=5;
    try
    {
        if(ind>=s)
        {
            throw (ind);
        }
        cout<<"The value at index "<<ind<<" is "<<arr[ind]<<endl;
    }
    catch(int exc)
    {
        cout<<"value at index "<<exc<<" is not available "<<endl;
    }

}

handling division by zero error:-

#include<iostream>
using namespace std;
int main()
{
    int a=10,b=0;
    try
    {
        if(b==0)
        {
            throw "cannot divide by zero";
        }
        cout<<"the value after division is "<<a/b;
    }
    catch(const char *exc)
    {
        cout<<"The type of exception that is caught is "<<exc<<endl;
    }
}

catch(...):-this is catch all block which can catch any type of exception.see an example below:-

#include<iostream>
using namespace std;
int main()
{
    int age=17;
    try
    {
        if(age<18)
        {
            throw (age);
        }
        cout<<"You can vote "<<endl;
    }
    catch(const char *exc)
    {
        cout<<"cannot vote as age is "<<exc<<endl;
    }
    catch(...)
    {
        cout<<"Cannot vote as age is less than 18 "<<endl;
    }
}

-----------------------------------------x-------------------------------x-----------------------------