#include<bits/stdc++.h> 
using namespace std; 

int deger(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
    
	return -1; 
} 
  		int romana(int sayi) 
{ 
    int onluksayi[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
    string sembol[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; 
    int i=12;     
    while(sayi>0) 
    
	{ 
      int bolum = sayi/onluksayi[i]; 
      sayi = sayi%onluksayi[i]; 
      while(bolum--) 
      { cout<<sembol[i]; } 
      i--; 
    } 
    
} 

int sayiya(string &str) 
{ 
   
    int c = 0; 
  
   
    for (int i=0; i<str.length(); i++) 
    { 
       
        int s1 = deger(str[i]); 
        if (i+1 < str.length()) 
        { 
            int s2 = deger(str[i+1]);    
            	if (s1 >= s2) 
            {
               c = c + s1; 
            } 
            	else
            	{ 
                c = c + s2 - s1; 
                i++; 
            	} 
        } 
        else
        { 
            c = c + s1;      
        } 
    } 
    return c; 
    
    
    
} 
  
int main() 
{ 
	int a;
	cout << "Roman rakamini onluk sayiya (1), Onluk sayiyi roman rakamina(2)"<<endl;
	cin >> a;
	switch(a)
	{
		case 1:
		{	string str; 
    		cin >> str;
    		cout << sayiya(str) << endl;
         break;
     	}
         
        case 2:
		{
        	int n;
         	cin >>n;
         	cout<< romana(n) << endl;
         	break;
		}
		
		
	}
		
/* kaynakça:	
https://www.youtube.com/watch?v=KwrAArXFF30&t=1s
https://www.cokbilgi.com/yazi/roma-rakamlari-nasil-yazilir-nedir-ceviri */
	
   
} 

