import java.util.*;
public class Main
{
       public static void main(String []args)
       {
              Scanner sc = new Scanner(System.in);
              int t = sc.nextInt();
              for(int j=0;j<t;j++)
              {
                        int n = sc.nextInt();
                        int[] x = new int[n];
                        int[] y = new int[n];
                        int a=0,b=0,i;

                        for(i=0;i<x.length;i++)
                            x[i] = sc.nextInt();
                        for(i=0;i<y.length;i++)
                            y[i] = sc.nextInt();

                        for(i=0;i<x.length;i++)
                        {
                            if(i%2==0)
                            {
                               a+=y[i];
                               b+=x[i];
                            }
                            else
                            {
                               a+=x[i];
                               b+=y[i];
                            }
                        }

                        if(a<b)
                            System.out.println(a);
                        else
                            System.out.println(b);
              }
    }
}   
