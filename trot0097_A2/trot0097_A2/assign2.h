typedef struct Area{
	int areaCode;
	char areaName[20];
	struct Area *nextArea;
}Area;
typedef struct PhEntry{
	int areaCode;
	int phoneNumber;
	char lastName[20];
	char firstName[20];
	struct PhEntry *nextPhEntry;
}PhEntry;
PhEntry* phLinkList();
void printArea(Area* head);
void printPh(PhEntry* head);
void addArea(Area* head);
void addPhEntry(PhEntry* head);
void modPh(PhEntry* head);
void delPh(PhEntry* head);