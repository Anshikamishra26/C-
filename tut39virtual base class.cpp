/*VIRTUAL BASE CLASS
Suppose there is class Student from which two classes are made Exam and Sports and from these two classes a class Result is made
so at time time of compilation variable/ft of class Student will get inherited to both the class which creates an ambiguity
during compilation so in that case we use the term VIRTUAL BASE CLASS which means the variable/ft will get inherited only once
in the class Result.

Student--->Exam
Student--->Sports
Exam--->Result
Sports--->Result*/


#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_no;
    public:
    void set_num(int a){
        roll_no = a;
    }
    void print_num(void){
        cout<<"Your roll number is: "<<roll_no<<endl;
    }
};
class Exam : virtual public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(void){
        cout<<"Your Result is here :"<<endl
            <<"Maths :"<<maths<<endl
            <<"Physics: "<<physics<<endl;
    }
};
class Sports : virtual public Student{
    protected:
    float score;
    public:
    void set_score(int sc){
        score = sc;
    }
    void print_score(void){
        cout<<"Your score is :"<<score<<endl;
    }
};
class Result : public Exam, public Sports{
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        print_num();
        print_marks();
        print_score();
        cout<<"Your total score is: "<<total<<endl;
    }  
    
};
int main(){
    Result harry;
    harry.set_num(4200);
    harry.set_marks(75.5, 99.0);
    harry.set_score(9);
    harry.display();
    return 0;
}
