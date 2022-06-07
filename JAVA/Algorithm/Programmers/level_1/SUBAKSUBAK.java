public class SUBAKSUBAK {
    public String solution(int n) {
        String answer = "";
        // 배열로 만들어서 합하기
        String su = "수";
        String bak = "박";
        String[] arr = new String[n];

        for(int i =0; i<n; i++)
        {
            if(i == 0 || i %2 != 1)
            {
                arr[i] = su;
            }
            else if(i % 2 == 1)
            {
                arr[i] = bak;
            }

            answer += arr[i];
        }
        return answer;
    }
}