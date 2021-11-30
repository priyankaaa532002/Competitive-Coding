#include <iostream>
using namespace std;

//1.DIAGONAL MATRIX (Other than diagonals all other are 0)
    //M[i,j] => 0 if i != j
    //in single dim -> A[3|7|4|9|6|] 
    //if(i=j) - > A[i-1]
void DiagonalMatrixSet(int A[],int i, int j, int x){
    if(i == j){
        A[i-1]=x;
    }
}

int DiagonalMatrixGet(int A[],int i, int j){
    if(i==j) return A[i-1];
    else return 0;
}

//LOWER TRIANGULAR MATRIX
//neeche non zero, upar zero
//M[i,j] = 0 -> i<j
//M[i,j] != 0 -> i>=j
//Non zero eles ==> 1+2+3+4+5 -> n(n+1) / 2
//Zero elements ==> n^2 - n(n+1)/2 = n(n-1)/2

//ROW MAJOR
//Index(A[4][5]) = 1+2+3  + 2 = 8
//Index(A[5][4]) = 1+2+3+4  + 3 = 13
//Index(A[i][j]) = [i(i-1)/2] + [j-1] 

class LowerTriangular
{
    private:
    int *A;
    int n;

    public:
    LowerTriangular(){
        n = 2;
        A = new int[2*(2+1)/2];
    }
    LowerTriangular(int size){
        n = size;
        A = new int[n*(n+1)/2];
    }

    void Set(int i,int j,int x){
        if (i>=j)
        {
            A[i*(i-1)/2 + j-1] = x;
        }
    }

    int Get(int i, int j){
        if (i>=j)
        {
            return A[i*(i-1)/2 + j-1];
        }  
    }

    void Display(){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i>=j){
                    cout<<A[i*(i-1)/2 + j-1]<<" ";
                }else{
                    cout<<"0 ";
                }
            }
            cout<<"\n";
        }
        
    }
};

void DiagonalMatrixDisplay(int A[], int n){
    //int i , j;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout<<A[i]<<" ";
            }else{
                cout<<0<<" ";
            }
        }
    }
    cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // //special matrices -->> square matrix
    // int A[5] = {3,7,4,9,6};
    // DiagonalMatrixSet(A,3,3,10);
    // cout<<DiagonalMatrixGet(A,2,2)<<"\n";
    // DiagonalMatrixDisplay(A,5);

    int d;
    cin>>d;
    LowerTriangular lm(d);
    int x;
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin>>x;
            lm.Set(i,j,x);
        }
    }
    lm.Display();
    
    return 0;
}