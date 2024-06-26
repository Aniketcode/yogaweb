import java.util.Scanner;
public class javaproblem15 {
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s1,s2,s3="";
        System.out.println("Enter String 1: ");
        s1=sc.next();
        System.out.println("Enter String 2: ");
        s2=sc.next();
        for(int i=0;i<s1.length()|| i<s2.length();i++){
            if(i<s1.length()){
                s3+=s1.charAt(i);
            }
            if(i<s2.length()){
                s3+=s2.charAt(i);
            }


        }
        System.out.println("The String 3 is: "+s3);
        
    }
}
