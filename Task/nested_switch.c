//  Nested Switch
#include <stdio.h>
void main()
{
    int genre, movie;

    printf("\n1. Super Hero \n2. Thriller \n3. Action \n4. Sci-Fi \n5. Romance\n");
    printf("Select Genre which you like: ");
    scanf("%d", &genre); // get choice of user

    switch (genre) // outter switch
    {
    case 1:
        printf("\n1. Spider-Man \n2. Batman v Superman \n3. Dr. Strange \n4. Avengers Endgame \n5. X-Men\n");
        printf("Select Your Choice: ");
        scanf("%d", &movie); // get choice of user

        switch (movie) // inner switch
        {
        case 1:
            printf("\nSpider-Man will start soon... Enjoy...");
            break;
        case 2:
            printf("\nBatman v Superman will start soon... Enjoy...");
            break;
        case 3:
            printf("\nDr. Strnage will start soon... Enjoy...");
            break;
        case 4:
            printf("\nAvengers Endgame will start soon... Enjoy...");
            break;
        case 5:
            printf("\nX-Men will start soon... Enjoy...");
            break;
        default:
            printf("\nInvalid Movie Choice");
            break;
        }
        break;

    case 2:
        printf("\n1. Interstaller \n2. Fight Club \n3. The Shawshank Redemption \n4. Inception \n5. Shutter Island\n");
        printf("Select Your Choice: ");
        scanf("%d", &movie);

        switch (movie)
        {
        case 1:
            printf("\nInterstaller will start soon... Enjoy...");
            break;
        case 2:
            printf("\nFight Club will start soon... Enjoy...");
            break;
        case 3:
            printf("\nThe Shawshank Redemption will start soon... Enjoy...");
            break;
        case 4:
            printf("\nInception will start soon... Enjoy...");
            break;
        case 5:
            printf("\nShutter Island will start soon... Enjoy...");
            break;
        default:
            printf("\nInvalid Movie Choice");
            break;
        }
        break;

    case 3:
        printf("\n1. Transformers \n2. The Matrix \n3. John Wick \n4. Bullet Train \n5. Expandables\n");
        printf("Select Your Choice: ");
        scanf("%d", &movie);

        switch (movie)
        {
        case 1:
            printf("\nTransformers will start soon... Enjoy...");
            break;
        case 2:
            printf("\nThe Matrix will start soon... Enjoy...");
            break;
        case 3:
            printf("\nJohn Wick will start soon... Enjoy...");
            break;
        case 4:
            printf("\nBullet Train will start soon... Enjoy...");
            break;
        case 5:
            printf("\nExpandables will start soon... Enjoy...");
            break;
        default:
            printf("\nInvalid Movie Choice");
            break;
        }
        break;

    case 4:
        printf("\n1. Man In Black \n2. The Termiantor \n3. The Passengers \n4. Arrival \n5. Prometheus\n");
        printf("Select Your Choice: ");
        scanf("%d", &movie);

        switch (movie)
        {
        case 1:
            printf("\nMan In Black will start soon... Enjoy...");
            break;
        case 2:
            printf("\nThe Terminator will start soon... Enjoy...");
            break;
        case 3:
            printf("\nThe Passengers will start soon... Enjoy...");
            break;
        case 4:
            printf("\nArrival will start soon... Enjoy...");
            break;
        case 5:
            printf("\nPrometheus will start soon... Enjoy...");
            break;
        default:
            printf("\nInvalid Movie Choice");
        }
        break;

    case 5:
        printf("\n1. La La Land \n2. 500 Days of Summer \n3. Her \n4. Fifty Shades of Grey \n5. Titanic\n");
        printf("Select Your Choice: ");
        scanf("%d", &movie);

        switch (movie)
        {
        case 1:
            printf("\nLa La Land will start soon... Enjoy...");
            break;
        case 2:
            printf("\n500 Days of Summer will start soon... Enjoy...");
            break;
        case 3:
            printf("\nHer will start soon... Enjoy...");
            break;
        case 4:
            printf("\nFifty Shades of Grey will start soon... Enjoy...");
            break;
        case 5:
            printf("\nTitanic will start soon... Enjoy...");
            break;
        default:
            printf("\nInvalid Choice of Movie");
            break;
        }
        break;
    default:
        printf("\nInvalid Genre");
        break;
    }
}