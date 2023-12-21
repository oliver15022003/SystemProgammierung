#include <stdio.h>

/* Aufzaehlung der Basis Typen */
typedef enum{
	VAL_BOOL, VAL_NUMBER, VAL_OBJ
}ValueType;

/* Tagged Unions zur Speicherung der Werte*/
typedef struct {
	ValueType type;
	union{
		bool boolean;
		double number;
		Obj* obj; 
	}as;
} Value;

double beispiel_get_number(Value value) {
	if(value.type == VAL_NUMBER) return value.as.number;
}




int main(){

}