
import java.util.*;
public class PriorityQueue1 {
    public static void main(String args[]){  
        // PriorityQueue<String> queue=new PriorityQueue<String>(Comparator.reverseOrder());
        // MaxHeap
        PriorityQueue<String> queue=new PriorityQueue<String>();
        // min Heap  
  
        queue.add("Amit Sharma");  
        queue.add("Vijay Raj");  
        queue.add("JaiShankar");  
        queue.add("Raj");  
        queue.offer("Shahzaneer");

        System.out.println("head:"+queue.element());  
        System.out.println("head:"+queue.peek());  
        System.out.println("iterating the queue elements:");  
        Iterator<String> itr=queue.iterator();  
        while(itr.hasNext()){  
        System.out.println(itr.next());  
        }  
        queue.remove();  
        queue.poll();  
        System.out.println("after removing two elements:");  
        Iterator<String> itr2=queue.iterator();  
        while(itr2.hasNext()){  
        System.out.println(itr2.next());  
        }     
}

}