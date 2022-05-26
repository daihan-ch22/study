package JAVA.Section2.Recursion.Stack_n_Queue;

import java.util.ArrayList;

public class stack_prac {
    public static void main(String[] args) {
        Stacking stacking = new Stacking();

        for(int i = 0; i<11; i++){
            stacking.push(i);
        }
        System.out.println(stacking.show());

        for(int i = 0; i<11; i++){
            System.out.print(stacking.pop() + "  ");
        }
    }
}
class Stacking { //직접 스택의 기능을 구현
    private ArrayList<Integer> listStack = new ArrayList<Integer>();

    public void push(Integer data) { //data 넣기
        listStack.add(data);
    }
    public Integer pop() {
        if (listStack.size() == 0) {
            return null;
        } else {
            return listStack.remove(listStack.size() - 1);
        }
    }
    public int size() {
        return listStack.size();
    }
    public Integer peek() {
        if (listStack.size() == 0) {
            return null;
        } else {
            return listStack.get(listStack.size() - 1);
        }
    }
    public String show() {
        return listStack.toString();
    }
    public void clear() {
        listStack.clear();
    }
}