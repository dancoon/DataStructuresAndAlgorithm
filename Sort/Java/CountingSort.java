public class CountingSort {
    public static class Sort{
        public int max(int[] arr){
            int m = arr[0];
            for (int i = 1; i < arr.length; i++){
                if (arr[i] > m){
                    m = arr[i];
                }
            }
            return m;
        }
        public void countingsort(int[] arr){
            int k = max(arr);
            int n = arr.length;
            int count[] = new int[k + 1];
            int output[] = new int[n];

            for (int i = 0; i <= k; i++) {
                count[i] = 0;
            }
            for (int i = 0; i < n; i++) {
                ++count[arr[i]];
            }
            for (int i = 1; i <= k; i++) {
                count[i] += count[i - 1];
            }
            for (int i = 0; i < n; i++) {
                output[--count[arr[i]]] = arr[i];
            }
            for (int j = 0; j < n; j++) {
                arr[j] = output[j];
            }
        }
    }
    public static void printarray(int[] arr){
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int[] arr = {9, 8, 7, 6, 5, 4, 3, 2, 0, 1};

        Sort obj = new Sort();
        System.out.println("Array before sorted: ");
        printarray(arr);
        obj.countingsort(arr);
        System.out.println("Array after sorted: ");
        printarray(arr);
    }
}
