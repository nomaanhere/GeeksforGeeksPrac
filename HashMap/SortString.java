import java.io.*;

class GFG {
	public static void main (String[] args) {
		//assuming lower case characters only
		String s1 = "bbccdefbbaa";
		String s2 ="";
		int arr[] = new int[26];
		for(char c : s1.toCharArray()){
		    arr[c-'a']++;
		}
		for(int i=0;i<26;i++){
		    for(int j=0;j<arr[i];j++){
		        System.out.print((char)(i+'a'));
		    }
		}
	}
}
