int mySqrt(int x) {

    if(x<0){
        printf("x cant be negative");
        return 0;
    }

   
    if(x==0){
        return 0;
    }

    long long sayac=1;
    while(sayac * sayac <= x){   
        sayac++;
    }

    return sayac-1;

}
