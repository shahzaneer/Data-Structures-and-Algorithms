import java.util.ArrayList;
import java.util.Iterator;

public class Arraylist {
public static void main(String[] args) {

    ArrayList<String> names = new ArrayList<>();
    names.add("Shahzaneer Ahmed");
    names.add("Aleeza Adnan");
    System.out.println(names.toString());

    ArrayList<String> list=new ArrayList<String>();//Creating arraylist  
list.add("Ravi");//Adding object in arraylist  
list.add("Vijay");  
list.add("Ravi");  
list.add("Ajay");  
//Traversing list through Iterator  
Iterator<String> itr = list.iterator();  
while(itr.hasNext()){  
System.out.println(itr.next());  

}
}  
} 



