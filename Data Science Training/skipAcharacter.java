import java.util.Arrays;
import java.util.Scanner;
public class skipAcharacter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        String s="";
        System.out.println(ans(str,0,s));
        ans(str,0);
        System.out.println(ans1(str,0));
        ans2(str,"");
        sc.close();
    }
    //passing answer as argument ans fuction returning a string
    static String ans(String str,int i,String s){
        if(i == str.length()){
            return s;
        }
        if(str.charAt(i) != 'a'){
            s += str.charAt(i);
        }
        return ans(str,i+1,s);
    }
    //function do not return anything and do not contain ans in argument
    static void ans(String str,int i){
        if(i == str.length()){
            System.out.println();
            return;
        }
        if(str.charAt(i) != 'a'){
            System.out.print(str.charAt(i));
        }
        ans(str,i+1);
    }
    // function return ans but not taking ans in argument
    static String ans1(String str,int i){
        if(i == str.length()){
            return " ";
        }
        if( str.charAt(i) != 'a')
            return str.charAt(i) + ans1(str,i+1);
        return "" + ans1(str,i+1);
    }
    // solving the with substring 
    static void ans2(String str, String p){
        if(str.isEmpty()){
            System.out.println(p);
            return;
        }
        char ch = str.charAt(0);
        if(ch == 'a'){
            ans2(str.substring(1),p);
        }
        else{
            ans2(str.substring(1),p+ch);
        }
    }
}
