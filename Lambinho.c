#include <stdio.h>
#include <stdlib.h>

void RandomNumbers(int, int);
void stop(int);



int main(void){
int Number, Rep, ScanNumber, ScanRep;
printf("escolha a quantidade de repeticoes\n-->");
ScanRep = scanf("%d", &Rep);
printf("escolha a quantidade de numeros por repeticao\n-->");
ScanNumber = scanf("%d", &Number);
if(ScanNumber == 0||ScanRep == 0||Number <= 0||Rep <= 0){
    stop(1);
}
RandomNumbers(Number, Rep);
return 0;
}



void stop(Has_Failed){
    if (Has_Failed == 1){
    printf("Programa falhou em rodar.");
    }
    while(1){
    int z;
    printf("\n");
    scanf("%d", &z);
    }

}



void RandomNumbers(int Num, int Rep){
int MyNumbers[Num];
int X, Y, Z, Random;
printf("\n");
for(X = 0; X < Rep; X++){
    for(Y = 0; Y < Num; Y++){
            Random = rand() % 60;
            if (Y == 0){
            MyNumbers[Y] = Random;
            //nao testar
            }
            else{
            for(Z = 0; Z < Num; Z++){
                while (MyNumbers[Z] == Random){
                    Random = rand() % 60;
                    Z = 0;
                }
}
            MyNumbers[Y] = Random;
            // testar
            }
            if(Y == (Num - 1)){
            printf("%d. ", Random);
            }
            else{
            printf("%d, ", Random);
            }

    }
    printf("\n");
    printf("\n");
    //clear array
    for(Z = 0; Z < Num; Z++){
    MyNumbers[Z] = 0;
    }
}
}




