import java.util.*;
// https://programmers.co.kr/learn/courses/30/lessons/42748
public class Kth_number {
    public static void main(String[] args) {
        q1tt qq  = new q1tt(){};
        int[] arr = {1,5,2,6,3,7,4};
        int[][] arr2 = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};

        System.out.println(qq.solution(arr, arr2));
    }
}

class q1tt {
    public int[] solution(int[] array, int[][] commands) {
        int[] answer = new int[commands.length];
        int[] temp = new int[commands.length+1];


        //command row를 반복문으로 돌고
        // copyOfRange해서 i ~ j까지 자른걸 temp Arr에 넣고 k번째 인덱스 값을 answer에 넣는다.

        for(int i=0; i<commands.length; i++)
        {
            int from = commands[i][0];
            int to = commands[i][1];
            int K = commands[i][2];
            temp = Arrays.copyOfRange(array, from-1, to);
            Arrays.sort(temp);
            answer[i] = temp[K-1];
        }


        return answer;
    }
}