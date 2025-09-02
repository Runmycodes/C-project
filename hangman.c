#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>

void mistake1()
{
    printf("    -------\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("    O     |\n");
    Sleep(100);
    printf("   /|\\    |\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("   /      |\n");
    Sleep(100);
    printf("      \033[1;31m_\033[0m   |\n");
}
void mistake2()
{
    printf("    -------\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("    O     |\n");
    Sleep(100);
    printf("    |\\    |\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("   /      |\n");
    Sleep(100);
    printf(" \033[1;31m_\033[0m     \033[1;31m_\033[0m  |\n");
}
void mistake3(){
    printf("    -------\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("    O     |\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("   /      |\n");
    Sleep(100);
    printf(" \033[1;31m_   _ _\033[0m  |\n");
}

void mistake4()
{
    printf("    -------\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("    O     |\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("\033[1;31m_ _   __\033[0m  |\n");
}
void mistake5(){
    printf("    -------\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("          |\n");
    Sleep(100);
    printf("          |\n");
    Sleep(100);
    printf("          |\n");
    Sleep(100);
    printf("\033[1;31m_ _ __  0\033[0m |\n");
}

void def(){
    printf("    -------\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("    O     |\n");
    Sleep(100);
    printf("   /|\\    |\n");
    Sleep(100);
    printf("    |     |\n");
    Sleep(100);
    printf("   / \\    |\n");
}

int main()
{
    srand(time(NULL));
    int randomIndex = rand()%100;
    int index = randomIndex; //ignore why i did this 
    char string[100] = "Hello user, want to play a game? Y/N: ";
    for(int i = 0; i < strlen(string); i++){
        Sleep(100);
        printf("%c", string[i]);
    }

    char names[100][15] = {"Fred", "Jimmy", "James", "Hazlewood", "Peter", "Markus", "Jason", "Michael", "Smith", "Alice", "Bob",
    "Charlie", "David", "Eve", "Frank", "Grace", "Heidi", "Ivan", "Judy", "Mallory", "Niaj", "Olivia", "Peggy",
     "Quentin", "Rupert", "Sybil", "Trent", "Uma", "Victor", "Walter", "Xena", "Yara", "Zara",
    "Jennifer", "Katherine", "Liam", "Mia", "Noah", "Olivia", "Sophia", "Ava", "Isabella", "Amelia", "Harper",
    "Kurt", "Lana", "Mason", "Nina", "Owen", "Paula", "Quinn", "Riley", "Sean", "Tina", "Ulysses",
    "Violet", "Wendy", "Xander", "Yvonne", "Zane", "Aaron", "Bella", "Caleb", "Diana", "Ethan",
    "Fiona", "Gavin", "Hannah", "Ian", "Jasmine", "Kevin", "Lily", "Megan", "Nathan", "Olive", "Parker",
    "Quincy", "Rachel", "Samuel", "Tara", "Umar", "Vanessa", "Wyatt", "Ximena", "Yusuf", "Zoe", "Oliver", "Riyad", "Surjo", "Eshin", "Mahmud", "Mayesha",
    "Abdul", "Nahian", "Carter", "Ethan", "Margaret", "Lily", "Rose", "Potemer"};

    char words[100][15] = {"apple", "banana", "cherry", "date", "elderberry", "fig", "grape", "kiwi", "lemon",
    "mango", "nectarine", "orange", "papaya", "quince", "raspberry", "strawberry", "vanilla",
    "watermelon", "blueberry", "coconut", "alligator", "bear", "cheetah", "dolphin", "elephant", "fox", "giraffe", "hippopotamus", 
    "iguana", "jaguar", "kangaroo", "lion", "monkey", "newt", "octopus", "penguin", "quail", 
    "rabbit", "snake", "tiger", "urchin", "vulture", "whale", "xerus", "yak", "zebra",
    "eagle", "falcon", "shark", "turtle", "Amsterdam", "Berlin", "Cairo", "Dubai", "Edinburgh", "Florence", "Geneva", "Helsinki",
    "Istanbul", "Jakarta", "Kyoto", "Lisbon", "Madrid", "Nairobi", "Oslo", "Prague", "Quebec", 
    "Rome", "Seoul", "Tokyo", "Utrecht", "Vienna", "Warsaw", "Xiamen", "Yokohama", "Zurich",
    "London", "Paris", "Sydney", "Toronto", "computer", "keyboard", "monitor", "program", "algorithm", "function", "variable", "pointer",
    "diamond", "emerald", "ruby", "sapphire", "guitar", "piano", "violin", "trumpet",
    "basketball", "football", "tennis", "cricket" };

    char hints[100][100] = {
    "A red, green, or yellow fruit. Isaac Newton's discovery.", // apple
    "A long yellow fruit that monkeys love.", // banana
    "A small red stone fruit, often on top of a sundae.", // cherry
    "A sweet fruit that's also an appointment.", // date
    "A dark purple berry used in wines and jams.", // elderberry
    "A small, sweet fruit that is often dried.", // fig
    "A small fruit that grows in bunches and makes wine.", // grape
    "A small, fuzzy brown fruit with green inside.", // kiwi
    "A yellow citrus fruit known for its sour taste.", // lemon
    "A tropical stone fruit with sweet orange flesh.", // mango
    "A smooth-skinned variety of peach.", // nectarine
    "A citrus fruit that's also a color.", // orange
    "A large tropical fruit with orange flesh and black seeds.", // papaya
    "A hard, yellow, fragrant fruit used in jellies.", // quince
    "A small, red, aggregate fruit with a hollow core.", // raspberry
    "A red fruit with its seeds on the outside.", // strawberry
    "A flavoring from a tropical orchid.", // vanilla
    "A large, juicy fruit with a green rind and red flesh.", // watermelon
    "A small, dark blue berry often used in muffins.", // blueberry
    "A large tropical nut with milk and white meat inside.", // coconut
    "A large reptile with a powerful jaw, found in Florida.", // alligator
    "A large mammal that hibernates. Can be grizzly or polar.", // bear
    "The fastest land animal, known for its spots.", // cheetah
    "A highly intelligent marine mammal known for its playfulness.", // dolphin
    "The largest land animal, has a trunk and tusks.", // elephant
    "A small, cunning animal with a bushy tail.", // fox
    "The tallest land animal with a long neck.", // giraffe
    "A large, round African animal that loves water.", // hippopotamus
    "A type of lizard often kept as a pet.", // iguana
    "A large spotted cat, faster than a leopard.", // jaguar
    "An Australian marsupial that hops and has a pouch.", // kangaroo
    "The 'king of the jungle', a large cat with a mane.", // lion
    "A playful primate that swings from trees.", // monkey
    "A small, slender salamander.", // newt
    "A sea creature with eight tentacles.", // octopus
    "A flightless bird that lives in Antarctica.", // penguin
    "A small, plump ground-nesting bird.", // quail
    "A small, furry mammal with long ears that hops.", // rabbit
    "A legless reptile that can be venomous.", // snake
    "A large striped cat, the national animal of India.", // tiger
    "A spiny sea creature (often called a sea urchin).", // urchin
    "A large scavenging bird with a bald head.", // vulture
    "The largest animal on Earth, lives in the ocean.", // whale
    "An African ground squirrel with a bushy tail.", // xerus
    "A long-haired ox found in the Himalayas.", // yak
    "An African animal with black and white stripes.", // zebra
    "A bird of prey known for its keen eyesight.", // eagle
    "Another bird of prey, known for its speed.", // falcon
    "A fearsome cartilaginous fish with many teeth.", // shark
    "A reptile with a hard shell on its back.", // turtle
    "The capital of the Netherlands, known for its canals.", // Amsterdam
    "The capital of Germany, home to the Brandenburg Gate.", // Berlin
    "The capital of Egypt, home to the Pyramids of Giza.", // Cairo
    "A wealthy city in the UAE known for luxury and skyscrapers.", // Dubai
    "The capital of Scotland, home to a famous castle.", // Edinburgh
    "A beautiful city in Italy, heart of the Renaissance.", // Florence
    "A Swiss city on a lake, headquarters of the Red Cross.", // Geneva
    "The capital of Finland, known for its design and islands.", // Helsinki
    "A major city in Turkey that spans two continents.", // Istanbul
    "The capital of Indonesia, a massive Southeast Asian metropolis.", // Jakarta
    "A former capital of Japan, famous for its temples and gardens.", // Kyoto
    "The hilly capital of Portugal on the Atlantic coast.", // Lisbon
    "The capital and largest city of Spain.", // Madrid
    "The capital of Kenya, a major economic hub in Africa.", // Nairobi
    "The capital of Norway, home to the Nobel Peace Prize.", // Oslo
    "The capital of the Czech Republic, City of a Hundred Spires.", // Prague
    "The only walled city in North America north of Mexico.", // Quebec
    "The 'Eternal City', capital of Italy. Home to the Vatican.", // Rome
    "The capital of South Korea, a tech and pop culture hub.", // Seoul
    "The bustling capital of Japan.", // Tokyo
    "A Dutch city known for its canals and university.", // Utrecht
    "The capital of Austria, known for music and palaces.", // Vienna
    "The capital of Poland, rebuilt after WWII.", // Warsaw
    "A Chinese port city sometimes called 'Amoy'.", // Xiamen
    "A major port and city near Tokyo, Japan.", // Yokohama
    "A major financial hub and city in Switzerland.", // Zurich
    "The capital of the UK, on the River Thames.", // London
    "The 'City of Light', capital of France.", // Paris
    "A major Australian city with a famous opera house.", // Sydney
    "The largest city in Canada, located on Lake Ontario.", // Toronto
    "An electronic device for processing data.", // computer
    "An input device with keys for typing.", // keyboard
    "A screen that displays information from a computer.", // monitor
    "A set of instructions for a computer to follow.", // program
    "A step-by-step procedure for solving a problem.", // algorithm
    "A block of code designed to perform a specific task.", // function
    "A named storage location in programming.", // variable
    "A variable that stores a memory address.", // pointer
    "The hardest natural material, a precious gem.", // diamond
    "A green precious gemstone.", // emerald
    "A deep red precious gemstone.", // ruby
    "A precious gemstone, typically blue.", // sapphire
    "A stringed musical instrument played by strumming.", // guitar
    "A large keyboard instrument with black and white keys.", // piano
    "A stringed instrument played with a bow.", // violin
    "A brass musical instrument with three valves.", // trumpet
    "A sport played with a round ball and a hoop.", // basketball
    "A game played with an oval ball; soccer in some countries.", // football
    "A racket sport played over a net with a fuzzy ball.", // tennis
    "A bat-and-ball game popular in the UK and Commonwealth."  // cricket
};


    char ans[30];
    fgets(ans, 30, stdin);
    ans[strcspn(ans, "\n")] = '\0';

    while(toupper(ans[0]) != 'Y' && toupper(ans[0]) != 'N'){
        string[0] = '\0';
        strcpy(string, "Input has to be Y or N: ");

        for(int i = 0; i < strlen(string); i++){
            Sleep(150);
            printf("%c", string[i]);
        }
        getchar();
        fgets(ans, 30, stdin);
        ans[strcspn(ans, "\n")] = '\0';
    }
    if(ans[0] == 'N'){
        string[0] = '\0';
        strcpy(string, "......");
        for(int i = 0; i < strlen(string); i++){
            Sleep(500);
            printf("%c", string[i]);
        }
        Sleep(500);
        printf("Ok\n");
        return 0;
    }
    else{

        char holder[100];
        char original[100];
        char guess[10];
        do{

            ans[0] = '\0';
            def();
            Sleep(100);
            sprintf(string, "\nThis is \033[1;31m%s\033[0m, and in order to save them you must guess the magic word.\nRemember: You can only make 4 mistakes.\n", names[index]);
            for(int i = 0; i < strlen(string); i++){
                printf("%c", *(string+i));
                Sleep(70);
            }
            string[0] = '\0';
            sprintf(string, "Your word is..............\n");
            for(int i = 0; i < strlen(string); i++){
                printf("%c", *(string+i));
                Sleep(100);
            }

            sprintf(holder, "%s", words[index]);
            strcpy(original, holder);
            //scramble
            for(int i = 0; i < strlen(holder); i++){
                if(i%2 != 0){
                    *(holder+i) = '_';
                }
            }
            for(int i = 0; i < strlen(holder); i++){
                printf("%c", *(holder+i));
                Sleep(100);
            }

            printf("\n\n");
            int check = 0;
            int countmis = 0; //counts the number of mistakes


            for(int i = 0; 1; i++){ //main loop
                if(i > 0){
                    string[0] = '\0';
                    sprintf(string, "\nThe word is: ");
                    for(int j = 0; j < strlen(string); j++){ //print guess
                        printf("%c", *(string+j));
                        Sleep(70);
                    }
                    for(int j= 0; j < strlen(holder); j++){
                        printf("%c", *(holder+j));
                        Sleep(100);
                    }
                    if(i < 2){
                        string[0] = '\0';
                        sprintf(string, "\n\033[1;32m(Enter 0 for a hint)\033[0m");
                        for(int j = 0; j < strlen(string); j++){ //print guess
                            printf("%c", *(string+j));
                            Sleep(50);
                        }
                    }
                }
                string[0] = '\0';
                sprintf(string, "\nGuess #%d: ", i+1);
                for(int j = 0; j < strlen(string); j++){ //print guess
                    printf("%c", *(string+j));
                    Sleep(70);
                }
                fgets(guess, sizeof(guess), stdin);
                guess[strcspn(guess, "\n")] ='\0';

                while(guess[0] == '0'){
                    string[0] = '\0';
                    sprintf(string, "%s\n", hints[index]);
                    for(int j = 0; j < strlen(string); j++){
                        printf("%c", *(string+j));
                        Sleep(50);
                    }

                    string[0] = '\0';
                    sprintf(string, "Guess #%d: ", i+1);
                    for(int j = 0; j < strlen(string); j++){
                        printf("%c", *(string+j));
                        Sleep(70);
                    }
                    fgets(guess, sizeof(guess), stdin);
                    guess[strcspn(guess, "\n")] ='\0';
                }
                for(int j = 0; j < strlen(original); j++){ //check if the guess matches
                    if(original[j] == guess[0]){
                        if(holder[j] == '_'){
                            holder[j] = guess[0];
                            ++check;
                        }
                    }
                }

                int contain = 0; //checking for _ in holder
                for(int j = 0; j < strlen(holder); j++){
                    if(holder[j] == '_'){
                        ++contain;
                    }
                }
                if(contain == 0){
                    printf("\n");
                    string[0] = '\0';
                    sprintf(string, "Congratulations, \033[1;31m%s\033[0m has been freed.\n", names[index]);
                    for(int j = 0; j < strlen(string); j++){
                        printf("%c", string[j]);
                        Sleep(40);
                    }

                    string[0] = '\0';
                    sprintf(string, "You have succesfully saved \033[1;31m%s\033[0m.\n", names[index]);
                    for(int j = 0; j < strlen(string); j++){
                        printf("%c", string[j]);
                        Sleep(100);
                    }
                    break;
                }
                if(check == 0){ //if the guess is wrong
                    ++countmis;
                    if(countmis == 5){
                        mistake5();
                        printf("\n");
                        string[0] = '\0';
                        sprintf(string, "\033[1;31m%s\033[0m has fallen. You have failed to save them, but no matter.\n", names[index]);
                        for(int j = 0; j < strlen(string); j++){
                            printf("%c", string[j]);
                            Sleep(100);
                        }
                        break;
                    }
                    else{
                        switch (countmis)
                        {
                        case 1:
                            mistake1();
                            break;
                        case 2:
                            mistake2();
                            break;
                        case 3:
                            mistake3();
                            break;
                        case 4:
                            mistake4();
                            break;
                        default:
                            break;
                        }
                        printf("\n");
                        string[0] = '\0';
                        sprintf(string, "\033[1;31m%s\033[0m has lost a limb, careful with your guesses.\n", names[index]);
                        for(int j = 0; j < strlen(string); j++){
                            printf("%c", string[j]);
                            Sleep(70);
                        }
                    }
                }
                check = 0;
            }
            string[0] = '\0';
            strcpy(string, "\n\nDo you want me to find another person? Y/N: ");
            for(int i = 0; i < strlen(string); i++){
                printf("%c", string[i]);
                Sleep(70);
            }
            fgets(ans, 30, stdin);
            ans[strcspn(ans, "\n")] = '\0';
            while(toupper(ans[0]) != 'Y' && toupper(ans[0]) != 'N'){
                string[0] = '\0';
                strcpy(string, "Input should be Y or N: ");
                for(int i = 0; i < strlen(string); i++){
                    printf("%c", string[i]);
                    Sleep(70);
                }
                fgets(ans, 30, stdin);
                ans[strcspn(ans, "\n")] = '\0';
            }

            index = rand()%100;

        }while(toupper(ans[0]) != 'N');

    }

    string[0] = '\0';
    strcpy(string, "\n\nDo come back! We have plenty of fresh humans to spare...\n");
    int interval = 70;
    for(int i = 0; i < strlen(string); i++){
        printf("%c", string[i]);
        Sleep(interval);
        interval += 4;
    }

    return 0;
}