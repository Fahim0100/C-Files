    int given_input;
    int reversed = 0;
    printf("Enter a multi digit number to reverse.\n");
    scanf("%d", &given_input);

    do{
        int end = given_input%10;
        reversed = reversed*10+end;
        given_input/=10;
    }while(given_input != 0);

    printf("The reversed number is %d", reversed);