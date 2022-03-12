public class binarySearch {

    

    // variables ka khyaal rkhna hai khas kr!
    // jo cheezain change horhin hain function k darmiyan unhe function variable declare krna hai 
    // jo call krte huay change hongi unhe argument main lena hai
    // return type ko bhi attentively dekhna hai.
    
    static int binarySearch(int [] array, int key ,int s, int e){
        
        s = 0;
        e = array.length-1;

        int mid = s + (e-s)/2;

        if(array[mid] == key){
            return mid;
        }
        else if(array[mid]>key){
            return binarySearch(array, key, mid+1, e);
        }

            return binarySearch(array, key, s, mid-1);

    }
    public static void main(String[] args) {
        
        int array [] = {1,2,3,4,5,6,7,8};
        System.out.println(binarySearch(array,4,0,array.length-1));
    }
    
}
