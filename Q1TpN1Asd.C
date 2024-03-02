void collectScores(float scores[], int numExams);
float computeAverage(float scores[], int numExams);
void displayAverage(float average);
void checkRetake(float average);
void displayResult(float average);

int main() {
    const int numExams = 4;
    float scores[numExams];
    
    // Collect exam scores
    collectScores(scores, numExams);

    // Compute and display average
    float average = computeAverage(scores, numExams);
    displayAverage(average);

    // Check if retake is needed
    checkRetake(average);

    // Display overall result (pass/fail)
    displayResult(average);

    return 0;
}

// Function to collect exam scores
void collectScores(float scores[], int numExams) {
    printf("Enter exam scores:\n");
    for (int i = 0; i < numExams; ++i) {
        printf("Exam %d: ", i + 1);
        scanf("%f", &scores[i]);
    }
}

// Function to compute average
float computeAverage(float scores[], int numExams) {
    float sum = 0;
    for (int i = 0; i < numExams; ++i) {
        sum += scores[i];
    }
    return sum / numExams;
}

// Procedure to display average
void displayAverage(float average) {
    printf("\nAverage Score: %.2f\n", average);
}

// Procedure to check if retake is needed
void checkRetake(float average) {
    if (average < 10) {
        printf("You need to retake some exams:(\n");
    } else {
        printf("No retake needed. Nice!\n");
    }
}

// Procedure to display overall result (pass/fail)
void displayResult(float average) {
    if (average >= 10) {
        printf("Congrats! You have passed.\n");
    } else {
        printf("Hard Luck!, you have failed.\n");
    }
}
