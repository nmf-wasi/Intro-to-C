#include<stdio.h>
#include<math.h>
int main()
{
    int input;
    scanf("%d",&input);
        float Yuna[input];
        
    for(int i=0;i<input;i++)
    {
        scanf("%f",&Yuna[i]);
    }

    for(int i=0;i<input;i++)
    {
        int ans1=ceil(Yuna[i]); 
        int ans2=floor(Yuna[i]); 
        int ans3=round(Yuna[i]); 
        float ans4=sqrt(Yuna[i]);
        double ans5=sqrt(Yuna[i]);
        printf("%f->ceil=%d floor=%d round=%d sqrt as float=%0.2f sqrt as double=%lf\n",Yuna[i],ans1, ans2,ans3,ans4,ans5);
    }
    
    return 0;
}