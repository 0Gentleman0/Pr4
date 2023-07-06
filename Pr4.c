#include <stdio.h>

//Ввожу функцію для підрахунку кількості рівних дільників числа n
int countDivision(int n) {
    int count = 0;
    
    // Перевіряю всі числа m від 1 до n-1
    for (int m = 1; m < n; m++) {
        // Якщо частка n/m дорівнює остачі n%m, то m є дільником n
        if (n / m == n % m) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);
    
    // Викликаю функцію countEqualDivisors для підрахунку кількості рівних дільників числа n
    int result = countDivision(n);
    
    // Виводимо результат
    printf("Кількість рівних дільників числа %d: %d\n", n, result);
    
    return 0;
}
