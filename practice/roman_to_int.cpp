class Solution {
public:
    int romanToInt(string s) {
    int result=0;
    int character=0; 
        for ( int i=0; s[i]!='\0';i++){
         character ++;
     }   
    for (int j = 0 ; j<character; j++){
        if(s[j]=='M')
            result = result + 1000;
        else if(s[j]=='D')
            result = result + 500;
        else if(s[j]=='C')
            result = result + 100;
        else if(s[j]=='L')
            result = result + 50;
        else if(s[j]=='X')
            result = result + 10;
        else if(s[j]=='V')
            result = result + 5;
        else if(s[j]=='I')
            result = result + 1;
    }
    
    return result;
    }
};
