struct Course {
	char courseID[10];
	char courseTitle[20];
	int courseTotal;
};
struct Student {
	char studentID[8];
	struct Course courses;
	char firstname[20];
	char lastname[20];
	char courseMarks[2];
};
void firstOption(struct Student[], int temp);
void secondOption(struct Course[], int temp);