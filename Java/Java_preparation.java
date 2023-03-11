1)//public and private access specifiers in java

import java.util.*;
class student
{
    Scanner sc=new Scanner(System.in);
    private int roll;
    private String name;
    private int adm_no;
    private String section;
    public void take_details()
    {
        System.out.println("enter the name of the student ");
        name=sc.next();
        System.out.println("enter the roll of the student ");
        roll=sc.nextInt();
        System.out.println("enter the admission number of the student ");
        adm_no=sc.nextInt();
        System.out.println("enter the section of the student ");
        section=sc.next();
    }
    public void show()
    {
        // take_deatils();
        System.out.println("The roll of the student  is "+roll);
        System.out.println("The name of the student is "+name);
        System.out.println("The admission number of the student is "+adm_no);
        System.out.println("The section of the student is "+section);
    }
}

public class Main {
    public static void main(String [] args )
    {
        student s=new student();
        s.take_details();
        s.show();
    
    }
}

2)CONSTRUCTORS:-

Default constructo:
//default constructor

import java.util.*;
class student
{
    Scanner sc=new Scanner(System.in);
    private int roll;
    private String name;
    private int adm_no;
    private String section;
    student()
    {
        System.out.print("default constructor called ");
    }
    public void show()
    {
        // take_deatils();
        System.out.println("The roll of the student  is "+roll);
        System.out.println("The name of the student is "+name);
        System.out.println("The admission number of the student is "+adm_no);
        System.out.println("The section of the student is "+section);
    }
}

public class Main {
    public static void main(String [] args )
    {
        student s=new student();
        // s.take_details();
        // s.show();
    
    }
}
----------------------x--------------------------------x--------------------------

Non parameterised constructor:

//non parameterised  constructor

import java.util.*;
class student
{
    Scanner sc=new Scanner(System.in);
    private int roll;
    private String name;
    private int adm_no;
    private String section;
    student()
    {
        System.out.println("non parameterised constructor called ");
        roll=10;
        name="ayushi";
        adm_no=123;
        section="B";
    }
    public void show()
    {
        System.out.println("The roll of the student  is "+roll);
        System.out.println("The name of the student is "+name);
        System.out.println("The admission number of the student is "+adm_no);
        System.out.println("The section of the student is "+section);
    }
}

public class Main {
    public static void main(String [] args )
    {
        student s=new student();
        s.show();
    
    }
}


--------------------------X--------------------------------X----------------------------------

Parameterised constructor

//parameterised  constructor

import java.util.*;
class student
{
    Scanner sc=new Scanner(System.in);
    private int roll;
    private String name;
    private int adm_no;
    private String section;
    student(String n,int r,int an,String s)
    {
        System.out.println("parameterised constructor called ");
        roll=r;
        name=n;
        adm_no=an;
        section=s;
    }
    public void show()
    {
        System.out.println("The roll of the student  is "+roll);
        System.out.println("The name of the student is "+name);
        System.out.println("The admission number of the student is "+adm_no);
        System.out.println("The section of the student is "+section);
    }
}

public class Main {
    public static void main(String [] args )
    {
        student s=new student("ayushi",5,12345,"A");
        s.show();
        student s1=new student("ankit",8,123,"B");
        s1.show();
    
    }
}

---------------------------x-----------------------------x----------------------------

Constructor overloading

//constructor overloading

import java.util.*;
class student
{
    Scanner sc=new Scanner(System.in);
    private int roll;
    private String name;
    private int adm_no;
    private String section;
    student(String n,int r,int an,String s)
    {
        System.out.println("parameterised constructor called for 4 arguments");
        roll=r;
        name=n;
        adm_no=an;
        section=s;
    }
    student(String n,int r,int an)
    {
        System.out.println("parameterised constructor called for 3 arguments ");
        roll=r;
        name=n;
        adm_no=an;
    }
    public void show()
    {
        System.out.println("The roll of the student  is "+roll);
        System.out.println("The name of the student is "+name);
        System.out.println("The admission number of the student is "+adm_no);
        System.out.println("The section of the student is "+section);
    }
}

public class Main {
    public static void main(String [] args )
    {
        student s1=new student("ankit",8,123);
        s1.show();
        student s=new student("ayushi",5,12345,"A");
        s.show();
    
    }
}
----------------------------x------------------------------x------------------------------

//copy constructor
import java.util.*;
class student
{
    Scanner sc=new Scanner(System.in);
    private int roll;
    public String name;
    private int adm_no;
    private String section;
    student(String n,int r,int an,String s)
    {
        System.out.println("parameterised constructor called for 4 arguments");
        roll=r;
        name=n;
        adm_no=an;
        section=s;
    }
    student(student sobj)
    {
        System.out.println("inside copy constructor ");
        name=sobj.name; //ayushi
        roll=sobj.roll;//5
        section=sobj.section;//A
        adm_no=sobj.adm_no;//12345
    }
    public void show()
    {
        System.out.println("The roll of the student  is "+roll);
        System.out.println("The name of the student is "+name);
        System.out.println("The admission number of the student is "+adm_no);
        System.out.println("The section of the student is "+section);
    }
}

public class Main {
    public static void main(String [] args )
    {
        student s=new student("ayushi",5,12345,"A");
        student s1=new student(s);
        s1.show();
        
    }
}
---------------------------------x----------------------------------x---------------------------

Arrays of objects:-

import java.util.*;
class student
{
    public String name;
    public int roll;
    student(String n,int r)
    {
        name=n;
        roll=r;
    }
    public void show()
    {
        System.out.println("your name is "+name);
        System.out.println("your roll is "+roll);
    }
}
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
		student [] obj = new student[5];
		for(int i=0;i<5;i++)
		{
		    String name;
		    int roll;
		    System.out.println("enter the name of student "+(i + 1));
		    name=sc.next();
		    System.out.println("enter the roll of student "+(i + 1));
		    roll=sc.nextInt();
		    obj[i]=new student(name,roll);
		    obj[i].show();
		}
	}
}


------------------------------x-------------------------x--------------------------------x-------
Inheritance:

Single level inheritance:

import java.util.*;
class student
{
    public String name;
    protected int roll;
}
class marks extends student
{
    int marks1,marks2,marks3;
    public void show()
    {
        int total=marks1+marks2+marks3;
        System.out.println("Your name is "+name);
        System.out.println("Your roll is "+roll);
        System.out.println("Your total marks is "+total);
    }
}
public class Main
{
	public static void main(String[] args) {
	    marks m1=new marks();
	    m1.name="ankit";
	    m1.roll=56;
	    m1.marks1=80;
	    m1.marks2=60;
	    m1.marks3=65;
	    m1.show();
	}
}



Multilevel inheritance:

import java.util.*;
class grand_father
{
    public String hair_color="white";
    public int height=6;
}
class father extends grand_father
{
    public String eyes_color="brown";
}
class son extends father
{
    public String color="wheat";
    public void show()
    {
        System.out.println("The hair color of the grand father is "+hair_color);
        System.out.println("The height of the grand father is "+height+" feet ");
        System.out.println("The eyes color of the father is "+eyes_color);
        System.out.println("The skin color of the son is "+color);
    }
}
public class Main
{
	public static void main(String[] args) {
	    son s=new son();
	    s.show();
	}
}


---------------------------x-------------------------------------x-------------------------
Hierarchical inheritance:

class grandfather
{
    public String name="pratik";
    public int age=82;
    public String profession="a good student";
}
class son1 extends grandfather
{
    public String s1_name="ankit";
    public int s1_age=22;
    public String s1_profession="athlete";
    public void showSon1()
    {
        System.out.println("The name of the grand father of "+s1_name+" is "+name);
        System.out.println("The age of the grand father of "+s1_name+" is "+age);
        System.out.println("The name of the son 1 is "+s1_name);
        System.out.println("The age of the son 1 is "+s1_age);
        System.out.println("The profession of the son 1 is "+s1_profession);
        System.out.println();
    }
}
class daughter1 extends grandfather
{
    public String d1_name="ayushi";
    public int d1_age=20;
    public String d1_profession="coder";
    public void showdaughter1()
    {
        System.out.println("The name of the grand father of "+d1_name+" is "+name);
        System.out.println("The age of the grand father of "+d1_name+" is "+age);
        System.out.println("The name of the daughter 1 is "+d1_name);
        System.out.println("The age of the daughter 1 is "+d1_age);
        System.out.println("The profession of the daughter 1 is "+d1_profession);
        System.out.println();
    }
}
class daughter2 extends grandfather
{
    public String d2_name="payal";
    public int d2_age=20;
    public String d2_profession="sleeping";
    public void showdaughter2()
    {
        System.out.println("The name of the grand father of "+d2_name+" is "+name);
        System.out.println("The age of the grand father of "+d2_name+" is "+age);
        System.out.println("The name of the daughter 2 is "+d2_name);
        System.out.println("The age of the daughter 2 is "+d2_age);
        System.out.println("The profession of the daughter 2 is "+d2_profession);
        System.out.println();
    }
}
public class Main
{
	public static void main(String[] args) {
		son1 s1=new son1();
		s1.showSon1();
		daughter1 d1=new daughter1();
		d1.showdaughter1();
		daughter2 d2=new daughter2();
		d2.showdaughter2();
	}
}
---------------------------------------x---------------------------------x------------------------

what is interface?
interface is a group of related method with empty body.interface contains only those member functions whose body is not defined and must be implemented in the class in which the interface is implemented.In interface,when a data member is declared,the value of that data member cannot be changed because it contain final keyword in it.interface can inherit another interface.we can also achieve multiple inheritance using interface.

An example of interface with code:

interface a
{
    void greet();
}
class b implements a
{
    public void greet()
    {
        System.out.println("hello ji");
    }
}
public class Main{
    public static void main(String [] args)
    {
        b b1=new b();
        b1.greet();
    }
}

//Multiple inheritance using interface
interface a
{
    public void greet();
}
interface b
{
    public void greet1();
}
class c implements a,b
{
    public void greet()
    {
        System.out.println("hello ");
    }
    public void greet1()
    {
        System.out.println("namastey ");
    }
    public void greet3()
    {
        System.out.println("Namashkaar ");
    }
}
public class Main{
    public static void main(String [] args)
    {
        c c1=new c();
        c1.greet();
        c1.greet1();
        c1.greet3();
    }
}

-----------------------------------x----------------x---------------
Inheritance in interface:-

interface a
{
    public void greet();
}
interface b extends a
{
    public void greet1();
}
class c implements b
{
    public void greet()
    {
        System.out.println("hello ");
    }
    public void greet1()
    {
        System.out.println("namastey ");
    }
    public void greet3()
    {
        System.out.println("Namashkaar ");
    }
}
public class Main{
    public static void main(String [] args)
    {
        c c1=new c();
        c1.greet();
        c1.greet1();
        c1.greet3();
    }
}
------------------------------x---------------------x-----------------

Package:-package is used to combine more than one classes in a single unit called package.and by importing those packages in main class, we can access all the function of all the classes that is there inside the package.

Class 1:-

package mypackage;
public class addition
{
	public void add(int a,int b)
	{
		System.out.println("addition is "+(a+b));
	}
}  

Class 2:-

package mypackage;
public class division
{
	public void div(int a,int b)
	{
		System.out.println("division is "+(a/b));
	}
}  

Class 3:-

package mypackage;
public class multiplication
{
	public void mul(int a,int b)
	{
		System.out.println("multiplication is "+(a*b));
	}
}  


Class main:-

import mypackage.addition; 
import mypackage.multiplication;
import mypackage.division;

public class demo{
	public static void main(String [] args)
	{
		addition a = new addition();
		a.add(10,20);
		multiplication m=new multiplication();
		m.mul(30,40);
		division d = new division();
		d.div(10,5);
	}
}  


-----------------------x------------------------x--------------------
Program of function:
public class Main
{
    static boolean check_prime(int a)
    {
        boolean chk=false;
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
                chk=true;
                break;
            }
        }
        if(a==1)
        {
            chk=true;
            return chk;
        }
        else
        {
            return chk;
        }
    }
	public static void main(String[] args) {
	    int f=7;
	   // Main obj=new Main();
	    boolean got=check_prime(f);
	    if(got)
	    {
	       System.out.println(f+" is not a prime number \n");
	    }
	    else
	    {
	        System.out.println(f+" is a prime number \n");
	    }
	}
}


-----------------------x----------------------------------------x----------------------

Polymorphism:polymorphism means same name but different tasks and bodies.

//function overloading is an example of compile time polymorphism

public class Main
{
    static void fun(int a,int b)
    {
        // return a+b;
        System.out.print(a+b);
    }
    static void fun(int a,int b,int c)
    {
        System.out.print(a+b+c);
    }
    static void fun(int a,int b,float c)
    {
        System.out.print(a+b+c+ " fun 1");
        
    }
    static void fun(int a,int b,double c)
    {
        System.out.print(a+b+c + " fun 2");
    }
    static void fun(int a,double b,int c)
    {
        System.out.print(a+b+c + " fun 3");
    }
	public static void main(String[] args) {
        fun(10,50.30,40);
	}
}

//function overriding is an example of run time polymorphism.
class a
{
    public void fun()
    {
        System.out.println("hello ");
    }
}
class b extends a
{
    public void fun()
    {
        System.out.println("hi");
    }
}
public class Main
{
    public static void main(String [] s)
    {
        a a1=new b();
        a1.fun();
        
    }
}


---------------------------x---------------------------------x----------------------------

Multithreading:-It is helpful for us in order achieve multitasking within a process.
There are two ways to achieve multithreading:
1)by inheriting Thread class:

class mythr1 extends Thread
{
    public void run()
    {
        int i=1;
        while(i<=400)
        {
            System.out.println("i am chatting "+i);
            i++;
        }
    }
}
class mythr2 extends Thread
{
    public void run()
    {
        int i=1;
        while(i<=400)
        {
            System.out.println("i am reading "+i);
            i++;
        }
    }
}
public class Main
{
	public static void main(String[] args) {
		mythr1 m1=new mythr1();
		mythr2 m2=new mythr2();
		m1.start();
		m2.start();
	}
}

2)using runnable interface:

class thr1 implements Runnable
{
    public void run()
    {
        int i=1;
        while(i<=400)
        {
            System.out.println("bhavya is student of BCA "+i);
            i++;
        }
    }
}
class thr2 implements Runnable
{
    public void run()
    {
        int i=1;
        while(i<=400)
        {
            System.out.println("ayushi is bestest "+i);
            i++;
        }
    }
}
public class Main
{
    public static void main(String [] args)
    {
        thr1 ttt1=new thr1();
        thr2 ttt2=new thr2();
        Thread t1=new Thread(ttt1);
        Thread t2=new Thread(ttt2);
        t1.start();
        t2.start();
    }
}

Thread life cycle:-

1)new:-it means the object of the thread has been created which not started by calling start method.

2)Runnable:-it means, start function has been called by the object of thread but not yet selected by 
the thread scheduler to run.

3)Running:-it means, thread scheduler has selected the thread to run.

4)Non-runnable:-it means, thread is there/alive but not eligible to run.

5)Terminated:-run() method has been ended.



Constructors in thread:-
Constructors with one argument:-
class mythr extends Thread
{
    public void run()
    {
        System.out.println("The name of the current thread is "+Thread.currentThread().getName());
    }
    mythr(String name)
    {
        super(name);
    }
}
public class Main
{
    public static void main(String[] args) {
        mythr m1=new mythr("bhavya");
        m1.start();
    }
}


Constructors of thread with two arguments:-

class mythr extends Thread
{
    public void run() {
        System.out.println("The name of the current thread is " + Thread.currentThread().getName());
    }
}
public class Main
{
    public static void main(String[] args) {
       mythr m=new mythr();
       mythr m1=new mythr();
       Thread t1=new Thread(m,"bhavya");
       Thread t2=new Thread(m1,"ayushi");
       t1.start();
       t2.start();
    }
}

THREAD PRIORITIES:-
class mythread extends Thread
{
    public void run() {
        int i=1;
        while(i<=400) {
            System.out.println("The name of the thread is : " + Thread.currentThread().getName() + " and its priority is " + Thread.currentThread().getPriority());
            i++;
        }
    }
    mythread(String name)
    {
        super(name);
    }
}
public class thread {
    public static void main(String[] args) {
        mythread m1=new mythread("akash");
        mythread m2=new mythread("pratik");
        mythread m3=new mythread("ayushi");
        m1.setPriority(Thread.MAX_PRIORITY);
        m2.setPriority(Thread.NORM_PRIORITY);
        m3.setPriority(Thread.MIN_PRIORITY);
        m1.start();
        m2.start();
        m3.start();
    }
}

Arrays:-It is used to store the elements contiguously of same data type.
1D array:

import java.util.*;
public class Main
{
    int maxi_elem(int [] array)
    {
        int m=array[0];
        for(int i=0;i<array.length;i++)
        {
            if(array[i]>m)
            {
                m=array[i];
            }
        }
        return m;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("what is the size of the array you want ?");
        int s=sc.nextInt();
        int [] arr=new int[s];
        System.out.println("enter the elements in the array ");
        for(int i=0;i<s;i++)
        {
            System.out.println("enter element "+(i+1));
            arr[i]=sc.nextInt();
        }
        System.out.println("Elements in the array is shown below ");
        for(int i=0;i<s;i++)
        {
            System.out.println("Element "+(i + 1)+" is "+arr[i]);
        }
        System.out.print("The maximum element in the array is ");
        Main ma=new Main();
        int res=ma.maxi_elem(arr);
        System.out.println(res);
    }
}


2D arrays in java:-

import java.util.*;
public class two_d_arrays {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the size of the row ");
        int row=sc.nextInt();
        System.out.println("enter the size of the column ");
        int col=sc.nextInt();
        int two_d_array[][]=new int[row][col];
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                System.out.println("enter the value at row "+i+" and column "+j);
                two_d_array[i][j]=sc.nextInt();
            }
        }
        System.out.println("The values in the 2d array is shown below ");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                System.out.print(two_d_array[i][j]+" ");
            }
            System.out.println();
        }
    }
}

------------------------------x----------------------------------x-------------------------
Exception handling:-
It is used to handle the abnormal condition that occurs during the runtime.

Try:-if we want to get the exception in the catch block then we have to put the code inside try block so that if there would be any abnormal condition, then that exception can be passed to the exception handler.
 
Catch:-catch handler is used to access the exception that has been thrown.

Simple example of division by zero error:-

public class ehl {
    int division(int a,int b)
    {
        return a/b;
    }
    public static void main(String[] args) {
        ehl e1=new ehl();
        try {
            int access = e1.division(6, 2);
            System.out.println("result : "+access);
        }
        catch(Exception e)
        {
            System.out.println("the type of run time error is "+e);
        }
        System.out.println("program runned successfully");
    }
}

Handling multiple exception separately:-

import java.util.*;
    public class ehl {
        int division(int a,int b)
        {
            return a/b;
        }
        public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            ehl e1=new ehl();
            int []arr=new int[3];
            arr[0]=1;
            arr[1]=2;
            arr[2]=3;
            try
            {
                System.out.println("enter the number of index you want to access in the array ");
                int ind=sc.nextInt();
                System.out.println("The value at index "+ind+" is "+arr[ind]+"\n");
                int access=e1.division(6,2);
                System.out.println("Result : "+access);
            }
            catch(ArithmeticException e)
            {
                System.out.println("The type of exception that occured is : "+e);
            }
            catch(ArrayIndexOutOfBoundsException e)
            {
                System.out.println("The type of error occured is : "+e);
            }
            catch(Exception e)
            {
                System.out.println("The type of error occured is : "+e);
            }
            System.out.println("program runned sucessfully \n");
        }
}

NESTED TRY CATCH:-

It is a type of try catch in which there is another try catch block inside one try catch block.

Code:

import com.sun.source.tree.TryTree;

import java.util.*;
    public class ehl {
        int division(int a,int b)
        {
            return a/b;
        }
        public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            ehl e1=new ehl();
            try
            {
                try
                {
                    int c=e1.division(10,0);
                    System.out.println("The answer is "+c);
                }
                catch(IndexOutOfBoundsException e)
                {
                    System.out.println("The type of exception is "+e);
                }
            }
            catch(Exception e)
            {
                System.out.println("The type of exception that occured is "+e);
            }
        }
}


Throw and throws:-
Throw:-Throw keyword is used to throw the user defined or customized exception object to the JVM explicitly.

Code:-

import java.util.*;
class ude_invalid_age extends Exception
{
    ude_invalid_age(String excep)
    {
        System.out.println(excep);
    }
}
public class throw_throws {

    public static void main(String[] args) {
         try
         {
             int age;
             Scanner sc=new Scanner(System.in);
             System.out.println("Enter the age of the user ");
             age=sc.nextInt();
             drv_lnc(age);
         }
         catch(Exception e)
         {
             System.out.println("The type of exception is "+e);
         }
    }
    public static void drv_lnc(int age) throws ude_invalid_age
    {
        if(age<18)
        {
            throw new ude_invalid_age("The user cannot drive as their age is less than 18");
        }
        else
        {
            System.out.println("User can drive");
        }
    }
}


Throws:-Throws keyword is used when we doesn't want to handle the exception and try to send the exception to the JVM or caller.

public class throw_throws {

    public static void main(String[] args)throws InterruptedException {
        for(int i=1;i<=10;i++) {
            System.out.println(i);
            Thread.sleep(1000);
        }
    }
}

Final:-final keyword makes a variable constant.
Code:
public class final_finally_finalize {
    public static void main(String[] args) {
        final int a=10;
        System.out.println(a);
    }
}

Finally:-Finally block is always executed whether an exception is handled or not.

import java.util.*; 
public class final_finally_finalize {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        try
        {
            int a=10,b=0;
            int division=a/b;
            System.out.println("Division is "+division);
        }
        catch(ArithmeticException e)
        {
            System.out.println("The type of exception is "+e);
        }
        finally {
            System.out.println("This block will always be executed");
        }
        System.out.println("Program completed successfully ");
    }
}

-------------------------------x--------------------------------x----------------------

//what is abstract class?
//ans:-It is a class whose object cannot be created and we declare a class as abstract with the help of abstaract keyword.
//why we need abstract class?
//ans:-1)when we dont need an object of a particular class then we make it abstract.
//2)when we want to use same member function in various classes with different defination then we put those methods inside the abstract class and we define those abstract methods according to our need in the derived class.


abstract class animal
{
    abstract public void voice();
    abstract public void legs();
    abstract public void eat();
}
class dog extends animal
{
    public void voice()
    {
        System.out.println("Dog barks ");
    }
    public void legs()
    {
        System.out.println("4 legs");
    }
    public void eat()
    {
        System.out.println("Dog eats pedigree");
    }
}
class lion extends animal
{
    public void voice()
    {
        System.out.println("lion roars ");
    }
    public void legs()
    {
        System.out.println("4 legs");
    }
    public void eat()
    {
        System.out.println("lion is carnivorus");
    }
}
public class abs_cls {
    public static void main(String[] args) {
        dog d1=new dog();
        d1.voice();
        d1.legs();
        d1.eat();
        lion l1=new lion();
        l1.voice();
        l1.eat();
        l1.legs();
    }
}
---------------------------------x-------------------------x---------------------------------
//static keyword:-it helps us to use the data member/member functions without creating the object
//1)when data members and member functions is in the same class:-
//if we make the data members/member function static then we dont need to create any object of that particular class to access those static member functions.
Code:

public class static_class {
    static public int a=10;
    static public void fun()
    {
        System.out.println("hello there");
    }
    public static void main(String[] args) {
        System.out.println("The value of a is "+a);
        fun();
    }
}
//
//2)when data member and member functions is in another class:-
//a)we can access the static data members/member function with the help of class name.
Code:-

class A
{
    static public int a=10;
    static public int add(int a,int b)
    {
        return a+b;
    }
}
public class static_class {
    public static void main(String[] args) {
        System.out.println("The value of a is "+A.a);
        int res=A.add(10,20);
        System.out.println("The addition is "+res);
    }
}
//b)if the data member and functions is not static then we have to create an object of that class and call the data member/member function with the help of the object of the class in which data member and member functions are declared.
Code:-

class A
{
    public int a=10;
    public int add(int a,int b)
    {
        return a+b;
    }
}
public class static_class {
    public static void main(String[] args) {
        A a1=new A();
      System.out.println("The value of a is "+a1.a);
      int res=a1.add(10,20);
      System.out.println("The addition is "+res);
    }
}
------------------------x----------------------------x---------------------
//super keyword:- it basically helps us to refer parent class and its data members and member functions.

SUPER KEYWORD WITH CONSTRUCTORS.

A)
class parent
{
    parent()
    {
        System.out.println("This is the default constructor of parent class ");
    }
    parent(int a)
    {
        System.out.println("this is the parameterized constructor of parent class ");
    }
}
class child extends parent
{
    child()
    {
        System.out.println("This is the default constructor of child class ");
    }
    child(int i)
    {
        super(i);//parameterised constructor of parent class will also be called.
        System.out.println("this is the parameterized constructor of child class ");
    }
}
public class super_keyword{
    public static void main(String[] args) {
        child c=new child(5);
    }

}

B)

class parent
{
    parent()
    {
        System.out.println("This is the default constructor of parent class ");
    }
    parent(int a)
    {
        System.out.println("this is the parameterized constructor of parent class ");
    }
}
class child extends parent
{
    child()
    {
        System.out.println("This is the default constructor of child class ");
    }
    child(int i)
    {
        //parameterised costructor of parent class will not be called but parameterised constructor of child class will be called.
        System.out.println("this is the parameterized constructor of child class ");
    }
}
public class super_keyword{
    public static void main(String[] args) {
        child c=new child(5);
    }

}




SUPER KEYWORD WITH DATA MEMBERS:-

class aeroplane
{
    public int topspeed=1000;
}
class private_jet extends aeroplane
{
    public int topspeed=1200;
    void show()
    {
        System.out.println("top speed of private jet "+topspeed+" kmph");
        System.out.println("top speed of aeroplane "+super.topspeed+" kmph");
    }
}
class super_keyword
{
    public static void main(String[] args) {
        private_jet p=new private_jet();
        p.show();
    }
}




SUPER KEYWORD WITH MEMBER FUNCTIONS:-

class aeroplane
{
   public void fun()
   {
       System.out.println("we are inside class aeroplane");
   }
}
class private_jet extends aeroplane
{
    public void fun()
    {
        System.out.println("we are inside class private jet");
    }

    public void show()
    {
        super.fun(); //this will call the fun of parent class i.e aeroplane class
        fun(); //this will call the fun of its own class i.e private_jet class
    }
}
class super_keyword
{
    public static void main(String[] args) {
        private_jet p=new private_jet();
        p.show();
    }
}

-----------------------------x-----------------------------x---------------------

THIS KEYWORD:-It is used to remove the ambiguity between parameter and data members of a class.

Use 1)

class A
{
    public int roll;
    public String name;
    A(int roll,String name)
    {
        this.name=name;
        this.roll=roll;
    }
    public void show()
    {
        System.out.println("Your name is "+name);
        System.out.println("Your roll is "+roll);
    }
}
public class this_keyword {
    public static void main(String[] args) {
        A a1=new A(20,"ayushi");
        a1.show();
    }

}

Use 2):-//calling parameterized constructor from default constructor by taking the help of this keyword.i.e,parameterized constructor will be called first then default constructor will be called.

import java.util.*;
class hello
{
    public int x;
    hello()
    {
        this(59);
        System.out.println("this is a default constructor");
    }
    hello(int a)
    {
        x=a;
        System.out.println("the value of x is "+x);
    }
}
public class this_keyword {
    public static void main(String[] args) {
        hello h=new hello();
    }
}

Use 3)

//calling default constructor from parameterized constructor by taking the help of this keyword.i.e,default constructor will be called first then parameterized constructor will be called.
import java.util.*;
class hello
{
    public int x;
    hello()
    {
        System.out.println("this is a default constructor");
    }
    hello(int a)
    {
        this();
        x=a;
        System.out.println("the value of x is "+x);
    }
}
public class this_keyword {
    public static void main(String[] args) {
        hello h=new hello(10);
    }
}
-----------------------------------x----------------------------x------------------------

Applet:-applet is a special java program that runs on web browser.we can connect our java program with html with the help of applet.

Applet lifecycle:-

1)init():-it will initialise an applet.
2)start():-after initialisation, we use start method to start the applet.
3)paint():-It is a method that is related with graphics class of java.this paint() method contains graphics class a parameter.
4)stop():-it will help the user to stop applet program.
5)destroy():-it will destroy the applet that has been initialised initially.this destroy will automatically when we close the windows of appletviewer.
