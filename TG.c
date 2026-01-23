#include<stdio.h>
int main()
{
    int i,n;
    int max,second_max;
printf("enter number of elements:");
scanf("%d",&n);
int arr[n];
printf("enter elements:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
max = second_max =arr[0];
for(i=1;i<n; i++){
    if(arr[i] > max){
        second_max=max;
        max=arr[i];
    }
    else if(arr[i] > second_max && arr[i] < max) {
        second_max=arr[i];
    }
}


}