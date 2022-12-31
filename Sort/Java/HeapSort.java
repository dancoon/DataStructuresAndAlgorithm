public class HeapSort {
    public static class Sort{
        public void heapify(int[] arr,int n, int i) {
            int largest = i;
            int l = (2 * i) + 1;
            int r = (2 * i) + 2;
            if (l < n && arr[l] > arr[largest]) {
                largest = l;
            }
            if (r < n && arr[r] > arr[largest]) {
                largest = r;
            }
            if (largest != i) {
                int temp = arr[largest];
                arr[largest] = arr[i];
                arr[i] = temp;
                heapify(arr, n, largest);
            }
        }
        public void heapsort(int[] arr){
            int n = arr.length;
            for (int i = n / 2 - 1; i >= 0; i--) {
                heapify(arr,n, i);
            }
            for (int i = n -  1; i > 0; i--) {
                int temp = arr[i];
                arr[i] = arr[0];
                arr[0] = temp;
                heapify(arr, i ,0);
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
        obj.heapsort(arr);
        System.out.println("Array after sorted: ");
        printarray(arr);
    }
}
