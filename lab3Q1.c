int swap (int* a , int* b ){
    int temp = *a ;
    *a =*b;
    *b = temp ;

    printf("after swapping  address  of  a(%d) is %x\n ",*a , a);
    printf("after swapping  address  of b(%d) is %x\n ",*b , b);

    return 0;
}

int main(){
      int a = 5;
      int b = 9 ;
      printf("before swapping  address  of a (%d) is %x\n ",a , &a);
      printf("before swapping  address  of b (%d )is %x\n ",b , &b);
      swap(&a ,&b);
      return 0 ;
}