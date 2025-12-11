int marks_summation(int* marks, int number of students, char gender) {

//Write your code here.

int sum = 0:

for(int i = (gender= 'b'? 0: gender= 'g'? 1:-

1); i <number of students; i+=2) {

sum += marks[i];
}

return sum;
}

int main() {

int number of students: char gender;

int sum:

scanf("%d", &number of students); int *marks = (int *) malloc(number of students * sizeof (int));

for (int student = 0; student <number of students; student++) { scanf("%d", (marks + student));

scanf(" %c", &gender); sum = marks summation(marks, number of students, gender); printf("%d", sum);

free(marks);

return 0;
}

