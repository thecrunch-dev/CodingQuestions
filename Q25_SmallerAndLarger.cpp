#include <iostream>
using namespace std;
void getMoreAndLess(int arr[], int n, int x) {
	    
	    int a,b;
	     
	    int s =0;
	    int e = n -1;
	    int mid = s + (e-s)/2;
	    
	    int less = mid;
	    
	    
	   while(s<e){
	       if(arr[mid]>x){
	          arr[e] = mid-1;

			  if(arr[e]<=x){
                less = mid;
				break;
			  }
			  
			  cout << mid << endl;
	       }

	       if(arr[mid]<=x){
			    s = mid+1;

				if(arr[s]>x){
					less = mid;
					break;
				}
	          
			   cout << mid << endl;
			   break;
	       }
	       
	       mid = s + (e-s)/2;
	       
	   }
	   
	   int more = n - less;
	   
	  cout << less <<" " << more << " ";
	    
	    
	    
	}
int main (){
    int x = 1; 
    int n =7;
    int Arr[] = {1, 2, 8, 10, 11, 12, 19};

    getMoreAndLess(Arr,n,x);
}