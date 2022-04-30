#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 10 different animals (2cards each)
// get 2 inputs -> if I find same animal card, flip
// all card pairs found -> game end
// count total number of failed

int arrayAnimal[4][5]; // card array (20 cards)
int checkAnimal[4][5]; //check whether cards are flipped 
char * strAnimal[10];

void initAnimalArray();  // set all card -1 for reset
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printfAnimals(); 
void printQuestion(); 
int foundAllAnimals();




int main(void)
{

    srand(time(NULL));

    initAnimalArray();
    initAnimalName();
    shuffleAnimal();

    int failCount = 0;

    while (1)
    {
        int select1 = 0; // 1st chosen number by player
        int select2 = 0; // 2nd chosen number by player

        printfAnimals(); // print location of animal
        printQuestion(); // print question (card map)
        printf("Choose 2 cards you would like to flip ::  ");
        scanf("%d %d", &select1, &select2);

        if(select1==select2) continue;

        // check the cards with received coordinates. (Same or Not)

        //received integer number into coordinates(x,y);
        int firstSelect_x = conv_pos_x(select1);
        int firstSelect_y = conv_pos_y(select1);
        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);

        //is it already selected? (Not flipped yet) (same animal or not)
        if((checkAnimal[firstSelect_x][firstSelect_y] == 0 //is the card flipped?
            && checkAnimal[secondSelect_x][secondSelect_y] ==0)

            &&
            (arrayAnimal[firstSelect_x][firstSelect_y] //same animal?
            == arrayAnimal[secondSelect_x][secondSelect_y])
        )
        {
            printf("\n\nCorrect! : %s found\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            checkAnimal[firstSelect_x][firstSelect_y] = 1;
            checkAnimal[secondSelect_x][secondSelect_y] = 1;
        }

        //if different animals
        else
        {
            printf("\n\nWrong!! (wrong answer or the cars is already flipped\n");
            printf("%d: %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            printf("%d: %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
            failCount++;
        }

        //check whether all animals are found or not 1=yes, 0=no
        if(foundAllAnimals() == 1)
        {
            printf("\n\nYOU FOUND ALL ANIMAL CARDS\n");
            printf("total %d failed attempts", failCount);
            break;
        }

    }


    return 0;
}



///////////////////////////////FUNCTIONS/////////////////////////

// set all card -1 for reset
void initAnimalArray() 
{

    for (int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            arrayAnimal[i][j] = -1;
        }
    }

}

void initAnimalName()
{
    strAnimal[0] = "Monkey";
    strAnimal[1] = "Hippo";
    strAnimal[2] = "Dog";
    strAnimal[3] = "Cat";
    strAnimal[4] = "Pig";

    strAnimal[5] = "Elephant";
    strAnimal[6] = "Giraffe";
    strAnimal[7] = "Camel";
    strAnimal[8] = "Ostrich";
    strAnimal[9] = "Tiger";

}

//put initAnimalName into intiAnimalArray
void shuffleAnimal() 
{ 

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<2; j++)
        {
            int pos = getEmptyPosition();
            int x = conv_pos_x(pos);
            int y = conv_pos_y(pos);

            arrayAnimal[x][y] = i;
        }
    }
}

// find empty space in array
int getEmptyPosition()
{
    //ㅁㅁㅁㅁㅁ 0  1  2  3  4  -> 0 0 0 0 0
    //ㅁㅁㅁㅁㅁ 5  6  7  8  9  -> 1 1 1 1 1 
    //ㅁㅁㅁㅁㅁ 10 11 12 13 14 -> 2 2 2 2 2 
    //ㅁㅁㅁㅁㅁ 15 16 17 18 19 -> 3 3 3 3 3 

    while(1)
    {
        int randPos = rand() %20;  // 0~19 random number return
        // 19 --> arrayAnimal[3][4]
        int x= conv_pos_x(randPos);
        int y= conv_pos_y(randPos);

        if(arrayAnimal[x][y] == -1) 
        {
            return randPos;
        }

    }
    return 0;
}

int conv_pos_x(int x)
{
    //19 --> (3,4)
    return x/5;
}

int conv_pos_y(int y)
{
     return y %5; // rest sum of y devided by 5 :: 19/5 = 3.xx -> (5x3 = 15) + **4**
}


// print location of animal
void printfAnimals()
{
    //ㅁㅁㅁㅁㅁ 0  1  2  3  4  
    //ㅁㅁㅁㅁㅁ 5  6  7  8  9  
    //ㅁㅁㅁㅁㅁ 10 11 12 13 14 
    //ㅁㅁㅁㅁㅁ 15 16 17 18 19 
    printf("============cheatsheet=======\n\n");
    for (int i =0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%8s  ", strAnimal[arrayAnimal[i][j]]);
        }
        printf("\n");
    }
    printf("========================================\n");
}


void printQuestion() // print question (card map)
{
    printf("\n(question)\n");
    int seq = 0;
   
                    //seq                       //checkAnimal
    //ㅁㅁㅁㅁㅁ 0  1  2  3  4                      0 0 0 0 0
    //ㅁㅁㅁㅁㅁ hippo  6  7  8  9                  1 0 0 0 0
    //ㅁㅁㅁㅁㅁ 10 11 12 hippo 14                  0 0 0 1 0
    //ㅁㅁㅁㅁㅁ 15 16 17 18 19                     0 0 0 0 0



    for (int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            //if flip & correct -> animal name
            if(checkAnimal[i][j] !=0)
            {
                printf("%8s ", strAnimal[arrayAnimal[i][j]]);
            }
            //if did not flip yet (incorrect choose) -> back side. -> show number of coordinate
            else
            {
                printf("%8d", seq);
            }
            seq++;
            
        }
        printf("\n");
    }
}

int foundAllAnimals()
{
    for(int i=0;i<4; i++)
    {
        for (int j=0; j<5; j++)
        {
            if(checkAnimal[i][j] ==0) 
            return 0;
        }
    }
    return 1; // all found
}