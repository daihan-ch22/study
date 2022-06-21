public class daily_19_decryptCaesarCipher {
    public static void main(String[] args) {

        System.out.println(decryptCaesarCipher("mnv xnt zqd qdzcx sn lnud sn hlldqrhud bntqrd", 25));

    }

    public static String decryptCaesarCipher(String str, int secret) {
        //empty string
        if (str.length() == 0) return str;

        char[] alphabets = new char[26]; // 알파벳은 총 26개
        char first_alphabet = 'a';

        //char 배열에 알파벳 소문자 전부 담기 (첫번째 for)
        for (int i = 0; i < alphabets.length; i++) {
            alphabets[i] = first_alphabet;
            first_alphabet++;
        }
        StringBuilder ans = new StringBuilder();

        //문자열 길이 만큼 반복을 하면서 (문자열 의 문자 하나씩 비교)
        // char 배열에서 현재 문자열의 문자가 담겨있는 인덱스 확인 후 -secret 한 인덱스 요소 가져오기
        // 문자열 문자 하나 기준으로 for문을 돌아 char배열 인덱스 확인

        // if(공백이면 공백 추가)
        // if(secret을 만큼 인덱스를 왼쪽으로 옮길때 배열 인덱스를 넘어설때)
        //다시 뒷 부분으로 돌아가기

        //Caesar Cipher -> e.g. a -> c
        //[0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
        // a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z

        for (int k = 0; k < str.length(); k++)           //문자열의 문자 하나씩 비교
        {
            for (int l = 0; l < alphabets.length; l++)    //알파벳 배열 비교
            {
                //문자와 char배열의 인덱스가 같을때
                if (alphabets[l] == str.charAt(k)) {
                    //secret만큼 인덱스를 왼쪽으로 옮겨도 아직 배열 인덱스 범위 일 경우
                    if (l - secret >= 0 && l - secret < alphabets.length) {
                        ans.append(alphabets[l - secret]); // 정답String에 char배열 인덱스 - secret만큼
                        break;
                    }

                    //secret만큼 인덱스 왼쪽으로 옮길때 인덱스가 0 보다 작아지는 경우
                    else {
                        int modifiedIndex = l - secret + alphabets.length;
                        ans.append(alphabets[modifiedIndex]);
                        // l= 0 (a)  secret = 3 이면 -3이 되는데 예상대로면 23(k)가 되야함
                        // 그래서 -3값에 다시 알파벳 배열 총 길이 더하면 23
                        break;
                    }
                }
                //문자가 공백일때
                else if (Character.isWhitespace(str.charAt(k))) {
                    ans.append(" "); //문자열의 문자가 공백이면 공백 더하기
                    break;
                }
            }
        }
        return ans.toString();
    }
}
