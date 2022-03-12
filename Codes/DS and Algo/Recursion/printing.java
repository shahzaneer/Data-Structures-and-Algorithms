public class printing{
    public static void main(String[] args) {
        print(5);
    }

    static void print(int n){

        if(n==1){
            System.out.println(n);
            System.out.println("Pakistan Noor hai aur Noor ko zawaal nhi");
            return; //simply return to the main function where you were called

        }
        System.out.println(n);
        System.out.println("Pakistan Noor hai aur Noor ko zawaal nhi");
        print(n-1);

        // without base condition there will be errors!
    }
}