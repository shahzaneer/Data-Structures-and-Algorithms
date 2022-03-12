public class fibonacci {
    public static void main(String[] args) {

        int ans = fib(20);
        // int ans = fib(50); it will take immense time because it hass to computer the function many times
        // this is highly bad use of recursion
        // this problem is solved by dynamic programming..
        

        System.out.println(ans);
        
    }
    static int fib(int n){
        if(n<2){
            return n;
        }
        return fib(n-1) + fib(n-2);
        // jb tk left wala call stack pura nhi hoga right wala bhi call nhi hoga!

    }
}
