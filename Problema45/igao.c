#include <stdio.h>
char mediaamericana(float nota){
	char a[1] ="A";
	char b[1] ="B";
	char c[1] ="C";
	char d[1] ="D";
	if ((nota>=0) && (nota<=4)){
	return (d[1]);
	}
		if ((nota>=5) && (nota<=6)){
		return (c[1]);
		}
			if ((nota>=7) && (nota<=8)){
			return (b[1]);
			}
				if ((nota>=9) && (nota<=10)){
				return (a[1]);
			}
}

int main(void){
	float n1;
	char j[1];
	printf("Digite a nota do aluno.\n");
	scanf("%f",&n1);
	j[1]= mediaamericana(n1);
	printf("O conceito é %c.", j[1]);
}