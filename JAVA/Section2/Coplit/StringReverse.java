public class StringReverse {
    public static void main(String[] args) {
        TEST test = new TEST() {};
        System.out.print(test.firstReverse("abcdefg"));

    }
}
class TEST {
    public String firstReverse(String str) {
        // TODO:
        char[] arrStr = new char[str.length()];
        String answer = "";
        int count = str.length();
        int cal = str.length()-1;

        for(int i = 0; i<count; i++){
            char c = str.charAt(i);
            arrStr[i] = c;
        } //arrStr [a,b,c,d,e]

        for(int i = 0; i<count ; i++){
            answer += arrStr[cal];
            cal--;
        }
        return answer;
    }
}
/*

    String answer = "";
    StringBuilder sb = new StringBuilder();

        sb.append(str);
                answer += sb.reverse();

                return answer;*/
