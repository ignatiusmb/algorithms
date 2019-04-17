/**
 * Pyramid
 */
public class Pyramid {
    public static void main(String[] args) {
        int rows = 15;
        int k = 0;
        for (int i = 1; i <= rows; i++, k = 0) {
            for (int space = 0; space <= rows - i; space++)
                System.out.print(" ");
            while (k++ != i - 1)
                System.out.print("* ");
            System.out.println();
        }
    }
}
