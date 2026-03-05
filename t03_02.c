#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;
    int count_above_average = 0;

    // Read n
    scanf("%d", &n);

    // Array to store student scores
    int scores[n];

    // Read n scores and calculate sum
    for (i = 0; i < n; i++) {
        int score;
        scanf("%d", &score);
        // Apply negative constraint: ensure score is not negative
        if (score < 0) {
            // Optional: handle error or make it 0. For this problem, we'll assume valid input within the constraint.
            // If negative numbers must be entirely rejected, more complex error handling would be needed.
            // For now, we proceed as if input is non-negative due to the problem context ("nilai mahasiswa").
            scores[i] = 0; // Or handle error
        } else {
            scores[i] = score;
        }
        sum += scores[i];
    }

    // Calculate average
    average = (float)sum / n;

    // Count students with scores above or equal to the average
    for (i = 0; i < n; i++) {
        if (scores[i] >= average) {
            count_above_average++;
        }
    }

    // Output results in the specified format
    printf("%d\n", sum);
    printf("%.2f\n", average);
    printf("%d\n", count_above_average);

    return 0;
}