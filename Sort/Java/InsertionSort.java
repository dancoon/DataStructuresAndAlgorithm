public class InsertionSort {
    public static class Sort{
		public void sortarray(int[] arr, int n){
			int k, j, temp;
            
            for (k = 1; k < n; k++){
                temp = arr[k];
                j = k - 1;
                while (j >= 0 && temp <= arr[j]){
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = temp;
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
