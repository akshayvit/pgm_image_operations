#include <stdio.h>
#include <string.h>

int pixel[360][250]; //width and height are manually taken by taking a glance at the pgm file.

main()
{
	FILE* fp;
	fp=fopen("D:\\mona.pgm","rb");
	char d[1000];
	int cntl=1,row=0,i,j,col=0;
	char* token;
	while(fgets(d,1000,fp)!=NULL && row<360)
	{
		
		if(cntl>4)
		{
			//printf("%d\n",strlen(d));
			
			
//			d[last+1]='\0';
		    //if(cntl==5)
		    //   printf("Character:%sgap\n",d);
		//	fputs(d,stdout);
		    //printf("Length: %d\n",strlen(d));
			col=0;
			for(i=1;d[i]!='\0' && col<250;)
			{
				
				while(d[i]!=' ' && d[i]!='\n')
				{
					
					//printf("%d\n",i);
					//printf("%c",d[i]);
					pixel[row][col]=pixel[row][col]*10+(d[i]-48);
					i++;
				}
			
				i+=1;
				col+=1;
			}
			row++;
		}
		cntl++;
	}
	for(i=0;i<360;i++)
	{
	//	printf("i:%d\n",i);
		for(j=0;j<250;j++)
		{
			printf("%d ",pixel[i][j]);
		}
		printf("\n");
	}
}
