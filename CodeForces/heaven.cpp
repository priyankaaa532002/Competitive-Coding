// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     int l;
//     string data;
//     while(t>0){
//         cin>>l;
//         cin>>data;
//         int sum,res;
//         sum = 0;
//         res = 0;
//         for(int i = 0 ; i < l ; i++){
//             if(data[i]=='1'){
//                 sum +=1;
//                 res = (sum*100)/(i+1);
//                 if(res>=50){
//                 break;
//                 }
//             }
//         }
//         if(res>=50)
//         {
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"N0"<<endl;
//         }
//         t--;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// // int main()
// // {
// //     int t,s,m;
// //     cin>>t;
// //     while(t>0){
// //         cin>>m;
// //         cin>>s;
// //         cout<<m/s<<endl;
// //         t--;
// //     }
// // }

// int main()
// {
//     int t;
//     cin >> t;
//     int s, a, b;

//     while (t > 0)
//     {
//         cin >> s >> a >> b;
//         int count_a = 0;
//         int count_b = 0;
//         string data;
//         while (s > 0)
//         {
//             cin >> data;

//             if (data[0] == 'E' || data[0] == 'Q' || data[0] == 'U' || data[0] == 'I' || data[0] == 'N' || data[0] == 'O' || data[0] == 'X')
//             {
//                 count_a += a;
//             }
//             else
//             {
//                 count_b += b;
//             }

//             s--;
//         }
//         if (count_a > count_b)
//         {
//             cout << "SARTHAK" << endl;
//         }
//         else if (count_b > count_a)
//         {
//             cout << "ANURADHA" << endl;
//         }
//         else
//         {
//             cout << "DRAW" << endl;
//         }

//         t--;
//     }
// }