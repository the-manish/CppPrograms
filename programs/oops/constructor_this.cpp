#include<iostream>
using namespace std;
class Student {
    public :
    int rollNumber;
    
    private:
    int age;

    public:
    /*once we create constructor and then  we will make 
    object it will search matching constructor which we were created earlier! if it not get then it will show error*/
    
    //default constructor
    Student(){
        cout<<"constructor called"<<endl;
     } 

    // Parameterized Constructor
Student(int r){
    cout<<"Constructor 2 called"<<endl;
    rollNumber=r;
}    
Student(int a,int r){
    cout<<"constructor 3 called"<<endl;
    age=a;
    rollNumber=r;
}
void display(){
    cout<<age<<" "<<rollNumber<<endl;
}
};
 int main(){
    Student s1;

    s1.display();
    Student s2;

    Student *s3=new Student;
    s3->display();

    cout<<"Parametrized Constructo Demo"<<endl;
    Student s4(10);
    s4.display();

    Student *s5= new Student(101);
    s5->display();

    Student s6(20, 1002);
    s6.display();


    Student s1(10,1001);
    cout<<" s1:";
    s1.display();

    Student s2(s1);
    cout<<" s2:";
    s2.display();

    Student *s3=new Student(20,2001);
    cout<<" s3:";
    s3->display();

    Student s4(*s3);

    Student *s5=new Student(*s3);
    Student *s6= new Student(s1);
    

    return 0;
}
