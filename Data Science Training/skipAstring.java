//package String;
import java.util.*;
import java.util.Arrays;
public class skipAstring {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.println(ans(str,""));
        System.out.println(ans1(str,""));
        sc.close();
    }
    // skipping a string from the whole word or sentence
    static String ans(String str,String s){
        if(str.isEmpty()){
            return s;
        }
        if(str.startsWith("apple")){
            return ans(str.substring(5),s);
        }
        return ans(str.substring(1),s+str.charAt(0));
    }
    // skipping app from the sentence but not apple
    static String ans1(String str,String s){
        if(str.isEmpty()){
            return s;
        }
        if(str.startsWith("app") && !str.startsWith("apple")){
            return ans1(str.substring(3),s);
        }
        return ans1(str.substring(1),s+str.charAt(0));
    }
}
