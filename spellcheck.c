#include<stdio.h>
#include<string.h>
#define str_count 10
#define str_length 10
int main()
{
int i,j,k,l,len1[10],len2[10],count1=0,count2=0,count;
char str1[str_count][str_length], str2[str_count][str_length]; // Can store 10 strings,Length of each is 10
char HS[]="#";

//design

printf("\t\t\t\t\t\t\tSPELL CHECKER\t\t\t\t\t\t\t");
printf("\n........................................................................................................................\n");
printf("Enter the dictionary: \n");

//reading strings for dictionary

for(i=0; i<str_count; i++)
{
   scanf("%s",str1[i]);
   count1++;
   len1[i] = strlen(str1[i]);     //storing the lengths of each string
   if(strcmp(HS,str1[i])==0){     //Break out from the loop if input is #

   break;
}
}

printf("Enter the words to check: \n");
//reading strings that are to be checked

for(i=0; i<str_count; i++){

    scanf("%s",str2[i]);
    count2++;
    len2[i] = strlen(str2[i]);
    if(strcmp(HS,str2[i])==0){

    break;
}

}

printf("Corrected words: \n");
//Logic to make corrections to the strings

for(i=0; i<count1-1; i++){                       //to prevent printing garbage value , run the loop till count-1
count=0;
    for(j=0; j<count2-1; j++){

        if((strcmp(str1[j],str2[i])==0)){      //check if the strings matches between string1 & string2

        printf("%s: correct\n",str2[i]);

        }else{

        if(len1[i]==len2[j]){
                if(strcmp(str1[0],str2[0])==0||strcmp(str1[count1-2],str2[count2-2])==0){

        count++;
    }
    if(count=1)
        printf("%s: %s \n",str2[i],str1[j]);
    }

    }

    }

    }


return 0;

}
