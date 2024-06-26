
import java.util.Scanner;
// package Strings_java;

public class stringrev {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str,nstr="";
        char ch;
        System.out.println("Enter the String: ");
        str=sc.next();
        System.out.println("Original String is: "+str);
        for(int i=0;i<str.length();i++){
          ch= str.charAt(i);
          nstr= ch+nstr;
        

      }
      System.out.println("Reverse string is: "+nstr);


    }
    
}
