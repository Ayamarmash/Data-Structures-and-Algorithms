        void insertItem(int x)
        {
            v[size++] = x;
            heapify(v,size, size-1);
            cout << x << " Added" << endl;
        }
void heapify(int a[], int n, int i)
{	
    int parent = i;
	if(i<n)
	{
		//finding left subtree of parent
		int left = 2*i+1; 
		//finding Right subtree of parent
		int right = 2*i+2; 
		//is children index is valid or not
		if(left<n || right<n) 
		{
			//checking whether parent is less than children or not
			if(a[parent]<a[left] || a[parent]<a[right])
			{
                                //finding the largest children
				if(a[left]<a[right]) 
				{
                    //swaping the parent with largest children
					swap(a[right],a[parent]); 
					heapify(a,n,right);  //Recursively heapify the heap
				}	
				else
				{
					swap(a[left],a[parent]);
					heapify(a,n,right);
				}
			}
		}
	}
}
