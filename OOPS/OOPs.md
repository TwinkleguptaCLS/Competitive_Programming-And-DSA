***Object Oriented Programming***
- OOPS is a way to modalarize your program into classes that contains properties and behaviour(data members and member functions),and then object is created to represent a class, so object is just a variable of a class that encapsulates all the properties and behaviour that are associated to a class
- It allows developers to write modular program and assemble them to make a software
- Data is hidden and cannot be directly accessed unlike in procedural programming
- Examples - C++,JAVA,Python,PHP,C# etc..

FOR EX.
```cpp
class Employee{ 
    string name;
    int age;
    float salary;
    public:
    {
        void setDAta(string ename,int eage,float esalary)
        {
            name = ename;
            age =eage;
            salary= esalary;
        }
        void getData()
        {
            cout<<name<<"&nbsp;"<<age<<"&nbsp;"<<salary; 
        }
    }
};
int main()
{
    Employee E1;
    E1.setData('Michael',35,34000.0);
    E1.getData();
}
```