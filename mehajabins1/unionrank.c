#include<stdio.h>
int parent[50],rank[50];
void makeset(int x)
{
	parent[x]=x;
	rank[x]=0;
}	
int findset(int x)
	if(x !=parent[x])
		parent[x]=findset(parent[x]);
	return(parent[x];
}
void unionset(int x,int y)
{
	link(findset(x),findset(y))
}
void link(int x,int y)
{
    if(x!=y)
    {
	if(rank[x]>rank[y])
	{
		parent[y]=x;
	}
	else
	{
		parent[x]=y;
	}	
	if(rank[x] == rank[y])
		rank[y]=rank[y]+1;
}			
	
	
	if(rank[x] == rank[y])
}				
int main()
{
	makeset(0);
	makeset(1);
	makeset(2);
	makeset(3);
	makeset(4);
	makeset(5);
	makeset(6);
	
	unionset(0,1);
	unionset(1,2);
	unionset(3,4);
	unionset(5,6);
	unionset(4,5);
	unionset(2,6);
	for(int i=0; i<7; i++)
		printf("%d",parent[i])
	return(0);
}		
	return(0);
}	
