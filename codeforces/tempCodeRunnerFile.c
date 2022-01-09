long int x;
    scanf("%ld", &x);
    int len, res =x;
    int sum = 0;
    for (len =0; res > 0; len++) {
        int y = (res % 10);
        if( y % 7 == 0 && y != 0) {
            sum++;
        }
        else if (y % 4 == 0 && y != 0){
             sum++;
        }
        res = res /10;
    }
    
    if( (sum % 7 == 0 || sum % 4 == 0) && sum != 0) {
        printf ("YES\n");
    }else{
        printf("NO\n");
    }