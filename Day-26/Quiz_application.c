#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("===== Simple Quiz Application =====\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2){
        printf("Correct!\n\n");
        score++;
    }

    else{
        printf("Wrong! Correct answer is New Delhi.\n\n");
    }

    
    printf("Q2. Which language is mainly used for system programming?\n");
    printf("1. C\n2. HTML\n3. Python\n4. CSS\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1){
        printf("Correct!\n\n");
        score++;
    }
    else{
        printf("Wrong! Correct answer is C.\n\n");
    }

    
    printf("Q3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3){
        printf("Correct!\n\n");
        score++;
    }
    else{
        printf("Wrong! Correct answer is 7.\n\n");
    }

    
    printf("Q4. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Earth\n3. Mars\n4. Jupiter\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3){
        printf("Correct!\n\n");
        score++;
    }
    else{
        printf("Wrong! Correct answer is Mars.\n\n");
    }

    
    printf("Q5. 5 + 7 = ?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3){
        printf("Correct!\n\n");
        score++;
    }
    else{
        printf("Wrong! Correct answer is 12.\n\n");
    }

   
    printf("===== Quiz Result =====\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent! Perfect Score.\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}