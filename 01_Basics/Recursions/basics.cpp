/*
Stack Overflow --> when a function calls itself so it waits till it is completed.
as the function calling itself is never completely executed the stack is overflowed as memory is cant handle so much waiting.


eg:-
void print(){
    cout<<1;
    print(); so it calls another loop of this function but inside that another calling so it keeps on increasing only.
}

also known as segmentation fault.
*/

/*
Recursion tree --> easy representation of recursion or function calling itself in form of  f()<-->f()....
*/