import java.util.*;


public class numsearch18 {

    public static void main(String[] args) {
        System.out.println(numberSearch("Hello6 9World 2, Nic8e D7ay!"));
    }

    static int numberSearch(String str) {
        //empty String
        if(str.length() == 0) return 0;
        char[] arr = new char[str.length()];

        //Linear search of String str
        //check single character if it's num
        //if it's num -> add up to SUM
        //then SUM / lengthWithoutSum  -> roundups

        double sum = 0;
        double lengthWithoutSum = 0;

        for(int i = 0; i<str.length(); i++) //char Array
        {
            arr[i] = str.charAt(i);
        }

        for(int c = 0; c < arr.length; c++)
        {
            if(Character.isDigit(arr[c])) // only number
            {
                sum += Character.getNumericValue(arr[c]);
            }
            else if(arr[c] == ' ') {} // if the element contains spacing
            else { //only letter
                lengthWithoutSum++;
            }
        }
        return (int)Math.round(sum / lengthWithoutSum);
    }
}