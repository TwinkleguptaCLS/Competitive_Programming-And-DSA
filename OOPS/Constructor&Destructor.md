## What is a Constructor?
A constructor is a member function of a class which initializes objects of a class.,it is automatically called when object is created. *it is special type of member function*.
- constructor has the same name as class , don't have any return type and it is automatically called when an object is created

<h4>Types of Constructors: </h4> 
- Default constructor(no arguments), Parameterized constructor(that takes arguments) and Copy constructor(that initializes an object using another object of same class)

## What is  Destructor? 
- It is used to delete an object,it is called when a function end or program ends.
- have the same name as class preceded with (~).
- there can be only one destructor with no parameter and return type

<h4>When do we need Destructor?</h4> if we don't write destructor in program, compiler creates a default des.. for us. The default destructor works fine ,but if we have dynamically allocated memory or pointer in a class then we have to delete that memory,we should write a destructor before the class instance is destroyed. This is done to avoid memory leaks.

```cpp
class Employee{ 
    //data members
    string name;
    int age;
    float salary;
    public:
    {
        // Default constructor
        Employee(){
            name = "Michael";
            cout<<"Default constructor called";
        }
        //Parameterized 
        Employee(int eage,float esalary)
        {
            age= eage;
            salary = esalary;
        }
        //Copy Constructor
        Employee(Employee &obj) //reference of object is passed
        {
            age = obj.age;
            salary =obj.salary;
        }
        void setDAta(string ename,int eage,float esalary)
        {
            name = ename;
            age =eage;
            salary= esalary;
        }
        void getData()
        {
            cout<<name<<" "<<age<<" "<<salary; 
        }
    }
    //Destrcutor
    ~Employee(){
        cout<<"Destructor called";
    }
};
int main()
{
    Employee E1;
    E1.setData('Michael',35,34000.0);
    E1.getData();
    Employee E2(25,45400.9);
    Employee E3 = E2; //copy constructor called
}
```



<Footer align="right">Reference : Coding Snippets</Footer>
