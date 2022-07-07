import java.util.*;

public class balancedBracket_28 {
    public static void main(String[] args) {

        System.out.println(balancedBrackets("[({})]"));
    }


    public static boolean balancedBrackets(String str) {

        Stack<Character> stack = new Stack<>();
        HashMap<Character, Character> bracket = new HashMap<>();
        bracket.put('(', ')');
        bracket.put('{', '}');
        bracket.put('[', ']');

        String tail = "})]";


        for(int i=0; i<str.length(); i++)
        {
            if(bracket.containsKey(str.charAt(i))){
                stack.push(str.charAt(i));
            }
            else if(tail.indexOf(str.charAt(i)) != -1 && stack.size() > 0)
            {
                char top = stack.pop();
                char pair = bracket.get(top);

                if(pair != str.charAt(i)) return false;
            }
            else return false;
        }
        return stack.size() ==0;
    }
}
