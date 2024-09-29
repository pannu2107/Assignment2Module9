//Question 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

//Question 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=n-i+1;j++){
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
// }

//Question 3
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=65;j<=65+n-i;j++){
//             cout<<(char)j<<" ";
//         }
//         cout<<endl;
//     }
// }

//Question 4
//#include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             for(int j=1;j<=i;j++) cout<<j<<" ";
//         }
//         else{
//             for(int j=65;j<=64+i;j++) cout<<(char)j<<" ";
//         }
//         cout<<endl;
//     }
// }

//Question 5
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin>>n;
//     int nost=1;
//     for(int i=1;i<=2*n+1;i++){
//         for(int j=1;j<=nost;j++){
//             cout<<"*";
//         }
//         if(i<n) nost++;
//         else nost--;
//         cout<<endl;
//     }
// }

//Question 6
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || j==1 || i==n || j==n ){
//                 cout<<"*"<<" ";
//             }
//             else cout<<"  ";
//         }
//         cout<<endl;
//     }
// }

//Question 7
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin>>n;
//     int nos=n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=nos;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//         nos--;
//         cout<<endl;
//     }
// }

//Question 8
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//Question 9
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin>>n;
//     int nos=n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=nos;j++){
//             cout<<" ";
//         }
//         nos--;
//         for(int j=65;j<=64+i;j++){
//             cout<<(char)j;
//         }
//         cout<<endl;
//     }
// }

//Question 10
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

//Question 11
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value : ";
//     cin>>n;
//     int nos=n-1;
//     int nost=1;
//     for(int i=1;i<=2*n+1;i++){
//         for(int j=1;j<=nos;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=nost;j++){
//             cout<<"*";
//         }
//         if(i<n) nos--;
//         else nos++;
//         if(i<n) nost++;
//         else nost--;
//         cout<<endl;
//     }
// }

