public class SortZeroOne {
   
    public static void sortZeroOne(int[] arr) {
        int nextZero = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 0) {
                int temp = arr[nextZero];
                arr[nextZero] = arr[i];
                arr[i] = temp;
                nextZero += 1;
            }
        }
    }

    public static void printArray(int[] arr) {
        for (int j : arr) {
            System.out.print(j + "\t");
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        while (testCases != 0) {
            int size = scan.nextInt();
            int[] arr = new int[size];
            for (int i = 0; i < size; i++) {
                arr[i] = scan.nextInt();
            }
            sortZeroOne(arr);
            printArray(arr);
            testCases--;
        }
    }
}
