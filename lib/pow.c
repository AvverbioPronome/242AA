int potenzaRic(int base, int pow){
    switch(pow){
        case 0:
            return 1;
            break;
        default:
            return base * potenzaRic(base, pow-1);
            break;
    }
}