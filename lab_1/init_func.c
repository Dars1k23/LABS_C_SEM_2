#include <stdio.h>
#include "task_matrix.h"
#include "task_struct.h"
#include "task_vector.h"

int run_main(){
    int m;
    char num;
    Matrix* matr = NULL;
    Vector* vec = NULL;
    while (1){

        printf("==== MENU ====\n\n");
        printf("a) Иницилизация матрицы\n");
        printf("b) Заполнить матрицу\n");
        printf("c) Вывести матрицу\n");
        printf("d) Индивидуальное задание\n");
        printf("q) Выход\n");
        printf("==============\n\n");
        printf("Введите пункт меню: ");
        while (scanf(" %c", &num) != 1){
            continue;
        }
        printf("\n");

        switch (num){

            case 'a':
                printf("Введите число строк: ");
                scanf("%d", &m);
                matr = create_matrix(m);
                if (matr){
                    printf("Успешная инилизация!\n\n");
                }
                break;

            case 'b':
                fill_matrix(matr);
                break;

            case 'c':
                print_matrix(matr);
                printf("\n");
                break;
            
            case 'd':
                vec = init_vector(matr);
                print_vector(vec);
                printf("\n");
                break;

            case 'q':
                if (matr){
                    free_matrix(matr);
                }
                if (vec){
                    free_vector(vec);
                }
                printf("\n\n");
                printf("==============\n");
                printf("До свидания!\n");
                printf("==============\n\n\n");
                return 0;
                
            
            default:
                printf("Выбран неверный пункт!\n");
                printf("Попробуйте снова!");
                break;
        }
    }    
        
    return 0;
    
}
