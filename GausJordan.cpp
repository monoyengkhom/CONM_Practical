#include <iostream>
using namespace std;

class gausJordan
{
    int i, j, k, n;
    float a[10][10], b, x[10];
    void enterMatrixSize()
    {
        cout << "Enter the size of Matrix: ";
        cin >> n;
    }
    void enterElements()
    {
        cout << "\nEnter the elements of augmented matrix(row wise): \n";
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= (n + 1); j++)
            {
                cout << "A[" << i << "," << j << "] = ";
                cin >> a[i][j];
            }
        }
    }
    void printMatrix(){
        cout<<"\nThe solution is : \n";
        for(i=1;i<=n;i++){
            x[i] = a[i][n+1]/a[i][i];
            cout<<"x"<<i<<" = "<<x[i]<<" ";
        }
    }

public:
    void cal_gausJordan()
    {
        enterMatrixSize();
        enterElements();
        for (j=1;j<=n;j++){
            for(i=1;i<=n;i++){
                if(i!=j){
                    b = a[i][j]/a[j][j];
                    for(k=1;k<=n+1;k++){
                        a[i][k]=a[i][k]-b*a[j][k];
                    }
                }
            }
        }
        printMatrix();
    }
};

int main(){
    gausJordan gJ1;
    gJ1.cal_gausJordan();
    cout<<endl;
    return 0;
}