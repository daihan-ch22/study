import java.util.*;

public class greedy_movingStuff {
    public static void main(String[] args) {
        Greedy1 greedy = new Greedy1();
        int[] arr = {60,73,80,87,103,109,119,123,128,129,136,146,153,168,182};
        //int[] arr = {50, 50, 70, 80};
        //int[] arr = {42,25,60,73,103,167};
        System.out.println(greedy.movingStuff(arr, 200));
    }
}
// 박스에 넣는 크기가 가장 효율적이어야 한다.
// 배열을 오름차순 정렬을 하고 가장 작은수 (0번째 인덱스) + 가장 큰 수(stuff.length-1번째 인덱스)
// 비교해서 limit보다 크면, 1번째 인덱스 와 stuff.length-2번째 인덱스.. 반복

//limit보다 작아지는 경우(가장 효율적) boxCount올리고 sum 초기화
class Greedy1{
    public int movingStuff(int[] stuff, int limit)
    {
        int[] copiedArr = stuff;
        Arrays.sort(copiedArr);  //오름차순 정렬

        int sum = 0;                                // 짐 무게 더하는 변수
        int boxCount =0;                            // 박스 개수 카운트
        int minVal = 0;                  // 시작 인덱스 (최소값)
        int maxVal = copiedArr.length-1; // 끝 인덱스 (최대값)

        while(minVal < maxVal) //인덱스들이 배열의 중앙으로 이동할때까지
        {
            if(copiedArr[minVal]+copiedArr[maxVal] <= limit) //더해서 박스에 넣을 수 있을때
            {
                minVal++;   // 인덱스 +1 이동
                maxVal--;   // 인덱스 -1 이동
                boxCount++; // 박스 개수 1 증가
            }
           else{ //무게 초과 시
                maxVal--;  //최소값 + 다음으로 가장 큰 최대값
                           // 그러면 제일 큰 수면서 limit에 근접한 값을 얻을 수 있다.
            }
        }
        return copiedArr.length - boxCount;
        //copiedArr은 배열의 길이인데, 요소 1개당 박스 1개로 했을때의 경우의 수
        //boxCount로 2개씩 이동한 박스의 개수를 세었기 때문에
        // 총 경우의 수에서 이동한 박스의 경우의 수를 빼면 필요한 박스의 개수 나옴
    }
}