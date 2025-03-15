#include <stdio.h>
#define N 6
#define M 7	

int num_dias(int m, int a){
	if(m==1 || m==3 || m==5|| m==7 || m==8 || m==10 || m==12){
		return 31;
	}
	else if(m==4 || m==6 || m==9 || m==9){
		return 30;
	}
	else if (m==2 && a%4==0){
		return 29;
	}
	else{
		return 28;
	}
}

void gera_calendario(int cal[N][M], int m, int a, int ds){
	int i, j;
	int d=1;
	int total = num_dias(m,a);
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			if(i==0 && j<ds){
				cal[i][j] = 0;
			}
			else if(d>total){
			cal[i][j] = 0;
			}
			else {
				cal[i][j] = d++;			
			}
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
          printf("% 3d", cal[i][j]);
        }
          printf("\n");
    }
}

int main(){
  int m,a, ds;
  int cal[N][M];
  printf("Digite o mes e o ano\n");
  scanf("%d %d",&m, &a);
     
  printf("Digite o dia de inicio do mes\n");
  scanf("%d", &ds);
  
  
  gera_calendario(cal, m, a, ds);
  escreve_cal(cal);

return 0;

}
