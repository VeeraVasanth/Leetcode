int romanToInt(char* s) {
    int l= strlen(s);
    int sum =0;
    for(int i=0;i<l;i++){
        if(s[i]== 'I'){
            sum +=1;
            if(s[i+1]=='V' || s[i+1]=='X'){
            	sum -=2;
			}
			
        }
        else if(s[i]=='V'){
            sum+=5;
        }
         else if(s[i]=='X'){
            sum+=10;
            if(s[i+1]=='L' || s[i+1]=='C'){
            	sum -=20;
			}
            }
        
         else if(s[i]=='L'){
            sum+=50;
           
        }
         else if(s[i]=='C'){
            sum+=100;
            if(s[i+1]=='D' || s[i+1]=='M'){
            	sum -=200;
			}
           
        }
        else if(s[i]=='D'){
            sum+=500;
            
        }
        else if(s[i]=='M'){
            sum+=1000;
            
        }
    }
    return sum;
}