    #include <iostream>  
    using namespace std;     
    int main()  
    {  
        int n;  
        cin>>n;  
        int Fid[n+1];  
        Fid[1]=1;  
        Fid[2]=1;  
        
		for(int i=3;i<=n;i++)  
        {  
            Fid[i]=(Fid[i-1]+Fid[i-2])%10007;  
        }  
        cout<<Fid[n]<<endl;  
        return 0;  
    }  
