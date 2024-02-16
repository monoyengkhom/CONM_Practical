#include<iostream>
#include<cmath>
#define tol 0.0001
using namespace std;

class newtonRaphson{
    double x0;
    double func(double x){
        return 3 * x - cos(x) - 1;
    }
    double derivFunc(double x){
        return 3 + sin(x);
    }
    public: 
     void initialGuess(){
        cout<<"Enter the initial guess: ";
        cin>>x0;
     }
     void cal_netwonRaphson(){
        double h = func(x0)/derivFunc(x0);
        while (abs(h)>=tol)
        {
            h = func(x0)/derivFunc(x0);
            x0 = x0 - h;
        }
        cout<<"The value of the root is: "<<x0;
     }
};
int main(){
    newtonRaphson nR1;
    nR1.initialGuess();
    nR1.cal_netwonRaphson();
    cout<<endl;
}