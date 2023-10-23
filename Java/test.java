import java.util.Scanner;

public class TestClass {
    public static String printTheRemainingElements(String Queue) {
        int size = 10;
        char[] circularQueue = new char[size];
        int rear = -1;
        int sl = Queue.length();
        boolean f = false;
        if (sl == 0) {
            return "";
        }
        if (sl >= 10) {
            f = true;
        }

        for (char c : Queue.toCharArray()) {
            rear = (rear + 1) % 10;
            circularQueue[rear] = c;
        }

        // Generate the resulting string from the circular queue
        StringBuilder res = new StringBuilder();

        if (f == true) {
            int i = 0;
            while (i < 10) {
                res.append(circularQueue[i]);
                i++;
            }
        } else {
            int i = 0;
            while (i <= rear) {
                res.append(circularQueue[i]);
                i++;
            }
        }

        return res.toString();
    }

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            String Queue = scanner.nextLine();

            System.out.println(printTheRemainingElements(Queue));
        }
    }
}