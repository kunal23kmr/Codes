#include <iostream>
#include <thread>

using namespace std;

// Function to calculate the sum of two numbers
void calculateSum(int a, int b, int& result) {
    result = a + b;
}

int main() {
    // Two numbers to be summed
    int num1 = 5;
    int num2 = 10;

    // Variable to store the result
    int sumResult = 0;

    // Create a thread and pass the numbers and the result variable
    thread sumThread(calculateSum, num1, num2, ref(sumResult));

    // Wait for the thread to finish
    sumThread.join();

    // Output the result
    cout << "Sum: " << sumResult << endl;

    return 0;
}
