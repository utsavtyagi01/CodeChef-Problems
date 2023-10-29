pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int start=0;
	int end=n-1;
	int mid;
	if(x<a[0])
	return {-1,a[start]};

	if(x>a[end])
	return {a[end],-1};
	while(start<=end){
		mid=start+(end-start)/2;
		if(a[mid]==x){
			return {x,x};
		}

		else if(a[mid]>x){
			end=mid-1;
		}

		else if(a[mid]<x){
			start=mid+1;
		}

	}
	

	return {a[end],a[start]};
}
