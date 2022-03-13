
public class Numbers {
    public static void main(String[] args) {

        // System.out.println(numbers(5));
        numbersreverse(5);
        numbers(-3);

        
    }

    static int numbersreverse(int n){
        // base condition
        if(n==1){
            System.out.println(n);
            return n;
        }
        // normal function
        System.out.println(n);
        return numbersreverse(n-1);
    }

    static int numbers(int n){

        if(n==5){
            System.out.println(n);
            return n;
        }

        System.out.println(n);
        return numbers(n+1);

    }


    
}



