public class BinarySearch {
    public static class Search{
        public boolean binarysearch(int[] arr, int beg, int end, int key){
            if (end >= beg){
                int mid = (beg + end) / 2;
                if (arr[mid] > key){
                    end = mid - 1;
                    return binarysearch(arr, beg, end, key);
                } else if (arr[mid] < key){
                    beg = mid + 1;
                    return binarysearch(arr, beg, end, key);
                } else {
                    return true;
                }
            }
            return false;
        }
    }
    public static void printarray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int[] arr = {10, 9, 7, 5 ,4, 2, 1, 0};
        Search obj = new Search();
        System.out.println("Array:");
        printarray(arr);
        if (obj.binarysearch(arr, 0, arr.length - 1, 10)){
            System.out.println("Element found");
        } else {
         System.out.println("Element not found");
        }    
    }
}
