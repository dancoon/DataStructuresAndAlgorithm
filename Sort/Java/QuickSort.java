public class QuickSort {
    public static class Sort{
        public int partition(int[] arr, int beg, int end){
            int pivot = arr[end];
            int j = beg;
            int i = beg - 1;
            for (;j < end; j++){
                if (arr[j] < pivot){
                    i++;
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
            int temp = arr[i + 1];
            arr[i + 1] = arr[end];
            arr[end] = temp;
            return (i + 1);
        }
        public void quicksort(int[] arr, int beg, int end){
            if (beg < end){
                int p = partition(arr, beg, end);
                quicksort(arr, beg, p - 1);
                quicksort(arr, p + 1, end);
            }
        }
    }
    public static void printarray(int[] arr){
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args){
        int[] arr = {9, 8, 7, 6, 5, 4, 3, 2, 0, 1};

        Sort obj = new Sort();
        System.out.println("Array before sorted: ");
        printarray(arr);
        obj.quicksort(arr, 0, arr.length - 1);
        System.out.println("Array after sorted: ");
        printarray(arr);
    }
}
