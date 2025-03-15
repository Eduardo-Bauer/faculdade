#include <stdio.h>
#include <stdlib.h>
#define N 6
#define M 7

void gera_matriz ( int mat[N][N])
{
	int i, j;
	for(i=0; i<N; i++)
	{
      for(j=0; j<N; j++)
	  	{
          mat[i][j] = rand()%2;
        }
  	}	
}

void escreve_matriz ( int mat[N][N])
{
	int i, j;
	for(i=0; i<N; i++)
	{
      for(j=0; j<N; j++)
	  	{
          printf("%5d", mat[i][j]);
        }
          printf("\n");
  	}	
}	

void soma (int mat[N][N], int res[N+1])
{
int i, j, soma, vai=0;
	for(j=N-1; j>=0; j--)
	{
	soma = vai;
      for(i=0; i<N; i++)
	  	{
          soma += mat[i][j];
    	}
          res[j+1] = soma%10;
          vai = soma/10;
  }	
  res[0] = vai;
}

void escreve_vetor ( int res[N+1])
{
	int j;

      for(j=0; j<N+1; j++)
	  	{
          printf("%d", res[j]);
        }
          printf("\n");
}

int num_dias(int m, int a)
{
	if(m==1 || m==3 || m==5|| m==7 || m==8 || m==10 || m==12)
	{
		return 31;
	}
	else if(m==4 || m==6 || m==9 || m==9)
	{
		return 30;
	}
	else if (m==2 && a%4==0)
	{
		return 29;
	}
	else
	{
		return 28;
	}
}

void gera_calendario(int cal[N][M], int m, int a, int ds)
{
	int i, j;
	int d=1;
	int total = num_dias(m,a);
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			if(i==0 && j<ds)
			{
				cal[i][j] = 0;
			}else if(d>total){
			cal[i][j] = 0;
			}else {
				cal[i][j] = d++;			}
		}
	}
	
}

void escreve_cal (int cal[N][M])
{
		int i,j;
	for(i=0; i<N; i++)
	{
      for(j=0; j<M; j++)
	  	{
          printf("%5d", cal[i][j]);
        }
          printf("\n");
    }
}

int main(){
  int mat[N][N], res[N+1];
  int m,a, ds;
  int cal[N][M];
  printf("Digite o mes e o ano\n");
  scanf("%d %d",&m, &a);
     
  printf("Digite o dia de inicio do mes\n");
  scanf("%d", &ds);
  
  
  gera_calendario(cal, m, a, ds);
  escreve_cal(cal);
  
  
  //gera_matriz (mat); 
  //escreve_matriz (mat);
 //soma(mat, res);
 //escreve_vetor(res);
   

return 0;

}

