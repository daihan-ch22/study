import java.util.*;

public class Adjacency_Matrix {
    public int[][] createMatrix(int[][] edges) {
        // TODO:
        //입력값중 가장 큰 수를 기준으로 base matrix 생성 3 -> 4x4

        int matrix[][]; //답 넣을 matrix

        int maxnum = 0; // 제일 큰 값을 넣을 maxnum 변수
        for(int i = 0; i<edges.length; i++) //(row)
        {
            for(int j =0; j<edges[i].length; j++) //column (row의 개수만큼 돌아야함)
            {
                if(maxnum < edges[i][j])  maxnum = edges[i][j]; // edges[i][j]요소가 maxnum보다 크면 maxnum 갱신
            }
        }
        matrix = new int[maxnum+1][maxnum+1]; //edge의 가장 큰값이 3이면 4x4 여야함



        for(int i = 0; i<edges.length; i++) // 주어진 배열을 써야해서 주어진 edge배열의 길이
        {
            int from = edges[i][0];
            int to = edges[i][1];
            int direction = edges[i][2];

            if(direction == 0) { //단방향
                matrix[from][to] = 1; // from - to 간선이 존재한다는 뜻의 1 넣기
            }
            else if(direction == 1){ //양방향
                matrix[from][to] = 1;  // from - to 간선 O
                matrix[to][from] = 1;  // to - from 간선 O
            }
        }
        return matrix;
    }
}
