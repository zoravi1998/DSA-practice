#include<bits/stdc++.h>

using namespace std;
class nqueen
{
    public:
    vector<vector<int>> board;
    int n;
    nqueen(){}
    nqueen(int n)
    {
        this->n=n;
        board.resize(n);
        for(int i=0;i<n;i++)
        {
            board[i]=vector<int>(n);
        }
    }
    void print()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void solve()
    {
        if(searchqueen(0)==false){
            cout<<"Solution does not exist";
            return;
        } 
    }
    bool issafe(int row,int col)
    {
        for(int i=0;i<col;i++)
        {
            if(board[row][i]==1)
                return false;
        }
        for(int i=row,j=col;i>=0&&j>=0;i--,j--)
        {
            if(board[i][j]==1)
                return false;
        }
        for(int i=row,j=col;i<n&&j>=0;i++,j--)
        {
            if(board[i][j]==1)
                return false;
        }
        return true;
    }
    int c=1;
    bool searchqueen(int col)
    {
        if(col==n)
        {
            
            cout<<c<<"-"<<endl;
            print();
            c++;
            return true;
        }
        bool res=false;    
        for(int i=0;i<n;i++)
        {
            if(issafe(i,col))
            {
                board[i][col]=1;
                res=searchqueen(col+1)||res;
                board[i][col]=0;
            }
        }
        return res;
    }
};

int main()
{
    int n;
    cout<<"Enter No of Queens N\n";
    cin>>n;
    nqueen obj(n);
    obj.solve();

    return 0;
}