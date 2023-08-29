#include <stdio.h> 
 
int main() { 
    float score1, score2, score3, average; 
 
    printf("Enter score for exam 1: "); 
    scanf("%f", &score1); 
 
    printf("Enter score for exam 2: "); 
    scanf("%f", &score2); 
 
    printf("Enter score for exam 3: "); 
    scanf("%f", &score3); 
 
    average = (score1 + score2 + score3) / 3; 
    printf("Average score: %.2f\\n", average); 
 
    if (average > 85) { 
        printf("Title: High Achiever\\n"); 
    } else if (average >= 70 && average <= 85) { 
        printf("Title: Pass\\n"); 
    } else { 
        printf("Title: Needs Improvement\\n"); 
    } 
 
    return 0; 
}
