#include<iostream>
using namespace std;
void heapify(int ar[], int  n ,int i)
{
    int largest=i;//main root
    int l=2*i+1; //left child
    int r=2*i+2; //right child
    if(l<n && ar[largest]<ar[l])
    largest = l;
    if(r<n && ar[largest]<ar[r])
    largest = r;
    if(largest!=i){
        int temp=ar[i];
        ar[i]=ar[largest];
        ar[largest]=temp;
        heapify(ar,n,largest);
    }
}
// main function to do heap sort
void heapsort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
  
    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
  
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    heapsort(a,n);
    for(int j=0;j<n; j++)
    cout << a[j] << endl;
}