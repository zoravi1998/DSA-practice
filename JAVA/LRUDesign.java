import java.io.*;
import java.util.*;

public class LRUDesign {

    public static void main(String[] args) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(read.readLine());

        while (t-- > 0) {

            int capacity = Integer.parseInt(read.readLine());
            int queries = Integer.parseInt(read.readLine());
            LRUCache cache = new LRUCache(capacity);
            String str[] = read.readLine().trim().split(" ");
            int len = str.length;
            int itr = 0;

            for (int i = 0; (i < queries) && (itr < len); i++) {
                String queryType = str[itr++];
                if (queryType.equals("SET")) {
                    int key = Integer.parseInt(str[itr++]);
                    int value = Integer.parseInt(str[itr++]);
                    cache.set(key, value);
                }
                if (queryType.equals("GET")) {
                    int key = Integer.parseInt(str[itr++]);
                    System.out.print(cache.get(key) + " ");
                }
            }
            System.out.println();
        }
    }
}

class LRUCache
{

    Node head = new Node();
    Node tail = new Node();
    Map<Integer, Node> m = new HashMap<Integer, Node>(); 
    int n;

    public LRUCache(int cap)
    {
        this.n=cap;
        head.next=tail;
        tail.prev=head;
    }
    
    public int get(int key)
    {
       int res=-1;
       Node node=m.get(key);
       if(node!=null)
       {
           res=m.get(key).value;
           remove(node);
           add(node); 
       }
       return res;
    }
    
     public void set(int key, int value)
    {
        Node node=m.get(key);
        if(node!=null)
        {
            remove(node);
            node.value=value;
            add(node);
        }
        else
        {
            if(m.size()==n)
            {
                m.remove(tail.prev.key);
                remove(tail.prev);
            }
            Node new_node=new Node(value,key);
            m.put(key,new_node);
            add(new_node);
        }
    }
    public  void add(Node node)
    {
        head.next.prev = node;
        node.next = head.next;
        head.next = node;
        node.prev = head;
    }
    public  void remove(Node node)
    {
        node.prev.next = node.next;
        node.next.prev = node.prev;
    }

}

class Node
{
    Node next;
    Node prev;
    int value,key;
    Node()
    {
        next=null;
        prev=null;
    }
    Node(int x,int k)
    {
        value=x;
        key=k;
        next=null;
        prev=null;
    }
}