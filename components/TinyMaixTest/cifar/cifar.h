#pragma once
#include "stdio.h"
#include "tinymaix.h"

#include "cifar10_q.h"

#define IMG_L 32
#define IMG_CH 3
#define CIFAR_CLASS_NUM 10

//Note: this model trained as BGR input
#include "pic2.h"
//#include "pic3.h"
//#include "pic4.h"
//#include "pic5.h"
//#include "pic7.h"
//#include "pic8.h"
static char* cifar_labels[CIFAR_CLASS_NUM] = {\
    "airplane", "automobile", "bird", "cat", "deer", "dog", "frog", "hrose", "ship", "truck"};
int test_cifar(int argc, char** argv);