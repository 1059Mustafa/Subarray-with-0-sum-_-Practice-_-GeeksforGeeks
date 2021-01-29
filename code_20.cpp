bool subArrayExists(int arr[], int n)
{
   map<int,bool>mp;
   int sum=0;
   for(int i=0;i<n;i++)
   {
       sum+=arr[i];
       if(sum==0||mp.count(sum)==true)
       {
           return true;
       }
       else
       {
           mp[sum]=true;
       }
   }
   return false;
}
