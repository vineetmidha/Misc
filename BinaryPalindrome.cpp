
// https://www.codingninjas.com/codestudio/problems/check-palindrome_920555

bool checkPalindrome(long long num) 
{
    int a[64]; 
    int i = 0;
    
    while (num > 0)
    {
    	a[i++] = num % 2;    
        num /= 2;
    }
    
    for (int j=0, k=i-1; j < k; j++, k--)
    {
        if (a[j] != a[k])
        {
            return false;
        }
    }
    
    return true;
}
