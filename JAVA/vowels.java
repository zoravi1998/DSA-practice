import java.util.*;
class vowels
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        Character vowels[] = {'a', 'e', 'i', 'o', 'u','A','E','I','O','U'};
        List<Character> al= Arrays.asList(vowels);
        System.out.println("Enter string");
        String s=sc.nextLine();
        sc.close();
        StringBuffer sb=new StringBuffer(s); 
        int i;
        for(i=0;i<s.length();i++)
        {
            int j=i;
            while(j<sb.length() && al.contains(sb.charAt(j)))
            {
                j++;
            }
            if(j-i==1)
            sb.replace(i,i+1,"");
            
            i=j;
        }
        System.out.println(sb.toString());
    }
}