import java.util.*;

public class Queue_prac {
    public static void main(String[] args) {
        Queue que = new Queue();

        for (int i = 0; i < 11; i++) {
            que.add(i);
        }
        System.out.println(que.show());

        for (int i = 0; i < 11; i++) {
            System.out.print(que.poll() + "  ");
        }
    }
}
class Queue {
    ArrayList<Integer> listQueue = new ArrayList<>();

    public void add(Integer data) {
        listQueue.add(data);        //큐에 data 값 삽입
    }
    public Integer poll() {
        if (listQueue.size() == 0) {
            return null;
        } else {
            return listQueue.remove(0);  //큐 리스트의 0번째 인덱스 삭제후 반환
        }
    }

    public int size() {
        return listQueue.size();
    }

    public Integer peek() {
        if (listQueue.size() == 0) {
            return null;
        } else {
            return listQueue.get(0);  //큐 리스트의 0번째 인덱스의 값 반환
        }
    }
    public String show() {
        return listQueue.toString();
    } //큐 리스트를 String 타입으로 바꾸고 반환

    public void clear() {
        listQueue.clear();
    } // 큐 리스트 전체 삭제
}
