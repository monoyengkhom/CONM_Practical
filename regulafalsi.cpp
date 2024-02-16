#include<iostream>
#define tol 0.0001
using namespace std;

class regulaFalsi{
    double a;
    double b;
    double maxItr;
    double func(double x){
        return x*x*x - x - 1;
    }
    public:
     void enterIntervals(){
        cout<<"Enter the interval: ";
        cin>>a>>b;
     }
     void maxIteration(){
        cout<<"Enter the max Iteration: ";
        cin>>maxItr;
     }
     void cal_regulafalsi(){
        if(func(a) * func(b) >= 0)
         cout<<"You have not assumed right a and b\n";
        double c;
        for(int i=0;i<maxItr;i++){
            c = (a * func(b) - b*func(a))/(func(b) - func(a));

            if(func(c)==0.0)
             break;
            else if(func(c)*func(b))
             b = c;
            else 
             a = c;
        }
        cout<<"The value of root is: "<<c;
     }
};

int main(){
    regulaFalsi rf1;
    rf1.enterIntervals();
    rf1.maxIteration();
    rf1.cal_regulafalsi();
    return 0;
}