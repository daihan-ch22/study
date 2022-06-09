public class dailycode6 {
    public static void main(String[] args) {
        Solution2 solution = new Solution2();
        System.out.println(solution.letterCapitalize("abc cdd"));
    }
}

class Solution2 {
    public String letterCapitalize(String str) {
        // TODO:
        if (str.length() == 0) return str;
        String[] cut = {};
        String answer = "";
        //공백을 기준으로 분리후
        cut = str.split(" ");
        for (int i = 0; i < cut.length; i++) {

            if (cut[i].isEmpty()) {
                cut[i] = cut[i];
            } else {
                cut[i] = String.valueOf(cut[i].charAt(0)).toUpperCase() + cut[i].substring(1);
            }
        }


        answer = String.join(" ", cut);
        return answer;
    }
}
