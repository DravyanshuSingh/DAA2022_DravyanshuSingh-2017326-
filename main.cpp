//
//  main.cpp
//  Cpp basics
//
//  Created by Dravyanshu Singh on 20/05/21.
//

#include <iostream>
using namespace std;
/*int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}*/


//Even odd
 /*int main()
{
    int x;
    cout << "Enter the number    4";
    cin >> x;
    if(x%2==0)
        cout<< "Even  ";
    else
        cout<< "Odd  ";
}*/

//positive negative

/*int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(n>0)
        cout<< "Positive \n";
    else if (n<0)
        cout << "Negative \n";
    else
        cout << "zero \n";
}*/

//Positive even or negative
/*int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n>0 && n%2==0)
    {
        cout << "positive even";
    }
    else if(n<0 && n%2==0)
    {
        cout<< "Negative even";
    }
    else if(n%2!=0 && n>0)
    {
        cout << "Positive odd number";
    }
    else if(n%2!=0 && n<0)
    {
        cout << "Negative odd number";
    }
    else
        cout << "zero";
}*/

//Largest of three numbers
 
/*int main()
{
    int x,y,z;
    cout << "ENTER 3 nubers ";
    cin>>x>>y>>z;
    if(x>y && x>z)
        cout << "x is greatest";
    else if(y>x && y>z)
        cout << "y is greatest";
    else
        cout << "z is gratest";
}*/

//Calculator switch case

/*int main()
{
    int x,y,a,s,m;
    cout<< "Enter numbers";
    cin >>x>>y;
    cout << "1.Add \n " << "2.Subtract \n" << "3.Multiply \n ";
    int choice;
    cout<< "Enter your choice";
    cin>>choice;
    switch (choice) {
        case 1:
            a=x+y;
            cout <<a;
            break;
            
        case 2:
            s=x-y;
            cout <<s;
            
            break;
        case 3:
            m=x*y;
            cout <<m;
            break;
        default: cout<< "Enter correct choice";
    }
}*/

// Leap Year

/*int main()
{
    int y;
    cout << "Enter year : ";
    cin>>y;
    
    if(y%4==0 && y%100!=0)
    {
        cout << "Leap year";
    }
    else if(y%400==0)
        cout <<"leap year";
    else
        cout << "Not a leap year";
}*/

//*************************PRIME FACTORIZATION************************
/*int ifPrime(int p)
{
    for(int i=2;i<p;i++)
    {
        if(p%i==0)
            return false;
    }
    return true;
}


void primeFact(int x)
{
    int i;
    for(i=2;i<=x;i++)
    {
        if(ifPrime(i))
        {int z=i;
              while(x%z==0)
             {
                cout<<i<<" ";
                z=z*i;
             }
        
          }
    }
}
int main()
{
    int n;
    cout <<"Enter the Number:";
    cin>>n;
    primeFact(n);
}*/

//*********************FIRST DIGIT OF A NUMBER********************

/*int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    for(int i=1000 ; i<=n ;)
    {
       
        n=n/10;
    
    }
    cout<<n<<" ";
}*/



//**********************PROGRAM TO PRINT TABLES*************************


/*int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int x=1;x<=n;x++)
    {
        for(int y=1;y<=10;y++)
        {
            cout<<(y*x)<<" ";
        }
        cout<<" \n";
    }
    
}*/



//******************SMALLEST DIVISOR GREATER THAN 1********************

/*int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int i;
    for( i=2;i<=num;i++)
    {
        if(num%i==0)
            break;
    }
    cout<<i<<"\n";
}*/

    
//***************DIVISIORS OF NUMBER*****************

/*int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int i;
    for( i=1;i<=num;i++)
    {
        if(num%i==0)
            cout<<i<<" ";
        else
            continue;
            
    }
    
}*/


//***************COUNT Number OF DIGITS******************

/*int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int i;
    for( i=1; ;i++)
    {
        if(n/10==0)
            break;
        n=n/10;
        
    }
    cout<<i<<"\n";
    
}*/




/*int main()
{
    int x,y;
    cout<<"Enter the numbers";
    cin>>x>>y;
    int a=min(x,y);
    int gcd=1;
    for(int i=1;i<=a;i++)
    {
        if(x%i==0&&y%i==0)
        {
            gcd=i;
        }
    }
    cout<<gcd;
}*/

/*int main(){
    int x,y;
    cin>>x>>y;
    int start=max(x,y);
    int end=x*y;
    int lcm=start;
    for(int i=start;i<=end;i++)
    {
        if(i%x==0&&i%y==0)
        {
            lcm=i;
            break;
            
        }
        
       
    }
    cout<<lcm;
}*/

/*int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            cout<<"not a prime";
        
    }
    cout<<"prime number";
}*/


/*int main(){
    int n;
    cin>>n;
    int fibo=0;
    int a=1;
    cout<<a;
    int b=1;
    cout<<b;
    for(int i=1;i<n;i++)
    {
        fibo=a+b;
        cout<<fibo<<"  ";
        a=b;
        b=fibo;
        
    }
}*/


/*int main(){
    int n;
    cin>>n;
    while(1)
    {
        n++;
        int i;
        for( i=2;i<n;i++)
        {
            if(n%i==0)
                break;
            
        }
        if(i==n)
        {
            cout<<i;
            break;
        }
    }
        
}*/



// ------TABLE BETWEEN TWO NUMBERS---------

/* int main()
{
     int n1,n2,table;
     cout<<"Enter two numbers:";
     cin>>n1>>n2;
     for(int i=n1;n1<=n2;n1++)
     {
         for(int i=1;i<=10;i++)
         {
             table=n1*i;
             cout<<table<<endl;
         }
         cout<<"\n";
     }
 }*/



//---------PALINDROME BETWEEN TWO NUMBERS-----------

/*int main()
{
    int n1,n2,pal,tnum,rem;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++)
    {
        pal=0;
        tnum=i;
        while(tnum>0)
        {
            rem=tnum%10;
            pal=(pal*10)+rem;
            tnum=tnum/10;
        }
        if(pal==i)
        {
            cout<<i<<endl;
        }
    }
}*/



//-----------PERFECT NUMBER BETWEEN TWO NUMBERS--------------


/*int main()
{
    int n1,n2,sum;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++)
    {
        sum=0;
        for(int j=0;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
            cout<<i<<endl;
    }
}*/




//---------TWIN PRIME-------

/*int main()
{
    int n1,n2,dif;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
 for(int i=2;i<n1;i++)
 {
     if(n1%i==0)
     {
         cout<<n1<<"is not prime";
         exit(0);
     }
    
 
 }
    for(int j=2;j<n2;j++)
    {
        if(n2%j==0)
        {
            cout<<n2<<"is not prime";
            exit(0);
        }
            
    }
    
    dif=n2-n1;
    if(dif==2 || dif==-2)
        cout<<"twin prime"<<endl;
    else
        cout<<"not twin prime"<<endl;
}*/




//---------Special 2 digit number---------
/*int main()
{
    int num,sum,pro,r,spe,tnum;
    cout<<"Enter the number:";
    cin>>num;
        sum=0;
        pro=1;
        tnum=num;
    while(tnum>0)
    {
        r=tnum%10;
        sum=sum+r;
        pro=pro*r;
        tnum=tnum/10;
    }
        spe=sum+pro;
        if(spe==num)
            cout<<"special number"<<endl;
        else
            cout<<"nSn";
}*/


//---------EVIL NUMBER--------



/*int main()
{
    int num,rem,bin,count=0;
    cout<<"Enter the number:";
    cin>>num;
    bin=0;
    while(num>0)
    {
        
        rem=num%2;
        bin=(bin*10)+rem;
        num=num/2;
        if(rem==1)
            count++;
    }
    cout<<bin<<"  "<<count<<endl;
    if(count%2==0)
        cout<<"Evil number"<<endl;
    else
        cout<<"Not a evil number"<<endl;
}*/


/*int main()
{
    int row,column;
    cout<<"enter row and column:";
    cin>>row>>column;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
            cout<<"*"<<" ";
        cout<<endl;
    }
}*/



/*int main()
{
    int row,column;
    cout<<"enter row and column:";
    cin>>row>>column;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if(i==1 || i==row)
                cout<<"*";
            else if(j==1 || j==column)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

}*/



/*int main()
{
    int row;
    cout<<"enter row and column:";
    cin>>row;
    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
   
}*/



/*int main()
{
    int row,column;
    cout<<"enter row and column:";
    cin>>row>>column;
    
    for(int i=1;i<=row;i++)
    {
        int k=1;
        for(int j=column;j>=i;j--,k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
}*/



/*int main()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<endl;
        
    }
}*/



/*int main()
{
    int row,column;
    cout<<"Enter the rows and column:";
    cin>>row>>column;
    char k='A';
    for(int i=1;i<=row;i++)
    {
        
        for(int j=column;j>=i;j--)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}*/


/*int main()
{
    int n;
    
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        int j;
        for( j=1;j<=n-i;j++){
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}*/




/*int main()
{
    int n;
    cout<<"Enter the number of Rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        int k=1;
        for(;j<=n;j++){
            cout<<k++;
        }
        k=i-1;
        for(;j<=n+i-1;j++){
            cout<<k--;
        }
        cout<<endl;
    }
}*/



/*int main()
{
    int n;
    cin>>n;
    for(int i =1;i<=n;i++){
        int k=0;
        k=(2*i)-1;
        for(int j=1;j<=i;j++){
            
                cout<<k;
                k=k-2;
                if(k<0)
                    break;
            
            
        }
        cout<<endl;
    }
}*/



/*int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=0;
        k=(2*i)-1;
        int j;
        for(j=n;j>=1;j--){
            cout<<k;
            k=k+2;
            
            }
       int t =1;
            for( ;j<i;j++){
                cout<<k;
                t=t+2;
            
        }
        cout<<endl;
    }
}*/


/*int main()
{
    int n,k;
    cin>>n;
    for(int i=n;i>=1;i--){
        k=1;
        for(int j=1;j<=n;j++){
            if(i<=j){
                cout<<'a';
            }
            else{
               
                
            }
        }
        cout<<endl;
            
    }
}*/

//-----Menu driven program-----------


/*#include<math.h>

int main()
{
    int n,p=0,q,d,m=10;
    cout<<"Enter the number :";
    cin>>q;
    switch (q)
    {
    case 1:
    cout<<"Enter the number :";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        p++;
    }
    if(p>=1)
    {
        cout<<n<<" is composite number";
    }
    else
    cout<<"Not composite number";
    break;
    case 2:
    cout<<" Enter the number :";
    cin>>n;
    while(n!=0)
    {
d=n%10;
m=min(m,d);
n=n/10;
}
cout<<m;
    break;
default:
    cout<<"Error";
}
}*/




/*int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
    int   k=i;
      int l=1;
        for(int j=n;j>0;j--)
 { cout<<" ";
 if(i<=j)
  { cout<<2*k-1;
   k++;
  }
  else
   {
   cout<<2*l-1;
  l++;  }

 }
 cout<<endl;
    }}*/




/*int main()
{
    int n,i,j;
    cout<<"Enter the number :";
    cin>>n;

    for( i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<" ";
            
           if(i>=j)
{
        cout<<i;}
        else
        
        cout<<j;
        }

cout<<endl;
    }
}*/



/*void Reverse(string &s,int start,int end)
{
    while(start<end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
}
int main()
{
    string s;
    getline(cin,s,'\n');
    
   
    int start=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            Reverse(s,start,i-1);
            start=i+1;
        }
    }
    Reverse(s,start,s.length()-1);
    Reverse(s,0,s.length()-1);
    
    cout<<s<<endl;
}*/


/*#include<iostream>
using namespace std;
void arrayFunc(int [],int ,int);
int main()
{
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the sum :";
    int sum=0;
    cin>>sum;
    arrayFunc(a,n,sum);

cout<<"Pair of elements whose sum is "<<sum<<"are :";
}
void arrayFunc(int a[],int size,int sum)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]+a[j]==sum)
            {
                cout<<a[i]<<"+"<<a[j]<<"="<<sum<<endl;
            }
        }
    }
}


#include<iostream>
using namespace std;
void arraySort(int [],int,int [],int);
int main()
{
    int n1,n2;
    cout<<"Enter the size of the first array :";
    cin>>n1;
    int a[n1];
    cout<<"Enter the elements of first array :";
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of the second array :";
    cin>>n2;
    int b[n2];
    cout<<"Enter the elements of second array :";
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    arraySort(a,n1,b,n2);
}

void arraySort(int A[],int p,int B[],int q)
{
    int C[100],i,m=0,temp;
    for(i=0;i<p;i++)
    {
        C[m]=A[i];
        m++;
    }
    for(int j=0;j<q;j++)
    {
        C[m]=B[j];
        m++;
    }
    for(i=0;i<m-1;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(C[i]>C[j])
            {
                temp=C[i];
                C[i]=C[j];
                C[j]=temp;
            }

        }
    
    }
    int j=0;
    for(i=0;i<m;i++)
    {
        if(i<p)
        {
            A[i]=C[i];
            }
            else
{            B[j]=C[i];
j++;
}
    }
    cout<<"A[]=";
    for(int i=0;i<p;i++)
    {
        cout<<A[i]<<",";
    }
    cout<<endl;
    cout<<"B[]=";
    for(int i=0;i<q;i++)
    {
        cout<<B[i]<<",";
    }

}*/



/*string decimal_to_binary(int num){
    string s="";
    int rem;
    while(num>0){
        rem=num%2;
        s=s+to_string(rem);
        num=num/2;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    int num;
    cin>>num;
    string bin=decimal_to_binary(num);
    cout<<bin;

    return 0;
}*/


/*int main()
{
    string s;
    int start,end;
    getline(cin,s);
     end=s.length()-1;
     start=0;
    while(start<end)
    {
        if(s[start]!=s[end]){
            cout<<"NP";
            return 0;
        }
            
        else
        {
            start++;
            end--;
        }
        
    }
    cout<<"Yes";

    
}*/

/*int main()
{
    string str;
    string nstr;
    cin>>str;
    nstr=str;
    reverse(nstr.begin(),nstr.end());
    if(str==nstr)
        cout<<"Palindrome";
    else
        cout<<"NP";
}*/

/*int main()
{
    string str1;
    string str2;
    cin>>str1>>str2;
    int i=0;
    int j=0;
    int l=str1.length()-1;
    int m=str2.length()-1;
    while(l>=0)
    {
    if(str1[i]==str2[j])
    {
        i++;
        j++;
    }
    else
        i++;

    }
    if(i==l && j==m)
        cout<<"Subsequent";
    else if(j==m)
        cout<<"Subsequent";
    else
        cout<<"NS";
        
    
    
}*/




/*int main()
{
    string s;
    cin>>s;
    int count[26]={0};
    for(int i=0;i<s.length();i++)
    {
        count[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]>0)
            cout<<(char)(i+'a')<<"="<<count[i]<<endl;
    }
}*/



/*const int CHAR=256;
bool areAnagram(string &s1,string &s2)
{
    if(s1.length()!=s2.length())
        return false;
    int count[CHAR]={0};
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<CHAR;i++)
        if(count[i]!=0)
            return false;
    return true;
}

int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    cout<<areAnagram(s1,s2);
}*/


/*int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j]){
                cout<<i;
                exit(0);
            }
        }
    }
    
        cout<<"-1";
    
}*/



/*void reverse(string &str,int low, int high)
{
    while(low<=high)
    {
        swap(str[low],str[high]);
        low++;
        high++;
    }
}

void reverseWord(string &str,int n)
{
    int start=0;
    for(int end=0;end<n;end++)
    {
        if(str[end]== ' ')
        {
            reverse(str,start,end-1);
            start=end+1;
        }
    }
   reverse(str,start,n-1);
    reverse(str,0,n-1);
    cout<<str;
    
}


int main()
{
    string str;
    getline(cin, str);
    string nstr;
    int l=str.length();
    reverseWord(str,l);
    
    
}*/


/*void patSearching( string &str1, string &str2)
{
    int m=str2.length();
    int n=str1.length();
    for(int i=0;i<n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(str1[i+j]!=str2[j])
                break;
        }
        if(j==m)
            cout<<i<<endl;
    }
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    patSearching(str1,str2);
}*/


