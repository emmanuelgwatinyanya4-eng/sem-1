#include <stdio.h>
int main() {
    char s1[100], s2[100];
    int choice;

    printf("\n 1. String length");
    printf("\n 2. String copy");
    printf("\n 3. String reverse");
    printf("\n 4. String compare");
    printf("\n 5. String concatenate");
    printf("\n 6. String to UPPER case");
    printf("\n 7. String to lower case");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    getchar();  

    switch(choice) {

        case 1:
            printf("Enter a string: ");
            scanf("%[^\n]", s1);
            
            len=0;
            for(i=0;s1!='\0';i++0)
            len++ 
            
            printf("length of sstring = %d\n",len);
            break;

        case 2:
            printf("Enter source string: ");
            scanf("%[^\n]", s1);
            for(i=0; s1[i]!= '\0';i++)
            s2[i]=s1[i];
            s2[i]='\0';
            printf("Copied string = %s\n",s2);
            break;

        case 3:
            printf("Enter string s1: ");
            scanf("%[^\n]", s1);
            printf("Enter second string:");
            scanf("%[^\n]",s2);
            flag =0;
            for(i=0;s1[i !='\0'||s2 !='\0';i++])
			{
				if(s1[i] != s2[i])
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0)
			printf("Strings are EQUAL\n");
			else
			printf("strings are NOT equal\n");
			break;
            

        case 4:
            printf("Enter string s1: ");
            scanf("%[^\n]", s1);
            printf("Enter second string: ");
            scanf("%[^\n]",s2)
            
            for(i=0;s1[i !='\0'];i++)
            result[i]=s1[i];
			
			for(j=0;s2[j] !='\0';j++)
			result[i+j]=s2[i];
			result[i+j]='\0';
			printf("concatenated string =%s\n",result);
			break;           

        case 5:
            printf("Enter string s1: ");
            scanf("%[^\n]", s1);
           
           for(i=0; s1[i] !='\0',i++)
           if(s1[i] >= 'a' && s1[i] <= 'z')
           s1[i] = s1[i] -32;
           printf("Uppercase string = %s\n",s1); 
           break;

        case 6:
            printf("Enter string s1: ");
            scanf("%[^\n]", s1);
           
           for(i=0; s1[i] !='\0',i++)
           if(s1[i] >= 'A' && s1[i] <= '')
           s1[i] = s1[i] +32;
           printf("Uppercase string = %s\n",s1); 
           break;

        case 7:
            printf("Enter a string: ");
            scanf("%[^\n]", s1);
            len=0
            for(i=0;s1[i] !='\0';i++)
            len++;
            printf("Reversed string=");
            for(i=len-1;i>=0;i--)
            printf("%c",s1[i]);
            printf("\n");
            break;
            default:
            	printf("Invaid choice! Try again.\n");
    }

    return 0;
}
