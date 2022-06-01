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
    }
}