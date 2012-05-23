int fattoriale(int num){
    switch(num){
        case 0:
            return 1;
            break;
        default:
            return num*fattoriale(num-1);
            break;
    }
}