import java.util.*;

public class queue {
    public static void main(String[] args) {
        // Create a queue using LinkedList
        Queue<String> myQueue = new LinkedList<>();

        // Add elements to the queue (back of the line) rear se daalna
        myQueue.offer("Apple");
        myQueue.offer("Banana");
        myQueue.offer("Orange");


        // Print the queue contents (order is preserved)
        System.out.println("Queue elements: " + myQueue);

        // Remove and print the element at the front (FIFO)
        String firstElement = myQueue.poll();
        System.out.println("Removed element: " + firstElement);

        // Print the remaining elements
        System.out.println("Queue elements after removal: " + myQueue);

        // Check if the queue is empty
        if (myQueue.isEmpty()) {
            System.out.println("Queue is empty.");
        } else {
            System.out.println("Queue is not empty.");
        }
    } 
}
