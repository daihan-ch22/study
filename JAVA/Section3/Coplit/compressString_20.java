public class compressString_20 {
    public static void main(String[] args) {

        System.out.println(compressString("EQTWVOQQQVDVRC"));

    }

    public static String compressString(String str) {
        if (str.isEmpty()) return str;

        int verify = 1; //반복되는 문자 개수 (첫 문자부터 시작이니 1)
        StringBuilder answer = new StringBuilder();
        String temp = "";

        //str 길이만큼 반복문
        for (int i = 0; i < str.length() - 1; i++) {
            //3개이상 연속되는경우만 압축
            //str을 돌면서 i와 i+1을 비교했을때 같은경우 count++
            if (str.charAt(i) == str.charAt(i + 1)) {
                verify++;
                temp += str.charAt(i);
                //temp += str.charAt(i+1);
            }
            //연속개수가 3이상이면서 i 와 i+1이 달라지는 경우 {문자열 압축}
            else if (verify >= 3 && str.charAt(i) != str.charAt(i + 1)) {
                // count가 3 이상이면서, i와 i+1이 달라지는 경우,
                // 정답 String에 count와 i 문자 붙이기
                // count 초기화
                answer.append(verify);
                answer.append(str.charAt(i));
                verify = 1;
                temp = "";
            }
            //연속 개수가 3보다 작으면서 i와 i+1이 다른경우,
            else if (verify < 3 && str.charAt(i) != str.charAt(i + 1)) {
                answer.append(temp);
                answer.append(str.charAt(i));
                verify = 1;
                temp = "";
            }
        }
        //후처리 -대문자 / 마지막 문자열 마지막 부분

        if (verify < 3) { //3개 반복이 아닌경우
            if (temp == "") //temp 비어있을때 마지막 문자만 추가
            {
                answer.append(str.substring(str.length() - 1));
            }
            for (int i = 0; i < verify; i++) //temp안에 있는 값을 전부 출력
            {
                answer.append(temp.substring(0));
            }
        } else { // 3개 반복인경우 반복숫자와 temp에서 맨 앞 문자만 떼온다
            answer.append(verify);
            answer.append(temp.substring(0));
        }
        return answer.toString();
    }
}
