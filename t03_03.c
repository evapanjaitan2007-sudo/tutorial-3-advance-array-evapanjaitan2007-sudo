#include <stdio.h>
#include <limits.h> // Untuk INT_MAX dan INT_MIN

int main() {
    int n;
    // Membaca jumlah nilai (N)
    if (scanf("%d", &n) != 1 || n <= 0) {
        // Handle case for invalid N (non-positive)
        // For simplicity as per the prompt's focus, we assume valid N based on example.
        // In a real-world scenario, more robust error handling would be needed.
        return 1; // Exit with error
    }

    int values[n]; // Menggunakan Variable Length Array (C99 standard)
    int sum = 0;
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    // Membaca N nilai, menghitung jumlah, serta mencari nilai minimum dan maksimum
    for (int i = 0; i < n; i++) {
        int current_val;
        if (scanf("%d", &current_val) != 1) {
            // Handle case for invalid input
            return 1; // Exit with error
        }

        // Batasan negatif: memastikan nilai tidak negatif
        if (current_val < 0) {
            // Dalam konteks prompt, kita diasumsikan input sudah valid
            // Namun jika perlu penanganan, bisa ditambahkan di sini.
            // Contoh: printf("Error: Nilai tidak boleh negatif.\n"); return 1;
        }

        values[i] = current_val;
        sum += current_val;

        if (current_val < min_val) {
            min_val = current_val;
        }
        if (current_val > max_val) {
            max_val = current_val;
        }
    }

    double average = (double)sum / n;

    int count_above_average = 0;
    for (int i = 0; i < n; i++) {
        if (values[i] >= average) {
            count_above_average++;
        }
    }

    int range = max_val - min_val;

    // Mencetak hasil sesuai format yang diminta
    printf("%d\n", sum);
    printf("%.2f\n", average);
    printf("%d\n", count_above_average);
    printf("%d\n", range);

    return 0;
}