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

        /*
=======
// 70 50 80 50  // max 100kg
// 배열 오름차순 정렬하기
// 배열의 i번째와 i+1을 더했을때 limit보다 작으면
// i+(i+1)을 sum변수에 넣고 i+2 확인.... limit보다 작으면 i+2도 더하고 ...
// for 단일 반복문으로 i를 계속 돌리면 될듯??

// 만약 sum이 limit보다 커지면 count올리고 sum 초기화
// 한번에 최대 2개밖에 못들어감
class Greedy1{
    public int movingStuff(int[] stuff, int limit)
    {
        int count = 0;
        int[] arr = stuff;
        int sum = 0;
        int maxCount = 0;
        Arrays.sort(arr, 0, stuff.length);
// 60,73,80,87,103,109,119,123,128,129,136,146,153,168,182
// 200
        for(int i =0; i<arr.length; i++) {

            if (arr[i] == limit) count++;    // 요소가 limit과 같으면 count ++

            if (arr[i] + sum <= limit) { //limit 보다 합한게 작으면 일단 계속 반복하기
                sum += arr[i];
                maxCount ++;
            } else if(arr[i] + sum > limit){
                count+=1;
                sum = arr[i];
                if(i == arr.length-1 && sum !=0) count+=1;
            }

            if(maxCount == 2){
                count ++; sum = 0;
            }

            if (sum >= limit) {
                count+=1; //1
                sum = 0;
            }
        }
        return count;
>>>>>>> ac6af92978fad526a28532acf6115202bf5e59d3
    }
}*/