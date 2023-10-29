int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int start=0;
	int end = n-1;
	int mid ;

	while(start<=end){
		mid=(start+(end-start)/2);
		if(arr[mid]==x){
			end=mid-1;
		}

		else if(arr[mid]>x){
			end=mid-1;
		}

		else if(arr[mid]<x){
			start=mid+1;
		}
	}
	int first=start;
	start=0;
	end=n-1;
	while(start<=end){
		mid=(start+(end-start)/2);
		if(arr[mid]==x){
			start=mid+1;
		}

		else if(arr[mid]>x){
			end=mid-1;
		}

		else if(arr[mid]<x){
			start=mid+1;
		}
	}
	int last=end;
	return (last-first+1);
}
