/*1046
	Leia a hora inicial e a hora final de um jogo. 
	A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
*/
int main(){
	
	int startTime, endTime;
	int timeOfGame;
	
	scanf("%i %i", &startTime, &endTime);
	
	if(startTime > endTime || startTime == endTime)
		endTime += 24;
	
	int x;
	for(x=startTime; x != endTime; x++)	
		timeOfGame++;	
	
	
	if(timeOfGame >= 1 && timeOfGame <= 24)
		printf("O JOGO DUROU %d HORA(S)\n", timeOfGame);
	
	return 0;	
}
