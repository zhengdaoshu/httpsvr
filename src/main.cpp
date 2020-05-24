/**
 * @brief main
 * @author Peng Chaowen
 * @web www.pcwen.top
 * @version 1.0
 * @date 2019/06/19
 */

#include <stdio.h>
#include <stdlib.h>
#include "HttpService.h"

int main(int argc, char **argv) {
    HttpService *httpService = new HttpService();
    httpService->start("8000");

    return 0;
}