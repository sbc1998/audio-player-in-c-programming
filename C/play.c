#include <stdio.h>
#include <stdio.h>
#include <windows.h>
//#include <mmsystem.h>

//#include <mmsystem.h>
//#pragma comment(lib, "winmm.lib")

void pause();

int main() {
    
    char name[250];
    int choice;
    
	printf("******* Music Player ********* \n \n");
	
	//input songname from file
	char songName[50];
	FILE *fptr;
	
	fptr= fopen("song.txt", "r");
	
	if(fptr==NULL) {
		printf("Error opening file");
	}
	
	while (fgets(songName, 50, fptr) != NULL) {
        printf("%s", songName);
    }
	
	printf("\n \n");	
	printf("Enter the song name: ");
	gets(name);
	printf("\n");
	
	
	//play the selected song
	if(PlaySound(TEXT(name), NULL, SND_ASYNC | SND_FILENAME)== 0) {
		printf("The song does not exist. \nPlease enter the correct song name. \n \n ");
	}
	else {
		printf("Playing %s.....\n \n", name);
		printf("1. Pause the song \n");
		printf("2. Play next song \n");	
		printf("3. Exit \n\n >>>");	
	}
	
		
	scanf("%d", &choice);
	
	//switch case for user choice
	switch(choice) {
		case 1:
			pause(); //to pause the song for a while
			break;
				
		case 2:
			break;
			
		case 3:
			break;		
	}	

    return 0;
}

	void pause() {
			sleep(3);
			
		}

