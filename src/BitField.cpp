//
// Created by marle on 10/14/2025.
//

struct BitField {
	unsigned int flag1 : 1;
	unsigned int flag2 : 1;
	unsigned int value : 6;

	BitField() : flag1(0), flag2(0), value(0) {}
};
