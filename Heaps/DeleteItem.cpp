void DeleteElement(int a[],int &n)
{
	swap(a[0],a[n-1]); // swaping root and the last element
	n=n-1; // Decrease size of heap by 1
	heapify(a,n,0); //heapify the root node 
}
