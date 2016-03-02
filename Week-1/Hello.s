	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 11
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	movl	$1, %ecx
	movl	%ecx, %esi
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str2(%rip), %rdi
	movl	$8, %ecx
	movl	%ecx, %esi
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str3(%rip), %rdi
	movl	$4, %ecx
	movl	%ecx, %esi
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str4(%rip), %rdi
	movl	$4, %ecx
	movl	%ecx, %esi
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Hello, Dean\n"

L_.str1:                                ## @.str1
	.asciz	"char: %lu\n"

L_.str2:                                ## @.str2
	.asciz	"double: %lu\n"

L_.str3:                                ## @.str3
	.asciz	"float: %lu\n"

L_.str4:                                ## @.str4
	.asciz	"int: %lu\n"


.subsections_via_symbols
