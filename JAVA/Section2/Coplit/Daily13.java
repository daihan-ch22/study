public class Daily13 {
    public static void main(String[] args) {
        ReadVertically read = new ReadVertically();
        String[] arr = {"Hello", "World"};
        System.out.println(read.readVertically(arr));
    }
}

class ReadVertically {
    public String readVertically(String[] arr) {
        // TODO:


        // 가장 긴 문자열 찾아서 해당 문자열 길이를 베이스로 MAXcount 설정
        int MAXcount = 0;
        for (int i = 0; i < arr.length; i++) {
            if (MAXcount <= arr[i].length())
                MAXcount = arr[i].length();

        }
        String ans = ""; // 정답용 배열


//  ["hello"] , ["world"] , ["kim"]

// 00 10 20
// 01 11 21
// 02 12 22

        boolean count = true;
        int index = 0; // i번째 배열의 인덱스 순회용 변수

        //123 123 무한반복 돌기
        while (count) {
            for (int i = 0; i < arr.length; i++)                 // 배열길이만큼 반복
            {
                if (index < arr[i].length()) {                   //현재 인덱스가 배열의 i번째 요소보다 작은경우
                    if (arr[i].charAt(index) == ' ') ans += " "; //해당배열의[i]번째 요소가 띄어쓰기 인 경우
                    else ans += arr[i].charAt(index);            //배열에 문자가 있으면 정답String 에 추가
                }
            }
            index++;                                             //다음 인덱스로 이동
            if (index == MAXcount) count = false;                // 인덱스가 제일 긴 문장열과 동일하다면 반복 탈출
        }
        return ans;
    }
}
