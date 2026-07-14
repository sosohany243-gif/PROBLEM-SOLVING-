 PART A

  Q1
 5 6

 Q2
 Set

 Q3
 = ( if x = 5 it means value of x is 5) , == ( means if i has x,y   value of x is equal value of y )

 Q4
  STL’s is libraies consits of 1/ containers  (data structure) 2/alogrithm 3/iterator ( sepical type of pointers )

  Q5
  vector.push()

  Q6
  v.Capacity is 3  ( as vector is decleration with 3 value )

  Q7
  1

 Q8
 o[1]


  Q9
  Break ( once reach x stop loop ) , continue ( once reach x skip it move to after ) , return ( finish main function )

  Q10
  Pointer / store variable with address memory , iterator / search with using address ( Pointer)

   PART B

  Q1
Array ( orderd in squence ) , ( can duplicate ), ( size should defined ) , ( complixicty o(1))
Vector ( orderd in squence ) , ( can duplicate) , ( can not defined (zero) , if push ( == how push)) ,(complixity 0(1))
Set ( is built in binary search ) , ( never duplicate ) , ( can not defined (zero) , if insert ( == how insert)

 Q2
 functions ( it ease the process of editing not in main function )

 Q3
 Complixicty ( the amount of time and space the cide take ) , ( important to keep code run within time limit )

 PART C

  Q1
  ????


  Q2
  index 3

  Q3
  4

  PART D

   Q1
   #include <bits/stdc++.h>
using namespace st
int main(){
       int N;
      cin >> N;
      int arr[N];
    for(inti=0;i<N;i++)  {

        cin >> arr[i];
      }
      int freq[N]={0};
       for(inti=0;i<N;i++){
        freq[arr[i]]++;
       }
        for(inti=0;i<N;i++){
            if (freq[i]>0) {
                cout << freq[i] << endl;
            }

        }

        Q2
        #include <bits/stdc++.h>
using namespace st
int main(){
        int N;
   cin >> N ;
   int arr[N];
     for ( int i=0;i<N;i++) {
        cin >> arr[i];
        }
        int prefix[N];
        prefix[0]=arr[0];
        for ( int i=0;i<N;i++) {
            prefix[i]=prefix[i-1]+arr[i];
        }
        int Q;
        cin >> Q;
        while (Q--) {
            int L,R;
            cin >> L >> R;
             if (L==0) {
                cout << prefix[R] << endl;

             }
             else {
                cout << prefix[R]-prefix[L-1] << endl;
             }

        }
}

  PART E
  انا عندي سيستم مطلوب مني اضيف طلبه وابحث عنهم واشوف المتوسط  بنتيجه  وكل طالب عنده id ,grade ,name
  ???







