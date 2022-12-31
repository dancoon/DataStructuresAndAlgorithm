public class ShellSort {
    public static class Sort{
        public void shellsort(int[] arr){
            int n = arr.length;
            for(int gap = n / 2; gap > 0; gap /= 2){
                for (int j = gap;j < n; j++){
                    for (int i = j - gap; i >= 0; i--){
                        if (arr[gap + i] > arr[i]){
                            break;
                        }
                        int temp;
                        temp = arr[gap + i];
                        arr[gap + i] = arr[i];
                        arr[i] = temp;
                    }
                }
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
        int[] arr = {3, 880, 77, 726, 55, 63, 62, 40, 01};

        Sort obj = new Sort();
        System.out.println("Array before sorted: ");
        printarray(arr);
        obj.shellsort(arr);
        System.out.println("Array after sorted: ");
        printarray(arr);
    }
}
