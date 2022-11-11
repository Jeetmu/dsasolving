class Solution
{
   public:
   
    int findSum(int A[], int N)
    {
    	int sum = 0;
    	int max = INT_MIN;
    	int min = INT_MAX;
    	
    	for(int i = 0; i<=N-1; i++){
    	    if(A[i] > max)
    	    {
    	        max = A[i];
    	    }
    	}
    	for(int i = 0; i<=N-1; i++)
    	{
    	    if(A[i] < min)
    	    {
    	        min = A[i];
    	    }
    	}
    	return max + min;
    }

};