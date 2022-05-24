package Section2.Recursion;
class Fibonacci_prac {
    public int fibonacci(int num){
        //TODO..
        if(num == 0) return 0;
        else if(num == 1) return 1;

        return fibonacci(num-1) + fibonacci(num-2);
    }
}