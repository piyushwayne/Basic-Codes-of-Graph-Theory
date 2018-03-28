#include <stdio.h>
#include <stdlib.h>
int adj_mat[10][10];
void main()
{
	int option,i,j;
	for ( i = 1 ; i <= 10 ; i++ )
	{
		for ( j = 1 ; j <= 10 ; j++ )
			adj_mat[i][j]=0;
		
	}
	do
	{
	printf("\n Enter Your Choice ");
	printf("\n 1. Directed Graph ");
	printf("\n 2. Un-Directed Graph ");
	printf("\n 3. Exit ");
	printf("\n\n Select a proper option : ");
	scanf("%d", &option);
	switch(option)
	{
		case 1 : read_directedgraph();
			break;
		case 2 : read_undirectedgraph();
			break;
		case 3 : exit(0);
	} // switch
	}while(1);
}



int read_undirectedgraph(){
	int i, j, n,reply;
	printf("\n How Many Vertices ? : ");
	scanf("%d", &n);
	do{
	printf("To continue press 0 to print matrix print 5\n");
	scanf("%d",&reply);
	if(reply==0){
	read(adj_mat,n);
	}		

	}while(reply!=5);
	if(reply==5){
	printf("The Matrix is: \n");
	for ( i = 1 ; i <= n ; i++ )
	{
		for ( j = 1 ; j <= n ; j++ )
			printf("%d\t", adj_mat[i][j]);
		printf("\n");
	}		
	}
return;
}
int read_directedgraph(){
	
	int i, j, n,reply;
	
	printf("\n How Many Vertices ? : ");
	scanf("%d", &n);
	do{

	printf("To continue press 0 to print matrix print 5\n");
	scanf("%d",&reply);
	if(reply==0){
	readD(adj_mat,n);
	}		


	}while(reply!=5);
	if(reply==5){
	printf("The Matrix is: \n");
	for ( i = 1 ; i <= n ; i++ )
	{
		for ( j = 1 ; j <= n ; j++ )
			printf("%d\t", adj_mat[i][j]);
		printf("\n");
	}		
	}
return;
}
int read(int adj_mat[10][10],int n){
	int i,j;
	
	printf("Enter Source\n");
	scanf("%d",&i);
	printf("Enter Destination\n");
	scanf("%d",&j);
	adj_mat[i][j]=1;
	adj_mat[j][i]=1;
return;
}
int readD(int adj_mat[10][10],int n){
	int i,j;
	
	printf("Enter Source\n");
	scanf("%d",&i);
	printf("Enter Destination\n");
	scanf("%d",&j);
	adj_mat[i][j]=1;
return;
}
