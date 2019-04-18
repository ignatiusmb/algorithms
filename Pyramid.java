public class Pyramid {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder();
        int rows = 15;
        int k = 0;
        for (int i = 1; i <= rows; i++, k = 0) {
            for (int space = 0; space <= rows - i; space++)
                sb.append(" ");
            while (k++ != i - 1)
                sb.append("* ");
            System.out.println(sb.toString());
            sb.setLength(0);
        }
    }
}
