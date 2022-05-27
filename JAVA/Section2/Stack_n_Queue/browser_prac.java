import java.util.*;

public class browser_prac {
    public static void main(String[] args) {
        String[] actions = new String[]{"B", "C", "-1", "D", "A", "-1", "1", "-1", "-1"};
        String start = "A";
        Browsing browsing = new Browsing();

        System.out.println(browsing.browserStack(actions, start));
    }
}

//새로운 페이지로 접속할 경우 prev 스택에 원래 있던 페이지를 넣고 next 스택을 비웁니다.
//
//뒤로 가기 버튼을 누를 경우 원래 있던 페이지를 next 스택에 넣고 prev 스택의 top에 있는 페이지로 이동한 뒤 prev
// 스택의 값을 pop 합니다.
//
//앞으로 가기 버튼을 누를 경우 원래 있던 페이지를 prev 스택에 넣고 next 스택의 top에 있는 페이지로 이동한 뒤 next
// 스택의 값을 pop 합니다.
//
//브라우저에서 뒤로 가기, 앞으로 가기 버튼이 비활성화일 경우(클릭이 되지 않을 경우)에는 스택에 push 하지 않습니다.
//
//    back: -1
//    forward: 1
//
//
class Browsing{
    public ArrayList<Stack> browserStack(String[] actions, String start) {
        char testletter = start.charAt(0);
        if (testletter >= 65 && testletter <= 90) {

            Stack<String> prevStack = new Stack<>();
            Stack<String> nextStack = new Stack<>();
            Stack<String> current = new Stack<>();
            ArrayList<Stack> result = new ArrayList<>();

            current.add(start); //현재 페이지 스택 추가

            for (int i = 0; i < actions.length; i++) {           //입력값 길이만큼 반복
                if (actions[i] == "-1" && !prevStack.isEmpty()) // prev에 뭔가 있고 뒤로가기시
                {
                    String temp = prevStack.pop();
                    nextStack.push(current.pop()); // 현재 -> 뒤로
                    current.push(temp);
                } else if (actions[i] == "1" && !nextStack.isEmpty()) //next에 뭔가 있고 앞으로가기 시
                {
                    String temp = current.pop();
                    current.push(nextStack.pop());
                    prevStack.push(temp);
                }
                else if (actions[i] == "1" || actions[i] == "-1") {//앞으로가기 / 뒤로가기가 안될 때 (빈 스택)
                }
                else {  // 새창을 열때
                    prevStack.push(current.pop());
                    current.push(actions[i]);
                    nextStack.clear();
                }
            }
            result.add(prevStack);
            result.add(current);
            result.add(nextStack);
            return result;
        }
        else
        {
            ArrayList<Stack> result = new ArrayList<>();
            Stack<Boolean> boolresult = new Stack<>();
            boolresult.add(false);
            result.add(boolresult);
            return result;
        }
    }
}