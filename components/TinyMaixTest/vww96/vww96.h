//
// Created by Fantasy on 2022/9/19.
//

#include "stdio.h"
#include "tinymaix.h"


#include "vww96_q.h"

#define IMG_L 96
#define IMG_CH 3
#define VWW96_CLASS_NUM 2


//#include "pic_noperson1.h"
//#include "pic_noperson2.h"
//#include "pic_noperson3.h"

#include "pic_person1.h"
//#include "pic_person2.h"
//#include "pic_person3.h"

static char* vww96_labels[VWW96_CLASS_NUM] = {"no-person", "person"};
int test_vww96(int argc, char** argv);
