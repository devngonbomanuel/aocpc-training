import java.util.Scanner;

/**
 *
 * @author Julio
 */
public class Hulk {

    public static void main(String[] args) {
        int n;

        n = new Scanner(System.in).nextInt();
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                if (i == n) {
                    System.out.print("I hate it ");
                } else {
                    System.out.print("I hate that ");
                }
            } else if (i == n) {
                System.out.print("I love it ");
            } else {
                System.out.print("I love that ");

            }
        }

    }

}