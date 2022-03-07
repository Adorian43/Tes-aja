// Luas dan Keliling segitiga
// #include<iostream> 

// using namespace std;

// int main(){

//   /*
//   L = a * t / 2
//   L = Luas
//   a = Alas
//   t  = Tinggi

//   K = a + b + c
//   K = Keliling
//   a = alas
//   b = sisi 1
//   c = sisi 2
// */

//   int a, b, c , t , K, L ;

//   cout << "Masukan Alas : ";
//   cin >> a; 

//   cout << "Masukan tinggi segitiga : ";
//   cin >> t;
  

//   L = a * t /2 ;


//   cout << "Luas Segitiga : " <<L <<endl;

//   return 0;
// }

// // Luas dan Keliling segitiga
// #include<iostream> 

// using namespace std;

// int main(){

//   /*
//   L = a * t / 2
//   L = Luas
//   a = Alas
//   t  = Tinggi

//   K = a + b + c
//   K = Keliling
//   a = alas
//   b = sisi 1
//   c = sisi 2
// */

//   float a, b, c , t , K, L ;

//   cout << "Masukan Alas : ";
//   cin >> a; 

//   cout << "Masukan sisi segitiga 1 : ";
//   cin >> b;

//   cout << "Masukan sisi segitiga 2 : ";
//   cin >> c;

//   cout << "Masukan tinggi segitiga : ";
//   cin >> t;

  
  
//   L = a * t / 2 ;
  
//   K = a + b + c ;



//   cout << "Luas Segitiga : " << L <<endl;
//   cout << "Luas Segitiga : " << K <<endl;

//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int a;
//   printf("Masukkan sebuah bilangan : ");
//   cin >> a;
//   if (a % 2 == 0){
//     cout << "Bilangan " << a << " adalah genap." << endl;
//   } else {
//     cout << "Bilangan " << a << " adalah ganjil." << endl;
//   }
//   return 0;
// }
	
// //decision (if, else,), for loop, 


/* C++ program for Memoized version
for nth Fibonacci number */
#include <bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 100
 
int lookup[MAX];
 
/* Function to initialize NIL
values in lookup table */
void _initialize()
{
    int i;
    for (i = 0; i < MAX; i++)
        lookup[i] = NIL;
}
 
/* function for nth Fibonacci number */
int fib(int n)
{
    if (lookup[n] == NIL) {
        if (n <= 1)
            lookup[n] = n;
        else
            lookup[n] = fib(n - 1) + fib(n - 2);
    }
 
    return lookup[n];
}
 
// Driver code
int main()
{
    int n = 40;
    _initialize();
    cout << "Fibonacci number is " << fib(n);
    return 0;
}
 




