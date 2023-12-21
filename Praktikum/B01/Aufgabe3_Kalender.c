#include <stdio.h>
#include <stdlib.h>



/* ENUM FUER DIE DATUMSEINHEIT */
typedef enum{
	MINUTE,
	HOUR,
	DAY,
	MONTH,
	YEAR
}Dateunit;

/* STRUCT FUER DIE ZEITSPANNE*/
typedef struct{
	int value;
	Dateunit unit;
}Timespan;

/* STRUCT FUER EINEN TERMIN*/
typedef struct {
	int date[5];
	char description[30];
	unsigned int priority;

}Meeting;

/* METHODE ZUM VERSCHIEBEN EINES TERMINS */
Meeting moveMeeting(Meeting meeting, Timespan timespan){
	/* wenn die Einheit der Zeitspanne Minute ist */
	if(timespan.unit == MINUTE) {
		int minute = meeting.date[0] += timespan.value;
		int hoursToAdd = minute/60;
		int minutesToAdd = minute%60;
		
		meeting.date[0] = minutesToAdd;
		meeting.date[1] += hoursToAdd;

	}
	/* wenn die Einheit der Zeitspanne Stunde ist */
	else if(timespan.unit == HOUR) {	
		int hour = meeting.date[1] += timespan.value;
		int daysToAdd = hour/24;
		int hoursToAdd = hour%24;

		meeting.date[1] = hoursToAdd;
		meeting.date[2] += daysToAdd;
	}
	/* wenn die Einheit der Zeitspanne Tag ist */
	else if(timespan.unit == DAY){
		int day = meeting.date[2] += timespan.value;
		int monthToAdd = day/31;
		int daysToAdd = day%31;

		meeting.date[2] = daysToAdd;
		meeting.date[3] += monthToAdd;
	}
	/* wenn die Einheit der Zeitspanne Monat ist */
	else if(timespan.unit == MONTH) {
		int month = meeting.date[3] += timespan.value;
		int yearsToAdd = month/12;
		int monthToAdd = month%12;

		meeting.date[3] = monthToAdd;
		meeting.date[4] += yearsToAdd;
	}
	/* wenn die Einheit der Zeitspanne Jahr ist */
	else if(timespan.unit == YEAR) {
		meeting.date[4] += timespan.value;
	}
	
	return meeting;
}

/* METHODE ZUM AUSGEBEN EINES TERMINS IN DER CONSOLE */
void printMeeting(Meeting newMeeting){
	int i;
	printf("Verschobener Termin: Beschreibung: %s, Prioritaet: %u, Datum: ",
			newMeeting.description, newMeeting.priority);
		
	for(i = 0; i < (sizeof(newMeeting.date) / sizeof(newMeeting.date[0])); i++){
		printf("%d.", newMeeting.date[i]);
	}
	printf("\n");

}

int main(){
	
	/* Meeting mit dem Datum "15.10.15.2.2003", der Beschreibung "Mathe Vorlesung" und der Prioritaet "5" */
	Meeting meeting = {{15,10,15,2,2003}, "Mathe Vorlesung", 5};

		/* Zeitspanne */
	Timespan span = {60,MINUTE};
	Meeting newMeeting = moveMeeting(meeting, span);
	
	printMeeting(newMeeting);

	return EXIT_SUCCESS;
}