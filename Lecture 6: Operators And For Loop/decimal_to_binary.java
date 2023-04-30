import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long binary = decimalToBinary(n);
        System.out.println(binary);
        sc.close();
    }

    private static long decimalToBinary(int num) {
        long binary = 0;
        int base = 1;
        while (num > 0) {
            int rem = num % 2;
            binary += rem * base;
            base *= 10;
            num /= 2;
        }
        return binary;
    }
}
