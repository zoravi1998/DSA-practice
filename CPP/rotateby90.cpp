#include<bits/stdc++.h>

using namespace std; 

class Solution
{   
public:     
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n-i-1;j++)
            {
                int temp=matrix[i][j];
                
                matrix[i][j]=matrix[j][n-i-1];
                
                matrix[j][n-i-1]=matrix[n-i-1][n-j-1];
                
                matrix[n-i-1][n-j-1]=matrix[n-j-1][i];
                
                matrix[n-j-1][i]=temp;
                
            }
        }
    }

    void rotatebyK(vector<vector<int> >& matrix, int n,int k)
    {
        for(int l=0;l<k;l++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=i;j<n-i-1;j++)
                {
                    int temp=matrix[i][j];
                    
                    matrix[i][j]=matrix[j][n-i-1];
                    
                    matrix[j][n-i-1]=matrix[n-i-1][n-j-1];
                    
                    matrix[n-i-1][n-j-1]=matrix[n-j-1][i];
                    
                    matrix[n-j-1][i]=temp;
                    
                }
            }
        }
    } 
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,k;
        cin>>n;
        cout<<"No. of rotation"<<endl;
        cin>>k;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        ob.rotatebyK(matrix,n,k);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
} 