import java.util.*;

public class linkedHashmap {
public static void main(String[] args) {
    LinkedHashMap<Integer,String> data = new LinkedHashMap<>();
    HashMap<Integer,String> info = new HashMap<>();


    // LinkedHashMap Behaves as a Doubly Linkedlist and is ordered.
    data.put(null, null);
    data.putIfAbsent(null, null);
    data.putFirst(null, null);
    data.putLast(null, null);

    // HashMap Behaves as a simple collection and is not ordered.

    info.put(null, null);
    info.putIfAbsent(null, null);
    info.putIfAbsent(null, null);
}    
}
