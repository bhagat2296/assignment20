#include <stdio.h>
#include <stdlib.h>

/*int main()                                                              //Question 1
{
    int x,y;
    printf("enter values in two variables:");
    scanf("%d%d",&x,&y);
    printf("values before swapping is %d and %d",x,y);
    swap(&x,&y);
    printf("\nvalues after swapping is %d and %d",x,y);
    return 0;
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}*/


/*int main()                                        //Question 2
{
    char a[20];
    char b[20];
    char temp[20];
    printf("enter first string\n");
    gets(a);
    printf("enter second string\n");
    gets(b);

    printf("before swapping\n");
    puts(a);
    puts(b);


    printf("\nafter swapping\n");
    swap(a,b);

    puts(a);
    puts(b);
}

void swap(char *x, char *y)
{
    char *temp=malloc(strlen(x)+1);

    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);
}*/


/*int main()                                      //Queestion 3
{
    int n;
    printf("enter how many number you want to enter in the array\n");
    scanf("%d",&n);
    int a[n];

    printf("enter element in the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(&a,n);

    printf("sorted array is:\n");

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

void sort(int *a, int n)
{
    int temp=0;

    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    {
        if(i!=j)
        {
            if(*(a+i)>*(a+j))
            {
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }

}*/



/*int main()                                                          //Question 5
{
    int x,y;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);

    printf("maximum numbers between %d and %d  nmbr is %d",x,y,max(&x,&y));
}

void max(int *a,int *b)
{
    int max=0;
    if(*a>*b)
        max=*a-*b-2;
        else
            max=*b-*a-2;
        return max;
}*/


/*int main()                                              //Question 6
{
    char str[100];
    printf("enter string\n");
    gets(str);

   printf("length of string is %d", len_of_string(str));

}

int len_of_string(char *s)
{
    int length=strlen(s);
    return length;
}*/


/*int main()                                          //Question 7
{
    char str[100];
    printf("enter string\n");
    gets(str);

    vow_conso(str);
}
void vow_conso(char *a)
{
    int vow=0,conso=0;
    for(int i=0;*(a+i);i++)
    {
        if(*(a+i)==97||*(a+i)==101||*(a+i)==105||*(a+i)==111||*(a+i)==117)   //only for small letter case
            vow++;
        else
        conso++;
    }

    printf("number of vowel is:- %d\n and \nnumber of consonent is:- %d",vow,conso);
}*/


/*int main()                          //Question 8
{
    int n;
    printf("enter how many number you want to enter in the array: ");
    scanf("%d",&n);
    int arr[n];

    printf("enter value in the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("sum of array elements is %d",sum(arr,n));
}

int sum(int *a, int n)
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        result=result+*(a+i);
    }
    return result;
}*/




/*int main()                          //Question 9
{
    int n;
    printf("enter how many number you want to enter in the array: ");
    scanf("%d",&n);
    int arr[n];

    printf("enter value in the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
}

void reverse(int *a, int n)
{
    printf("reverse order of an array is\n");

    for(int i=n-1;i>=0;i--)
    {
        printf("%d\n",*(a+i));
    }

}*/



/*int main()                          //Question 10
{
    //int n;
    //printf("enter how many character you want to enter in the string: ");
    //scanf("%d",&n);
    char str[100];

    printf("enter string\n");
    gets(str);

    reverse(str);
}

void reverse(char *a)
{
    printf("reverse order of the string is \n");
    int l=strlen(a);

    for(int i=l;*(a+i-1);i--)
    {
        printf("%c",*(a+i-1));
    }

}*/



