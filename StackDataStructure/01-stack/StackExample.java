import java.util.Stack;

public class StackExample {
    public static void main(String[] args) {
        Stack <Integer> stack = new Stack<>();

        stack.push(1);
        stack.push(2);

        int num1 = stack.pop();
        int sk = stack.peek();

        System.out.println("Element popped " + num1);
        System.out.println("Element on top " + sk);
    }
}