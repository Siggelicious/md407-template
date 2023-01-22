__attribute((naked))
__attribute((section(".start_section")))
void startup(void) {
	__asm volatile(
			"ldr r0,=0x2001c000"
			"mov sp,r0"
			"bl main"
			"b ."
			);
}

int main() {
	return 0; 
}
