#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int start, int end, int num) {

	while(start<=end) {

		int mid = (start+end)/2;

		if(a[mid]==num)
			return mid;
		else if(a[mid]<num)
			return binarySearch(a,mid+1,end,num);
		else
			return binarySearch(a,start,mid-1,num);

	}
	return -1;
}

int main() {

	clock_t start, end;

	int n, num, a[100];
    cout<<"Enter no of elements: ";
    cin>>n;
    cout<<"Enter elements(in sorted order): ";
    for(int i = 0; i<n; i++)
        cin>>a[i];
    cout<<"Enter number to be found: ";
    cin>>num;

    start = clock();	
    int position = binarySearch(a, 0, n-1, num);

    if(position == -1)
    	cout<<"Number not found.\n";
    else
    	cout<<"Number found at index "<<position<<endl;
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(10); 
    cout << " sec " << endl;

	return 0;
}