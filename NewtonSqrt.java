/**
 * NewtonSqrt
 */
public class NewtonSqrt {
    public static void main(String[] args) {
        double userInput = Double.parseDouble(args[0]);
        double epsilon = 1e-15; // relative error tolerance
        double estimate = userInput; // estimate sqrt of input
        while (Math.abs(estimate - userInput / estimate) > epsilon * estimate)
            estimate = (userInput / estimate + estimate) / 2.0;
        System.out.println(estimate);
    }
}
