import java.util.*;
public class treemap {
    public static void main(String[] args) {
        // TreeMap<Integer,String> tree = new TreeMap<>(Comparator.reverseOrder());

        TreeMap<Integer,String> tree = new TreeMap<>();
        // it also behaves as doubly linkedinlist but it is ordered
        // It used a self balancing tree DS behind such as red black tree

        tree.putFirst(null, null);
        tree.putLast(null, null);
        tree.putIfAbsent(null, null);

    }
}
