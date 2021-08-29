import java.util.*;

class HarryPotter
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String s=sc.nextLine();
        int l=s.length();
        int m=sc.nextInt();
        int n=sc.nextInt();
        sc.close();
        String s1=s,t="";
        int c=0,x=1;
        do
        {
            if(x==1)
            {
                t= s.substring(0,l-m);
                s=s.substring(l-m)+t;
                x=2;
                c++;
            }
            else if(x==2){
                t= s.substring(0,l-n);
                s=s.substring(l-n)+t;
                x=1;
                c++;
            }
        }
        while(!s.equals(s1));
        System.out.println(c);
    }
}