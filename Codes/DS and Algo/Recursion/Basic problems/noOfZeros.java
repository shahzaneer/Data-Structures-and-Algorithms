public class noOfZeros{

    static public int countZero(int number){
        return helper(number,0);
    }

    private static int helper(int number,int count){
        if(number==0){
            return count;
        }
        int rem = number % 10;
        if(rem==0){
            return helper(number/10, count+1);
        }

        return helper(number/10, count);
    }
    public static void main(String[] args) {
        System.out.println(countZero(2345004));
    }
}


// -->>>> Recursion is difficult at first then it is easy!