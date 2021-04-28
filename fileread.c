#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char ch[50],rev[50],str[50];
	int i,j,len;
	fp=fopen("newfile.txt","r");//reading text from a file
	fgets(ch,50,fp);
	printf("Original text is %s\n",ch);
	len=strlen(ch);
	i=len-1;
	j=0;
	for(i;i>=0;i--)
	{
		rev[j]=ch[i];//reversing the text
		j++;
	}
	printf("Reversed text is %s",rev);
	fclose(fp);
	fp=fopen("copyfile.txt","w");//searching and creating a new file
	strcpy(str,ch);//copying the text from one file to another file
	fprintf(fp,"%s",str);//printing the text in the new file
	fclose(fp);
}
