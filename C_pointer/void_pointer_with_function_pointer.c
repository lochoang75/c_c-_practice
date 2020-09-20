#include "stdio.h"
#include "time.h"

typedef void(*callback_t)(int user_data);

void delay(int second){

    int milsec = 1000 * second;

    clock_t startTime = clock();

    while(clock() < (startTime + milsec));
}

typedef struct application_callback{
    callback_t callback;
    int user_data;
} application_callback_t;

static void print_call_back(int user_data) {
    printf("Call back has been call with data %d\r\n",user_data );
}

static void call_the_call_back(void* app_call_back) {
    application_callback_t* user_call_back = (application_callback_t*) app_call_back;
    user_call_back->callback(user_call_back->user_data);
    user_call_back->user_data++;
}

int main(int argc, char* argv[]) {
    application_callback_t simple_app = {
        .callback = &print_call_back,
        .user_data = 0
    };
    while (1) {
        for (int i = 0 ; i < 10; i++) {
            delay(1000);
        }
        call_the_call_back((void*)&simple_app);
    }
    return 0;
}
