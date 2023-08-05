/**
 * Q4_Compliment_of_Base10
 */

public class Q4_Compliment_of_Base10 {
  public static void main(String[] args) {
    int a = 25;
  int i =0;
  int ans =0;

    while (a!=0)
    {
      int bit = a&1;
      ans = (bit*(int)(Math.pow(10,i)))+ ans;
      a= a>>1;
      i++;
       
    }
    
    int res = 0;
    int j =0;
      while(ans!=0){
            int digit = ans%10;
            if(digit ==0){
                res = 1*(int)Math.pow(10, j) + ans;
            }
            if(digit ==1){
                res = 10*ans;
            }
           
            ans = ans/10;
            j++;
      }
    // System.out.println(res);
    int finres =0;
     int k =0;
     int bit =0;
    while(res!=0){
        bit = res%10;
        if(bit ==1){
          finres = bit*(int)Math.pow(2,k) + finres;
        }
      
      res = res/10;
      k++;
    }
      
  System.out.println(finres);

  }
    
}