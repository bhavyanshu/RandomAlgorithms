/**
 * WORK IN PROGRESS - https://www.hackerrank.com/challenges/basic-cryptanalysis
 */

import java.util.*;
import java.net.*;
import java.io.*;

class BasicCryptAnalysis
{
 public static char ch[]= {'f','d','g','r','e','w','q','v','t',' ','h','o','z','y','j','m',' ','s','l','c','p',' ','a',' ','x','b'};
 public static char p[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

 public static void main(String[] args){
   Scanner sysin = new Scanner(System.in);
   String s = sysin.nextLine();
   String result = "";
   for (String word : s.split("\\s+")) {
     //System.out.println(word +" Len Of s :"+word.length());
     String decryptedword = "";
     char p1[]=new char[(word.length())];
     for(int i=0;i<word.length();i++)
     {
      for(int j=0;j<26;j++)
      {
       if(ch[j]==word.charAt(i))
       {
        p1[i]=p[j];
        break;
       }
      }
      decryptedword = decryptedword+p1[i];
     }
     result = result+" "+decryptedword;
   }

   System.out.println(result);
 }
}
