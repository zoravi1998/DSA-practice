import java.util.*;
public class MaximumPairs {
    
    static int getSetBit(int n){
        return (int)( Math.log10(n&-n)/Math.log10(2) );
    }
    static long MaxPairs(int N,int[] nums){
        long result=0;
        ArrayList<Integer> arr = new ArrayList<Integer>();
        //getting least significant set bit for each num
        for(int i=0;i<nums.length;i++){
            int setbit=getSetBit(nums[i]);
            arr.add(setbit);
        }
        //Sorting the array
        Collections.sort(arr);
        for(Integer x:arr){
            System.out.print(x+",");
        }
        System.out.println();
        //Bitwise or in pair of two.
        for(int i=0;i<arr.size();i+=2){
            result += Math.pow(2,Math.min(arr.get(i),arr.get(i+1)));
        }
        return result;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = 4;
        int arr[]={1,2,1,4};
        System.out.println(MaxPairs(N,arr));
    }
}
