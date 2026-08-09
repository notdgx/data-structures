#include <iostream>
using namespace std;

int main(){
	int arr[] = {2,3,44,5,74,3,5,5,5,8,9,0,-56,-2};
    int s = sizeof(arr)/sizeof(arr[0]);

        for (int i = 0 ; i < s - 1 ; i ++ ){
            for (int j = i+1 ; j > 0 ; j--){
            if (arr[j]<arr[j-1]){
				arr[j]=arr[j]+arr[j-1];
				arr[j-1]=arr[j]-arr[j-1];
				arr[j]=arr[j]-arr[j-1];
			}
            else{break;}
        }}


	for (int i = 0 ; i <  sizeof(arr)/sizeof(arr[0]) ; i++){
		cout<<arr[i]<<" ";
	}

return 0;
}



