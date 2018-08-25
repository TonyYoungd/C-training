   /*
   看见题目描述相信第一想法是冒泡排序，但是就1<=n<=100000这一条件就知道使用冒泡排序暴力求解必然会超时，而且另一个非常重要的问题是冒泡并不能保证当前交换方式使不高兴程度和最小！

而又能发现小朋友最终从低到高排列，而交换的都是不满足前小后大这一规律很容易想到逆序数。而这也是正确的，小朋友最小交换次数就是该小朋友在所有逆序对中出现的次数和，而交换k次不高兴程度就增加k，所以最后每个小朋友的不高兴程度就是1到其交换次数k的和。这样只要能统计处该小盆友在所有逆序对（比如3，2，1中2在<3,2>,<2,1>中都出现所以它的k就为2）中出现的次数就能解题。

在统计时为了能在规定时间里完成100%的数据统计需要使用树状数组。

在编写时使用了四个数组fri[]记录输入小朋友原始数据，sum[]保存每个小朋友的交换总次数，t_ma[]为树状数组数据部分t_mi[]为树状数组枝干部分。

对于每一个数需要找到它前面比它大的数的个数和后边比它小的数的个数。在这里使用从先往后向t_ma[]填数统计每个小朋友前边比他高的人的个数每出现一个以当前小朋友高度为t_ma[]的下标将其值加一。这样可以避免两个小朋友身高相同时出现统计重复的可能。且在向sum[]内保存数据时用输入时该小朋友数据所在数组的小标。最后从fri[]中正向去数加入树状数组t_ma[]部分并维护t_mi[]部分。最后用当前录入小朋友总数减去之前录入比该小朋友低且包括自身的总数就为所得。而找它后边比它小则要从fri[]数组逆向录入，直接计算当前比该小朋友低的数量即为所得。

注意树状数组中下标为0的部分不用但小朋友的身高可以为0（万万没想到）所以数据一旦录入就对其加一！！
   */ 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	#include<stdio.h>/*try_fei_ge*/  
    #include<string.h>  
    #define MAX 1000000  
    #define MAX_ 100000  
    void MA(long long n);/*统计前面大的*/  
    void MA_(long long n);/*统计后面小的*/  
    long long fri[MAX_],sum[MAX],t_ma[MAX],t_mi[MAX];  
    int main()  
    {  
        long long n,i,un_ha;  
        scanf("%d",&n);  
        for(i=0;i<n;i++)  
        {  
            scanf("%d",&fri[i]);  
            fri[i]+=1;   
        }  
        memset(sum,0,sizeof(sum));/*只在这初始化该数组两次统计，结果要相加*/  
        MA(n);MA_(n);  
        for(un_ha=i=0;i<n;i++)  
            un_ha+=(1+sum[i])*sum[i]/2;  
        printf("%I64d",un_ha);  
        return 0;  
    }  
    void MA(long long n)        /*以下内容需理解树状数组*/  
    {  
        long long i,k,j;  
        memset(t_ma,0,sizeof(t_ma));  
        memset(t_mi,0,sizeof(t_mi));  
        for(i=0;i<n;i++)  
        {  
            t_ma[fri[i]]++;  
            for(k=fri[i];k<MAX;)  
            {  
                t_mi[k]+=1;  
                k+=(k&-k);   
            }  
            j=0;  
            for(k=fri[i];k;)  
            {  
                j+=t_mi[k];  
                k-=k&-k;  
            }  
            sum[i]+=i+1-j;  
        }     
    }  
    void MA_(long long n)  
    {  
        long long i,k;  
        memset(t_ma,0,sizeof(t_ma));  
        memset(t_mi,0,sizeof(t_mi));  
        for(i=n-1;i>=0;i--)  
        {  
            t_ma[fri[i]]++;  
            for(k=fri[i];k<MAX;)  
            {  
                t_mi[k]+=1;  
                k+=k&-k;  
            }  
            for(k=fri[i]-1;k;)  
            {  
                sum[i]+=t_mi[k];  
                k-=k&-k;  
            }  
        }   
    }  
