#include <stdio.h>
#include <time.h>
void func_1()
{
    printf("func_1() starts the flow... \n");
    printf("Press enter_button to stop func_1 when entered.. \n");
    // simple scanf type use kiya hai wo input ke liye wait kar rahah hai
    while (1)
    {
        char l;
        l=getchar();
        if (l)
            break;
    }
    printf("func_1() gets an end here.. \n");
}
int main()
{
    clock_t t;
    t = clock();
    func_1();
    t = clock() - t;
    double time_consumed = ((double)t) / CLOCKS_PER_SEC;
    printf("func_1() took %f seconds for execution of some value.. \n", time_consumed);
    return 0;
}