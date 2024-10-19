#include <iostream>
using namespace std;

// int main(){
//   int n, sum=0, i=1;
  
  
//   cout << "enter the value n : ";
//   cin >> n;

//   do
//   {
//     sum += i;
//     i++;
//   } while (i <= n);
//   cout << "the first number "<< n << " natutral number :" << sum << endl;
//   return 0;  
//   }





// int main()
// {
//   int n;
//   int i;

//   cout << "enter the number :";
//   cin>>n;

//   for ( i = 1; i <=10; i++)
//   {
//     cout << n << " x " << i << " = " << n*i  << endl; 
//   }
  
//     return 0 ;
//   }
  


int main(){
  int n, sum=0, i=1;
  
  
  cout << "enter the value n : ";
  cin >> n;

  do
  {
    sum= n * (n-1);
  } while (i >= n);
  cout << "the first number "<< n << " factorial number :" << sum << endl;
  return 0;  
  }