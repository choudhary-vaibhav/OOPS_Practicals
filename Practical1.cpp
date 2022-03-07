#include<iostream>

using namespace std;

class Matrix
{
    int A[3][3], B[3][3], M[3][3];

    int i,j,k;

    public:

     void input()
    {
        cout<<"Input First 3*3 Matrix:";

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                cin>>A[i][j];
        }

        cout<<"Input Second 3*3 Matrix:";

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                cin>>B[i][j];
        }

    }

    void multiplication()
    {
        for(i=0; i<3; i++)
        {
            for(j=0;j<3;j++)
            {
                M[i][j]=0;
                
                for(k=0;k<3;k++)
                {
                    M[i][j]+=A[i][k]*B[k][j];
                }

                //cout<<M[i][j]<<" ";
                
            }
        }
       
    }


    void display()
    {
        cout<<"\nMultiplied Matrix\n";
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                cout<<M[i][j];
                cout<<"  ";         
            }

            cout<<endl;
        }
    }
};


int main()
{
    Matrix M;

    M.input();

    M.multiplication();

    M.display();

    return 0;
}