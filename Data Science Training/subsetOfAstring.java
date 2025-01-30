import java.util.Scanner;
import java.util.Arrays;
import java.util.ArrayList;
public class subsetOfAstring {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s= sc.next();
        System.out.print(subseq(s,""));
        System.out.println();
        subset(s,"");
        System.out.println();
        subsetAscii(s,"");
        sc.close();
    }
    // giving all the subsets of the given string in the output using string and inbuilt functions
    static void subset(String s,String ans){
        if(s.length() == 0){
            System.out.print(ans+" ");
            return;
        }
        subset(s.substring(1),ans);
        ans += s.charAt(0);
        subset(s.substring(1),ans);
    }
    //returning the arraylist of the all the subsets of the string
    static ArrayList<String> subseq(String s,String p){
        if(s.length() == 0){
            ArrayList<String> list = new ArrayList<>();
            list.add(p);
            return list;
        }
        char ch = s.charAt(0);
        ArrayList<String> left = subseq(s.substring(1),p+ch);
        ArrayList<String> right= subseq(s.substring(1),p);
        left.addAll(right);
        return left;
    }
    // returning subsets with ascii value of all the characters present in it also
    static void subsetAscii(String s,String p){
        if(s.length() == 0){
            System.out.print(p+" ");
            return;
        }
        char ch = s.charAt(0);
        subsetAscii(s.substring(1),p+ch);
        subsetAscii(s.substring(1),p);
        subsetAscii(s.substring(1),p+(ch+0));
    }
}
