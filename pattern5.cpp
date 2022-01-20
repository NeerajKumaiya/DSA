 /*  *      
    * *     
   * * *    
  * * * *   
 * * * * *  
* * * * * * 
 * * * * *  
  * * * *   
   * * *    
    * *
     *   */

#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++) 
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=0;i<=5;i++)
	{
		for(int j=5;j>=5-i;j--)
		{
			cout<<" ";
		}
		for(int j=5;j>=i;j--)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
