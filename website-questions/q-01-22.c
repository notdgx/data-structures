// Strings -> Q 22 : Enter a string from the user, sort its characters in ascending order, and print it.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100



void mergearr(char arr[], int u, int l)
{
    int mid = (u + l ) / 2;
    char newarr[u - l + 1];
    int i = l;
    int k = 0;
    int j = mid + 1;

    while (i <= mid && j <= u) {
        if (arr[i] <= arr[j]) {
            newarr[k] = arr[i];
            i++;
        }
        else {
            newarr[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        newarr[k] = arr[i];
        i++;
        k++;
    }

    while (j <= u) {
        newarr[k] = arr[j];
        j++;
        k++;
    }

    for (int x = 0; x < k; x++) {
        arr[l + x] = newarr[x];
    }

}


void mergesort(char arr[], int l, int u){
    if (l >= u){
        return;
    }

    int mid = (l + u) / 2;

    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, u);

    mergearr(arr, u, l);
}


int main(){

    char str[STR_SIZE],ch;
    int i;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    printf("The String you entered -> %s\n",str);
    mergesort(str,0,i-1);

    

    printf("The Sorted String now  -> %s\n",str);



    return 0;
}
