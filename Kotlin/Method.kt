// Method to calculate the factorial of a number
fun factorial(n: Int): Int {
    return if (n == 0 || n == 1) 1
    else n * factorial(n - 1)
}

// Method to check if a number is prime
fun isPrime(n: Int): Boolean {
    if (n <= 1) return false
    for (i in 2 until n) {
        if (n % i == 0) return false
    }
    return true
}

// Method to reverse a string
fun reverseString(str: String): String {
    return str.reversed()
}

// Method to check if a string is a palindrome
fun isPalindrome(str: String): Boolean {
    val reversed = str.reversed()
    return str == reversed
}

// Main function to test the methods
fun main() {
    // Testing the methods
    val num = 5
    println("Factorial of $num is: ${factorial(num)}")

    val primeNum = 17
    println("$primeNum is prime: ${isPrime(primeNum)}")

    val testStr = "hello"
    println("Reverse of \"$testStr\" is: ${reverseString(testStr)}")

    val palindromeStr = "level"
    println("\"$palindromeStr\" is a palindrome: ${isPalindrome(palindromeStr)}")
}

