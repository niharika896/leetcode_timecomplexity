#include <stdio.h>
int searchInsert(int* a, int n, int t) {
    for(int i=0;i<n;i++){
        if(a[i]==t)return i;
    }
    int i=0;
    while(a[i]<t && i<n)i++;
    return i;
}
int main(){
    int arr[]={1,3,5,6};
    printf("%d", searchInsert(arr,4,7));
    return 0;
}
