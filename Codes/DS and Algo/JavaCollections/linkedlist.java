import java.util.*;

public class linkedlist {
public static void main(String[] args) {
    LinkedList<String> names = new LinkedList<>();
    names.addFirst(null);
    names.addLast(null);
    names.removeFirst();
    names.removeLast();



    // LinkedList is a doubly linkedList by-default
    // but if we use its type as Queue it will become a queue (FIFO scene)
    Queue<String> queue = new LinkedList<>();

    queue.add(null);
    queue.remove();

    
}    
}
