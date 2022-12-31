public class RadixSort {
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
        public void countingsort(int[] arr, int pos){
            int n = arr.length;
            int count[] = new int[10];
            int output[] = new int[n];

            for (int i = 0; i < count.length; i++) {
                count[i] = 0;
            }
            for (int i = 0; i < n; i++) {
                ++count[(arr[i] / pos) % 10];
            }
            for (int i = 1; i < count.length; i++) {
                count[i] += count[i - 1];
            }
            for (int i = 0; i < n; i++) {
                output[--count[(arr[i] / pos) % 10]] = arr[i];
            }
            for (int j = 0; j < n; j++) {
                arr[j] = output[j];
            }
        }
        public void radixsort(int[] arr){
            int max = max(arr);
            for (int pos = 1; max / pos > 0; pos *= 10){
                countingsort(arr, pos);
            }
        }
    }
    public static void printarray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int[] arr = {93, 88, 77, 26, 55, 63, 32, 40, 01};

        Sort obj = new Sort();
        System.out.println("Array before sorted: ");
        printarray(arr);
        obj.radixsort(arr);
        System.out.println("Array after sorted: ");
        printarray(arr);
    }
}
