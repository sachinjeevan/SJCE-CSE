#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000];
    char str2[1000];
    char str3[1000];
    scanf("%s",str1);
    scanf("%s",str2);
    int i=strlen(str1)-1;
    int j=strlen(str2)-1;
    int carry=0,k=0;
    while(i>=0 && j>=0){
        int sum = (str1[i]-48)+(str2[j]-48)+carry;
        str3[k]=(sum%10)+48;
        k++;
        carry = (sum/10);
        i--;
        j--;
    }
    if(i!=-1){
        while(i>=0){
           int sum = (str1[i]-48)+carry;
        str3[k]=(sum%10)+48;
        k++;
        carry = (sum/10);
        i--;
        }
    }
    else{
         while(j>=0){
           int sum = (str2[j]-48)+carry;
        str3[k]=(sum%10)+48;
        k++;
        carry = (sum/10);
        j--;
        } 
    }
    if(carry!=0){
        str3[k]=carry+48;
        str3[k+1]='\0';
    }
    else{
        str3[k]='\0';
    }
    printf("%s",strrev(str3));
}