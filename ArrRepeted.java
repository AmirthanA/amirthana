package prog;
import java .util.Scanner;
public class ArrRepeted {
public static void main(String args[]){
	Scanner s=new Scanner(System.in);
	int n,i,j,count=0,k=0;
	n=s.nextInt();
	int a[]=new int[n];
	
	
	for( i=0;i<a.length;i++){
		a[i]=s.nextInt();
	}
	
	for(i=0;i<1;i++){
		for(j=i+1;j<a.length;j++){

		if(a[i]==a[j]){
			 k=a[i];
		}
}
}
	System.out.println(k);
}
}
