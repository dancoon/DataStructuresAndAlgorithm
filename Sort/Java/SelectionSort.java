public class SelectionSort {
    public static class Sort{
        public int smallest(int[] arr, int n, int i){
            int k, pos;
            int small = arr[i];

            pos = i;
            for (k = i + 1;k < n; k++){
                if (arr[k] < small){
                    small = arr[k];
                    pos = k;
                }
            }
            return pos; 
        }
        public void sortarray(int[] arr, int n){
            int i, p , temp;
            
            for (i = 0; i < n; i++){
                p = smallest(arr, n, i);
                temp = arr[i];
                arr[i] = arr[p];
                arr[p] = temp;
            }
        }
        public void printarray(int[] arr, int n){
            int i;

            for(i = 0; i < n; i++){
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
    }
    public static void main(String args[]){
        int[] arr = {6, 4, 2, 3, 8, 9, 1};

        Sort obj = new Sort();
        
        System.out.println("Array before sorting:");
        obj.printarray(arr, arr.length);

        obj.sortarray(arr, arr.length);
        System.out.println("Array before sorting:");
        obj.printarray(arr, arr.length);
    }
}
