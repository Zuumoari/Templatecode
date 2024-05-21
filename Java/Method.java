public class AllMethods {

    // Method 1: Hello World
    public static void helloWorld() {
        System.out.println("Hello, World!");
    }

    // Method 2: Addition
    public static int add(int a, int b) {
        return a + b;
    }

    // Method 3: Subtraction
    public static int subtract(int a, int b) {
        return a - b;
    }

    // Method 4: Multiplication
    public static int multiply(int a, int b) {
        return a * b;
    }

    // Method 5: Division
    public static double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            System.out.println("Error: Division by zero.");
            return Double.NaN;
        }
    }

    // Method 6: Check if a number is even
    public static boolean isEven(int num) {
        return num % 2 == 0;
    }

    // Method 7: Check if a number is prime
    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    // Method 8: Calculate factorial
    public static int factorial(int num) {
        if (num == 0 || num == 1) {
            return 1;
        }
        return num * factorial(num - 1);
    }

    // Method 9: Convert Fahrenheit to Celsius
    public static double fahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32) * 5 / 9;
    }

    // Method 10: Convert Celsius to Fahrenheit
    public static double celsiusToFahrenheit(double celsius) {
        return (celsius * 9 / 5) + 32;
    }

    // Main method to test the above methods
    public static void main(String[] args) {
        // Method 1: Hello World
        helloWorld();

        // Method 2: Addition
        System.out.println("Addition: " + add(5, 3));

        // Method 3: Subtraction
        System.out.println("Subtraction: " + subtract(5, 3));

        // Method 4: Multiplication
        System.out.println("Multiplication: " + multiply(5, 3));

        // Method 5: Division
        System.out.println("Division: " + divide(5.0, 3.0));

        // Method 6: Check if a number is even
        System.out.println("Is 6 even? " + isEven(6));

        // Method 7: Check if a number is prime
        System.out.println("Is 7 prime? " + isPrime(7));

        // Method 8: Calculate factorial
        System.out.println("Factorial of 5: " + factorial(5));

        // Method 9: Convert Fahrenheit to Celsius
        System.out.println("Fahrenheit to Celsius: " + fahrenheitToCelsius(98.6));

        // Method 10: Convert Celsius to Fahrenheit
        System.out.println("Celsius to Fahrenheit: " + celsiusToFahrenheit(37));
    }
}

