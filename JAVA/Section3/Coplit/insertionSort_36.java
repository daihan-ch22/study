public class insertionSort_36 {
    public static void main(String[] args) {

        int[] a = {5, 1, 2 , 3};
        int[] ans = insertionSort(a);
        for(int i=0; i<a.length; i++)
        {
            System.out.print(ans[i] + " ");
        }
    }


    public static int[] insertionSort(int[] a) {
        // TODO:

        for(int i =1; i<a.length; i++){
            int target = a[i];

            int j = i-1;

            while(j >=0 && target < a[j]){
                a[j+1] = a[j];
                j--;
            }

            a[j+1] = target;
        }
        return a;
    }
}
