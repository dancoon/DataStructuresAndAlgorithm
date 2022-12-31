public class LinearSearch {
    public static class Search{
        public boolean linearsearch(int[] arr, int key) {
            for (int i = 0; i < arr.length; i++) {
                if (arr[i] == key) {
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
        if (obj.linearsearch(arr, 1)){
            System.out.println("Element found");
        } else {
         System.out.println("Element not found");
        }    
    }
}