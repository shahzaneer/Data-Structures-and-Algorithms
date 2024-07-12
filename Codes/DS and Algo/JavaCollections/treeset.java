import java.util.*;
// Java TreeSet class implements the Set interface that uses a tree for storage.
//  Like HashSet, TreeSet also contains unique elements. 
// However, the access and retrieval time of TreeSet is quite fast. 
// The elements in TreeSet stored in ascending order.
public class treeset {
    public static void main(String args[]){  
        //Creating and adding elements  
        TreeSet<String> set=new TreeSet<String>();  
        set.add("Ravi");  
        set.add("Vijay");  
        set.add("Ravi");  
        set.add("Ajay");  
        //traversing elements  
        Iterator<String> itr=set.iterator();  
        while(itr.hasNext()){  
        System.out.println(itr.next());  
        }  
        }  
}



// HashSet: Uses a hash table for storage. This allows for fast average-case performance for adding, removing, and searching elements (amortized constant time complexity, O(1)).
// TreeSet: Uses a self-balancing binary search tree (typically a Red-Black tree) for storage. This structure ensures sorted elements but has a slightly higher time complexity for operations compared to a hash table (logarithmic time complexity, O(log n)).