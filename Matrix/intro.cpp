#include<bits/stdc++.h>
using namespace std;
/*
   *Elements are stored in row major order
   ?Internal curly brackets are optional
   ?    int a[3][2] = {2,3,4,2,1,4};
   ?    int a[3][2] = {{2,3},{4,2},{1,4}};    

   ! First dimension can be omitted while initializing 
   ! int a[][2] = {{2,3},{4,2},{1,4}};
*/

// !        1. Fixed Size Arrays
// int main()
// {
//     int a[3][2]={{2,3},{4,2},{1,4}};
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// !       2. Variable size Arrays
// int main()
// {
//     int m=3,n=2;
//     int a[m][n];
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             a[i][j] = i+j;
//         }
//     }
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

/* 
    !    3. Double Pointer (heap)
    ! int **arr  = pointer pointing to array of pointer
    ?  Advantages - for each pointer array you can create your size of
    ?               individual row array that we called jagged array
    ? can be pass as dimension in arguments
    ? Disadvantage - not cache friendly;
*/
// int main()
// {
//     int m=3,n=2;
//     int **a = new int*[m];
//     for(int i=0;i<m;i++)
//     {
//         a[i] = new int[n];
//     }
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             a[i][j]=10;
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }


// }

// !   4. Array of pointer (Stack)
// int main()
// {
//     int m=3,n=2;
//     int *a[m];
//     for(int i=0;i<n;i++)
//     {
//         a[i]= new int[n];
//     }
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             a[i][j]=10;
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }

// !  5. Array of vector
// int main()
// {	
// 	int m = 3, n = 2;

// 	vector<int> arr[m];

// 	for(int i = 0; i < m; i++)
// 	{
// 		for(int j = 0; j < n; j++)
// 		{
// 			arr[i].push_back(10);
// 		}
// 	}

// 	for(int i = 0; i < m; i++)
// 	{
// 		for(int j = 0; j < n; j++)
// 		{
// 			cout << arr[i][j] << " ";
// 		}
// 	}


// 	return 0;
// }

//   !  6.  Vector of vectors
int main()
{	
	int m = 3, n = 2;

	vector<vector<int>> arr;

	for(int i = 0; i < m; i++)
	{
		vector<int> v;

		for(int j = 0; j < n; j++)
		{
			v.push_back(10);
		}

		arr.push_back(v);
	}

	for(int i = 0; i < arr.size(); i++)
	{
		for(int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j] << " ";
		}
	}


	return 0;
}
