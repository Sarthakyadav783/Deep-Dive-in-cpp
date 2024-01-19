import java.util.ArrayList;

public class Fibonacci {

    public static void main(String[] args) {
        ArrayList<Integer> fiblist = new ArrayList<>();
        int num = 400;
        for (int i = 1; i <= num; i++) {
            int fibonaccinum = fibonacci(i);
            fiblist.add(fibonaccinum);
        }

        ArrayList<Integer> evenfibList = new ArrayList<>();
        for (int i = 0; i < fiblist.size(); i++) {
            int num1 = fiblist.get(i);
            if (num1 % 2 == 0) {
                evenfibList.add(num);
            }
        }

        int sumEvenFibonacci = 0;
        for (int i = 0; i < evenfibList.size(); i++) {
            sumEvenFibonacci += evenfibList.get(i);
        }
        System.out.println(sumEvenFibonacci);
    }

    static int fibonacci(int n) {
        if (n <= 2) {
            return 1;
        } else {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
}