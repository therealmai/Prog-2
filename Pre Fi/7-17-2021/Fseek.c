#include <stdio.h>
#pragma pack(1)

typedef struct{
	char *id;
	char name[10];
	int age;
	float atk;
}ADV;


	int main (void) {
		FILE* fp;
		int numWritten;
		ADV a1[] = {
			"0X1", "Alex", 10, 14.6,
			"F22", "Samu", 35, 1000,
			"ADC", "Neneve", 19, 200
		},a2;
		
		if( (fp = fopen("char_data.bin", "wb")) != NULL){
			numWritten = fwrite(&a1[0], sizeof(ADV), 1, fp);
			numWritten = fwrite(&a1[1], sizeof(ADV), 1, fp);
			numWritten = fwrite(&a1[2], sizeof(ADV), 1, fp);
			fclose(fp);
		}
	
	
	if( (fp = fopen ("char_data.bin", "rb")) != NULL){
		numWritten = fread (&a2, sizeof(ADV), 1, fp);
		numWritten = fread (&a2, sizeof(ADV), 1, fp);
		fseek(fp, sizeof(ADV)*1L, SEEK_END);
		numWritten = fread (&a2, sizeof(ADV), 1, fp);
		fclose(fp);
	}
	
}
