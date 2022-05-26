import java.util.*;
public class Queue_prac {
    public static void main(String[] args) {
        Queue que = new Queue();

        for(int i = 0; i<11; i++){
            que.add(i);
        }
        System.out.println(que.show());

        for(int i = 0; i<11; i++){
            System.out.print(que.poll() + "  " );
        }
    }
}

class Queue {
    private ArrayList<Integer> listQueue = new ArrayList<Integer>();

    public void add(Integer data) {
        listQueue.add(data);
    }

    public Integer poll() {
        if(listQueue.size()==0) {
            return null;
        }else {
            return listQueue.remove(0);
        }
    }
    public int size() {
        return listQueue.size();
    }
    public Integer peek() {
        if(listQueue.size()==0) {
            return null;
        }else {
            return listQueue.get(0);
        }
    }
    public String show() {
        return listQueue.toString();
    }
    public void clear() {
        listQueue.clear();
    }
}
