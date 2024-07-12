// LinkedList implements the Collection interface.
//  It uses a doubly linked list internally to store the elements. 
// It can store the duplicate elements. 
// It maintains the insertion order and is not synchronized.
//  In LinkedList, the manipulation is fast because no shifting is required.


import java.util.Iterator;
import java.util.LinkedList;

public class Linklist {
    public static void main(String args[]){  
        LinkedList<String> al=new LinkedList<String>();  
        al.add("Ravi");  
        al.add("Vijay");  
        al.add("Ravi");  
        al.add("Ajay");  

        Iterator<String> itr=al.iterator();  
        while(itr.hasNext()){  
        System.out.println(itr.next());  
        }  
        }     
}


// In the context of LinkedList, synchronized refers to thread safety.

// A synchronized data structure ensures that only one thread can access and modify it at a time. This prevents issues like race conditions that can occur when multiple threads try to modify the list simultaneously, leading to unexpected behavior or data corruption.

// By default, LinkedList is not synchronized. This means it can be accessed and modified by multiple threads concurrently, potentially causing problems in multithreaded environments.