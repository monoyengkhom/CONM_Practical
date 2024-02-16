#include<iostream>
#include<cmath>
#define tol 0.0001
using namespace std;

class bisection{
    private:
     double a;
     double b;
     double func(double x){
        return x * x * x - x -1;
     }
     void setA(double initial_1){
        a = initial_1;
     }
     void setB(double initial_2){
        b = initial_2;
     }
    public:
     bisection(double initial_1, double initial_2){
        setA(initial_1);
        setB(initial_2);
     }
     void cal_bisection(){
        if(func(a) * func(b)>=0){
            cout<<"Invalid initial values. The function values must have been opposite signs at the end points."<<endl;
        }
        double c;
        while ((b-a)>=tol)
        {
            c = (a+b)/2;
            if(func(c)==0.0)
             break;
            else if(func(c)*func(a)<0)
             b = c;
            else 
             a = c;
        }
        cout<<"The value of root is: "<<c;
     }
     
};

int main(void){
    double ini1, ini2;
    cout<<"Enter initial values of a: ";
    cin>>ini1;
    cout<<"Enter initial value of b: ";
    cin>>ini2;
    bisection b1(ini1,ini2);
    b1.cal_bisection();
}