/*CRED Coins

For each bill you pay using CRED, you earn X CRED coins.
At CodeChef store, each bag is worth 100 CRED coins.

Chef pays Y number of bills using CRED. Find the maximum number of bags he can get from the CodeChef store.

Input Format

First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X and Y.

Output Format

For each test case, output in a single line - the maximum number of bags Chef can get from the CodeChef store.

Constraints
1≤T≤100
1≤X,Y≤1000

Subtasks

Subtask 1 (100 points): Original constraints.  */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t,x,y,i,n;
		t=sc.nextInt();
		for(i=1;i<=t;i++){
		    x=sc.nextInt();
		    y=sc.nextInt();
		    //n=(x*y)/100;
		    System.out.println((x*y)/100);
		}
		// your code goes here

	}
}
