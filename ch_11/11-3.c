

enum Test {	// 有名枚举	
	T1,
	T2,
	T3
};

typedef enum {	// 有名枚举
	T1,
	T2,
	T3
} Test;

enum {	// 无名枚举
	T1,
	T2,
	T3
};
	
	



if {


}


enum {	              // 无名枚举，用于定义常量
	ARRAY_SIZE = 10	  // 定义数组大小
};

int array[ARRAY_SIZE] = {0};
int i = 0;

for (i=0; i<ARRAY_SIZE; i++) {
	array[i] = i + 1;
}



