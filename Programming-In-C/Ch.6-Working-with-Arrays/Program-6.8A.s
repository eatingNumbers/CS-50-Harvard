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
	subq	$80, %rsp
	leaq	L_.str(%rip), %rdi
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -12(%rbp)
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	leaq	-20(%rbp), %rsi
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	cmpl	$1, -20(%rbp)
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	jl	LBB0_2
## BB#1:
	cmpl	$75, -20(%rbp)
	jle	LBB0_3
LBB0_2:
	leaq	L_.str.2(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$1, -12(%rbp)
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	jmp	LBB0_12
LBB0_3:
	movl	-20(%rbp), %eax
	movl	%eax, %ecx
	movq	%rsp, %rdx
	movq	%rdx, -32(%rbp)
	leaq	15(,%rcx,8), %rcx
	movabsq	$68719476720, %rdx      ## imm = 0xFFFFFFFF0
	andq	%rdx, %rcx
	movq	%rsp, %rdx
	subq	%rcx, %rdx
	movq	%rdx, %rsp
	movq	$0, (%rdx)
	movq	$1, 8(%rdx)
	movl	$2, -16(%rbp)
	movq	%rdx, -56(%rbp)         ## 8-byte Spill
LBB0_4:                                 ## =>This Inner Loop Header: Depth=1
	movl	-16(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	LBB0_7
## BB#5:                                ##   in Loop: Header=BB0_4 Depth=1
	movl	-16(%rbp), %eax
	subl	$2, %eax
	movslq	%eax, %rcx
	movq	-56(%rbp), %rdx         ## 8-byte Reload
	movq	(%rdx,%rcx,8), %rcx
	movl	-16(%rbp), %eax
	subl	$1, %eax
	movslq	%eax, %rsi
	addq	(%rdx,%rsi,8), %rcx
	movslq	-16(%rbp), %rsi
	movq	%rcx, (%rdx,%rsi,8)
## BB#6:                                ##   in Loop: Header=BB0_4 Depth=1
	movl	-16(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -16(%rbp)
	jmp	LBB0_4
LBB0_7:
	movl	$0, -16(%rbp)
LBB0_8:                                 ## =>This Inner Loop Header: Depth=1
	movl	-16(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	LBB0_11
## BB#9:                                ##   in Loop: Header=BB0_8 Depth=1
	leaq	L_.str.3(%rip), %rdi
	movslq	-16(%rbp), %rax
	movq	-56(%rbp), %rcx         ## 8-byte Reload
	movq	(%rcx,%rax,8), %rsi
	movb	$0, %al
	callq	_printf
	movl	%eax, -60(%rbp)         ## 4-byte Spill
## BB#10:                               ##   in Loop: Header=BB0_8 Depth=1
	movl	-16(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -16(%rbp)
	jmp	LBB0_8
LBB0_11:
	leaq	L_.str.4(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$0, -12(%rbp)
	movq	-32(%rbp), %rdi
	movq	%rdi, %rsp
	movl	%eax, -64(%rbp)         ## 4-byte Spill
LBB0_12:
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movl	-12(%rbp), %ecx
	movq	(%rax), %rax
	cmpq	-8(%rbp), %rax
	movl	%ecx, -68(%rbp)         ## 4-byte Spill
	jne	LBB0_14
## BB#13:                               ## %SP_return
	movl	-68(%rbp), %eax         ## 4-byte Reload
	movq	%rbp, %rsp
	popq	%rbp
	retq
LBB0_14:                                ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"How many Fibonacci numbers do you want (between 1 and 75)?"

L_.str.1:                               ## @.str.1
	.asciz	"%i"

L_.str.2:                               ## @.str.2
	.asciz	"Bad number, sorry!\n"

L_.str.3:                               ## @.str.3
	.asciz	"%llu "

L_.str.4:                               ## @.str.4
	.asciz	"\n"


.subsections_via_symbols
