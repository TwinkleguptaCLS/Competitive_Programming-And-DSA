***Object Oriented Programming***
- OOPS is a way to modalarize your program into classes that contains properties and behaviour(data members and member functions),and then object is created to represent a class, so object is just a variable of a class that encapsulates all the properties and behaviour that are associated to a class
- It allows developers to write modular program and assemble them to make a software
- Data is hidden and cannot be directly accessed unlike in procedural programming
- Examples - C++,JAVA,Python,PHP,C# etc..

<code>FOR EX.
class Employee{ 
    &nbsp;string name;
    &nbsp;int age;
    &nbsp;float salary;
    &nbsp;public:
    &nbsp;{
        &nbsp;&nbsp;void setDAta(string ename,int eage,float esalary)
        &nbsp;{
            &nbsp;&nbsp;&nbsp;name = ename;
            &nbsp;&nbsp;&nbsp;age =eage;
            &nbsp;&nbsp;&nbsp;salary= esalary;
       &nbsp;}
        &nbsp;void getData()
        &nbsp;{
            &nbsp;&nbsp;&nbsp;cout<<name<<"&nbsp;"<<age<<"&nbsp;"<<salary; 
        &nbsp;}
    }
};
int main()
{
    &nbsp;Employee E1;
    &nbsp;E1.setData('Michael',35,34000.0);
    &nbsp;E1.getData();
}
 </code>