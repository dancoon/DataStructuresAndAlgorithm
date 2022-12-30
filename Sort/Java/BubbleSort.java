class BubbleSort{
	public static class Sort{
		public void sortarray(int[] arr, int n){
			int i, j;

			for(i = 0; i < n; i++){
				for(j = i + 1; j < n; j++){
					if (arr[i] > arr[j]){
						int temp;

						temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
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

