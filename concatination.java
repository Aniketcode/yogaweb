import java.util.*;
// public class concatination;
// {
// public String conCat(String st1, String st2) 
// {
//         if (st1.length() != 0 && st2.length() != 0
//                 && st1.charAt(st1.length() - 1) == st2.charAt(0))
//             return st1 + st2.substring(1);
//         return st1 + st2;
// }

//     public static void main (String[] args)
//     {
//     //   Main m= new Main();
//       String str1 =  "food";
//       String str2 = "door";
//       System.out.println("The given strings are: "+str1+"  and  "+str2);
//       System.out.println("The string after concatination are: "+conCat(str1,str2));
//     }
// }
class concatination {
    public static void main (String[] arg){
    Scanner sc=new Scanner(System.in);
    String str,str2;
    System.out.println("Enter String 1: ");
    str=sc.next();
    System.out.println("Enter String 2: ");
    str2=sc.next();
    str=str.toLowerCase();
    str2=str2.toLowerCase();
    String st_concat;
    if (str.charAt(str.length()-1)==str2.charAt(0))
        st_concat = str.concat(str2.substring(1));
    
    else 
        st_concat = str.concat(str2);    
    System.out.println(st_concat);
    }
}