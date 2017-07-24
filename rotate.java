package prog;
import java.util.*;
public class rotate {
public static void main(String args[]){
	Scanner s=new Scanner(System.in);
	int n,k,l=0;
	n=s.nextInt();
	k=s.nextInt();
	int a[]=new int[n];
	int c[]=new int[20];
	
	for(int i=0;i<n;i++){
		a[i]=s.nextInt();
	}
	
	for(int j=k+1;j<n;j++){
		c[l]=c[j];
		l++;
	}
	
	for(int i=0;i<=k;i++){
		c[l]=c[i];
		l++;
	}
	
	for(int i=0;i<n;i++){
		System.out.println(c[i]);	
	}
	
}
}
