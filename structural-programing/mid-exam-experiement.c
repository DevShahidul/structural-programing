#include <stdio.h>
// int main(){
//     int arr[8]={8, 1,6,4,9,5,7,3};
//     int i, MinE=arr[0], MaxE=arr[0];
//     for(i=0; i<=7; i++){
//         if(arr[i]<MinE)
//         MinE=arr[i];
//     }
//     for(i=0; i<=7; i++){
//         if(arr[i]>MaxE)
//         MaxE=arr[i];
//     }
//     int sum=MaxE+MaxE;
//      printf("%d", sum);
    
//     return 0;
// }


// int main(){
//     int x=3;
//     float y=3.0;
//     if(x==y)
//     printf("X and Y are equal");
//     else
//     printf("x and y are not equal");
    
//     return 0;
// }

// int main(){
//     int x=2, y=3;
//     int p=(y++)+(++y)+(x++)+(++x);
//     printf("%d", p);
    
//     return 0;
// }

// int main(){
//     int j=10;
    
//     printf("%d\n", j++);
    
//     getch();
//    // return 0;
// }

// int main(){
//     int i, m=0;
//     for(i=1; i<=10; i++){
//         m=m+i;
//     }
//     printf("%d", m);
    
//     //getch();
//    return 0;
// }

// ans 55

// void main(){
//     int cnt=1;
//     do{
//         printf("%d", cnt);
//         cnt+=1;
//     }while (cnt>=10);
//     printf("After loop cnt=%d", cnt);
    
//     printf("\n");
    
//     //getch();
//    //return 0;
// }


// int main(){
//     int i,j,k,m=0;
//     for(i=4;i>=3; i--){
//         for(k=1; k<=2; k++){
//             for(j=5;j>=3; j--){
//                 m++;
//             }
//         }
//     }

//     printf("%d", m);
    
//     //getch();
//    return 0;
// }

// int main(){
//     int i=1;
//     int y=5;
//     do{
//         printf("y=%d\n", y);
//         y++;
//     }
//     while (y<=1);
//     //getch();
//    return 0;
// }

// Ans: y=5

// int main(){
//     int main = 3;
//    printf("%d", main);
//     //getch();
//    return 0;
// }

// Ans 3

// int main(){
//     int arr[8] ={1, 3, 6,4,2,5,7,8};
//     int i, MinP=0,MaxP=0;
//     for(i=0;i<=7; i++){
//         if(arr[i]<arr[MinP])
//         MinP=i;
//     }
//     for(i=0;i<=7; i++){
//         if(arr[i]> arr[MaxP])
//         MaxP=i;
//     }
//     for(i=MaxP-1; i>MinP; i--){
//         if(arr[i]%2!=0)
//         printf("%d", arr[i]);

//     }
//     //getch();
//    return 0;
// }

// Ans 753

// int main(){
//     int j = 1;
//     while (j<=255)
//     {
//         j++;
//     }
    
//    printf("%d", j);
//     //getch();
//    return 0;
// }

// Ans 256

// int main(){
//     int arr[8] ={8,1,6,4,9,5,7,3};
//     int i, k=arr[3], m=arr[6];
//     if(k<m)
//         for(i=m-2;i>=k+1;i--)
//         printf("%d", arr[i]);
//     //getch();
//    return 0;
// }

// Ans 5


// int main(){
//     printf("hello\tworld\n");
//     printf("hello\b\b\bworld\n");
//     //getch();
//    return 0;
// }

// Ans hello world heworld

// int main(){
//     int arr[8] ={8,1,6,4,9,5,7,3};
//     int i, k=0;
//     for(i=0;i<=2; i++);
//     for(i;i<=4;i++){
//         printf("%d", arr[i]);
//     }
//     //getch();
//    return 0;
// }

// Ans 49


// void main(){
//     int x=4+8/4-2*1;
//     //getch();
//    //return 0;
// }

// Depends on compiler



// int main(){
//     int k;
//     {
//         int k;
//         for(k=0;k<10;k++);
//     }
//     //getch();
//    //return 0;
// }

// Ans yes

// int main(){
//     int i=3;
//     int k=i%2;
//     printf("%d\n", k);
//     //getch();
//    //return 0;
// }

// Ans 1

// int main(){
//     int i=3;
//     int k=i%2;
//     printf("%d\n", k);
//     //getch();
//    //return 0;
// }

// int main(){
//     int i=0;
//     for(;i<=5; i++);
//     printf("%d", i);
//     //getch();
//    return 0;
// }

// Ans 6

// int main(){
//     int x=20;
//     int y=20;
    
//     if(20<y)
//         printf("True");
//         printf("False");
//         printf("Rohim");

    
//     //getch();
//    return 0;
// }


int main(){
    int i,j,count;
    count=0;
    for(i=0; i<5; i++){
        for(j=0;j<5;j++){
            count++;
        }
    }
        printf("%d", count);

    
    //getch();
   return 0;
}