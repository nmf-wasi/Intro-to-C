#include<stdio.h>
int main()
{
    int n;
   scanf("%d",&n); 
    int Lia[n];
   for(int i=0; i<n;i++)
   {
    scanf("%d",&Lia[i]);
   } //scaning to array Lia done

    int m;
   scanf("%d",&m);
    int Yuna[m];
   for(int i=0; i<m;i++)
   {
   scanf("%d",&Yuna[i]);
   }//scaning to array Yuna done

    int Yeji[n+m]; //new array size is sum of both array sizes

    for(int i=0;i<n;i++)
        {
            Yeji[i]=Lia[i];
        } //taking input in Yeji from Lia

    int i=n;
    for(int j=0;j<m;j++)
        {   
            Yeji[i]=Yuna[j];
            i++;
        }//taking input in Yeji from Lia
        // i=n means, the loop will start from Yeji's index 6 and the index before 6 have values of Lia array

    for(int i=0; i<n+m; i++)
    {
        printf("%d ",Yeji[i]);
    }
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int n;
//    scanf("%d",&n); 
//     int Lia[n];
//    for(int i=0; i<n;i++)
//    {
//     scanf("%d",&Lia[i]);
//    } //scaning to array Lia done

//     int m;
//    scanf("%d",&m);
//     int Yuna[m];
//    for(int i=0; i<m;i++)
//    {
//    scanf("%d",&Yuna[i]);
//    }//scaning to array Yuna done

//     int Yeji[n+m]; //new array size is sum of both array sizes

//     int i;
//     for(i=0;i<n;i++)
//         {
//             Yeji[i]=Lia[i];
//         } //taking input in Yeji from Lia

//      for(int j = 0; j < m; j++) {
//         Yeji[i + j] = Yuna[j];
//     }
// //taking input in Yeji from Lia
//         // i=n means, the loop will start from Yeji's index 6 and the index before 6 have values of Lia array

//     for(int i=0; i<n+m; i++)
//     {
//         printf("%d ",Yeji[i]);
//     }
//     return 0;
// }