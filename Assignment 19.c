//Assignment 19 sol 1//
/*
#include<stdio.h>

int main()
{
    char str[100];
    int i,count = 0;

    scanf("%s",str);

    //iterate the string
    for(i = 0; str[i] != '\0'; i++)
    {
        //check each char with any vowel. 'a','e','i','o','u'.
        if( str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' ||
            str[i] == 'o' ||
            str[i] == 'u'    )
        {
            //if equal increment the count
            count++;
        }
    }

    //print the result
    printf("vowel count = %d\n",count);

    return 0;
}
*/

//Sol 2//
/*
 #include <stdio.h>
    #include <string.h>
    void main()
    {

        char name[10][8], tname[10][8], temp[8];
        int i, j, n;

        printf("Enter the value of n \n");
        scanf("%d", &n);
        printf("Enter %d names n \n", n);

        for (i = 0; i < n; i++)
        {
            scanf("%s", name[i]);
            strcpy(tname[i], name[i]);
        }

        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0)
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }

        printf("\n----------------------------------------\n");
        printf("Input NamestSorted names\n");
        printf("------------------------------------------\n");

        for (i = 0; i < n; i++)
        {
            printf("%s\t\t%s\n", tname[i], name[i]);
        }

        printf("------------------------------------------\n");

    }
*/

//Sol 3//
/*
#include<stdio.h>
int main()
{

  // declaring and initializing 2D String
  char language[5][10] =
     {"Java", "Python", "C++", "HTML", "SQL"};

  // Dispaying strings
  printf("Languages are:\n");
  for(int i=0;i<5;i++)
  puts(language[i]);

  return 0;
}
*/

//Sol 4//
/*
#include <stdio.h>

int main()
{
    int ara[10]={1,2,3,4,5,6,7,8,9,10};
    int i,is_found=-1,search_value;
    printf("Enter search value:\n");
    scanf("%d",&search_value);
    for(i=0;i<10;i++){
        if(ara[i]==search_value){
            is_found=i;
        }
    }

    if(is_found==-1){
        printf("Item not found\n");

    }else{
        printf("Item found at index on. %d\n",is_found);
    }

    return 0;
}
*/

//Sol 6//
/*
#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int flag = 0;

    printf("Enter a string:");
    scanf("%s", string1);

    length = strlen(string1);

    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
           }
        }

    if (flag) {
        printf("%s is not a palindrome", string1);
    }
    else {
        printf("%s is a palindrome", string1);
    }
    return 0;
}
*/

//Sol 10//
#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int choice, num, i;
    unsigned long int fact;

    while(1)
    {
        printf("1. Factorial \n");
        printf("2. Prime\n");
        printf("3. Odd\\Even\n");
        printf("4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter number:\n");
                scanf("%d", &num);
                fact = 1;
                for(i = 1; i <= num; i++)
                {
                    fact = fact*i;
                }
                printf("\n\nFactorial value of %d is = %lu\n\n\n",num,fact);
                break;

            case 2:
                printf("Enter number:\n");
                scanf("%d", &num);
                if(num == 1)
                printf("\n1 is neither prime nor composite\n\n");
                for(i = 2; i < num; i++)
                {
                    if(num%i == 0)
                    {
                        printf("\n%d is not a prime number\n\n", num);
                        break;
                    }

                }
                /*
                    Not divisible by any number other
                    than 1 and itself
                */
                if(i == num)
                {
                    printf("\n\n%d is a Prime number\n\n", num);
                    break;
                }

            case 3:
                printf("Enter number:\n");
                scanf("%d", &num);

                if(num%2 == 0) // 0 is considered to be an even number
                    printf("\n\n%d is an Even number\n\n",num);
                else
                    printf("\n\n%d is an Odd number\n\n",num);
                break;

            case 4:
                printf("\n\n\t\t\tCoding is Fun !\n\n\n");
                exit(0);    // terminates the complete program execution
        }
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
