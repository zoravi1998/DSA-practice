import java.util.*;
class knapsackPlates {
 
    // A utility function that returns
    // maximum of two integers
    static int max(int a, int b) 
    { 
          return (a > b) ? a : b; 
    }
 
    // Returns the maximum value that can
    // be put in a knapsack of capacity W
    static int weightCapacity(int n,List<Integer> wt,int maxCapacity)
    {
        int i, j;
        int K[][] = new int[n + 1][maxCapacity + 1];
        List<Integer> val=new ArrayList<Integer>(wt);
        // Build table K[][] in bottom up manner
        for (i = 0; i <= n; i++) 
        {
            for (j = 0; j <= maxCapacity; j++) 
            {
                if (i == 0 || j == 0)
                    K[i][j] = 0;
                else if (wt.get(i - 1) <= j)
                    K[i][j]= max( val.get(i - 1)+ K[i - 1][j - wt.get(i - 1)] 
                        , K[i - 1][j]);
                else
                    K[i][j] = K[i - 1][j];
            }
        }
 
        return K[n][maxCapacity];  
    }
    
    // Driver code
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        List<Integer> wt=new ArrayList<Integer>(n);
        for(int i=0;i<n;i++)
        {
            int a=sc.nextInt();
            wt.add(a);
        }
        int W=sc.nextInt();
        System.out.println(weightCapacity(n, wt, W));
        sc.close();
    }
}