import java.util.Scanner;
import java.util.ArrayList;
public class permutationSubset {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s=sc.next();
        //permutation("",s);
        System.out.println(permutationcount("",s));
        sc.close();
    }
    static void permutation(String p,String up){
        if(up.isEmpty()){
            System.out.println(p);
            return;
        }
        char ch=up.charAt(0);
        for(int i=0;i<=p.length();i++){
            String f=p.substring(0,i);
            String s=p.substring(i,p.length());
            permutation(f+ch+s,up.substring(1));
        }
    }//using arraylist
    static ArrayList<String> permutationlist(String p,String up){
        if(up.isEmpty()){
            ArrayList<String> list = new ArrayList<>();
            list.add(p);
            return list;
        }
        char ch= up.charAt(0);
        ArrayList<String> ans=new ArrayList<String>();
        for(int i=0;i<=p.length();i++){
            String f=p.substring(0,i);
            String s=p.substring(i,p.length());
            ans.addAll(permutationlist(f+ch+s,up.substring(1)));
        }
        return ans;
    }
    // return the number of terms
    static int permutationcount(String p,String up){
        if(up.isEmpty()){
            return 1;
        }
        char ch=up.charAt(0);
        int count=0;
        for(int i=0;i<=p.length();i++){
            String f=p.substring(0,i);
            String s=p.substring(i,p.length());
            count += permutationcount(f+ch+s,up.substring(1));
        }
        return count;
    }
}
