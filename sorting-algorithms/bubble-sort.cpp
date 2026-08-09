#include <iostream>
using namespace std;

int main(){
	int arr[] = {2,3,44,5,74,3,5,5,5,8,9,0,-56,-2};
	int s = sizeof(arr)/sizeof(arr[0]);
	for (int i = s - 1 ; i > 0 ; i -- ){

		bool isswap = false ;

		for (int j = 0 ; j <  i  ; j ++ ){

			if (arr[j]>arr[j+1]){
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
				isswap = true;
			}

		}

	if (!isswap){break;}
}

	for (int i = 0 ; i <  s ; i++){
		cout<<arr[i]<<" ";
	}

return 0;

}


