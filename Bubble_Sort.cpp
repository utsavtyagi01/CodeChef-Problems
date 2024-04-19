void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here    
    bool count=false;
    for(int i=0;i<n-1;i++){
        count=true;
        for(int j=0;j<n-i-1;j++){
          if (arr[j] > arr[j + 1]) {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            count=true;
          }
        }
        if(!count)
        break;
    }
}
