	.file	"calculator.c"
	.text
	.section	.rodata
.LC1:
	.string	"1. Addition"
.LC2:
	.string	"2. Subtraction"
.LC3:
	.string	"3. Multiplication"
.LC4:
	.string	"4. Division"
.LC5:
	.string	"5. Exit\n"
.LC6:
	.string	"Enter Your Choice(1-5): "
.LC7:
	.string	"%d"
.LC8:
	.string	"\nEnter any two Numbers: "
.LC9:
	.string	"%f %f"
.LC10:
	.string	"\nResult = %0.2f"
.LC11:
	.string	"\nWrong Choice!"
.LC12:
	.string	"\n------------------------"
	.text
	.globl	Calculator
	.type	Calculator, @function
Calculator:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	movss	%xmm0, -12(%rbp)
.L12:
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	leaq	.LC4(%rip), %rdi
	call	puts@PLT
	leaq	.LC5(%rip), %rdi
	call	puts@PLT
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-16(%rbp), %eax
	testl	%eax, %eax
	jle	.L2
	movl	-16(%rbp), %eax
	cmpl	$4, %eax
	jg	.L2
	leaq	.LC8(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rdx
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC9(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
.L2:
	movl	-16(%rbp), %eax
	cmpl	$5, %eax
	ja	.L3
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L5(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L5(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L5:
	.long	.L3-.L5
	.long	.L9-.L5
	.long	.L8-.L5
	.long	.L7-.L5
	.long	.L6-.L5
	.long	.L4-.L5
	.text
.L9:
	movss	-24(%rbp), %xmm1
	movss	-20(%rbp), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	cvtss2sd	-12(%rbp), %xmm0
	leaq	.LC10(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L10
.L8:
	movss	-24(%rbp), %xmm0
	movss	-20(%rbp), %xmm1
	subss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	cvtss2sd	-12(%rbp), %xmm0
	leaq	.LC10(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L10
.L7:
	movss	-24(%rbp), %xmm1
	movss	-20(%rbp), %xmm0
	mulss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	cvtss2sd	-12(%rbp), %xmm0
	leaq	.LC10(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L10
.L6:
	movss	-24(%rbp), %xmm0
	movss	-20(%rbp), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	cvtss2sd	-12(%rbp), %xmm0
	leaq	.LC10(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L10
.L4:
	movl	$0, %eax
	jmp	.L13
.L3:
	leaq	.LC11(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
.L10:
	leaq	.LC12(%rip), %rdi
	call	puts@PLT
	movl	-16(%rbp), %eax
	cmpl	$5, %eax
	jne	.L12
	movl	$0, %eax
.L13:
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L14
	call	__stack_chk_fail@PLT
.L14:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	Calculator, .-Calculator
	.section	.rodata
	.align 8
.LC13:
	.string	"****************************************************************************************"
	.align 8
.LC14:
	.string	"*##                                                                                  ##*"
	.align 8
.LC15:
	.string	"*##                                  CALCULATOR                                      ##*"
.LC16:
	.string	"Type Of Calculator"
.LC17:
	.string	"1.Standard"
.LC18:
	.string	"2.Sintific"
	.align 8
.LC19:
	.string	"You have Selected Standard Mode"
	.align 8
.LC20:
	.string	"You have Selected Sintific Mode"
.LC21:
	.string	"Wrong Input/n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC13(%rip), %rdi
	call	puts@PLT
	leaq	.LC13(%rip), %rdi
	call	puts@PLT
	leaq	.LC14(%rip), %rdi
	call	puts@PLT
	leaq	.LC14(%rip), %rdi
	call	puts@PLT
	leaq	.LC15(%rip), %rdi
	call	puts@PLT
	leaq	.LC14(%rip), %rdi
	call	puts@PLT
	leaq	.LC14(%rip), %rdi
	call	puts@PLT
	leaq	.LC13(%rip), %rdi
	call	puts@PLT
	leaq	.LC13(%rip), %rdi
	call	puts@PLT
	leaq	.LC16(%rip), %rdi
	call	puts@PLT
	leaq	.LC17(%rip), %rdi
	call	puts@PLT
	leaq	.LC18(%rip), %rdi
	call	puts@PLT
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-12(%rbp), %eax
	cmpl	$1, %eax
	jne	.L16
	leaq	.LC19(%rip), %rdi
	call	puts@PLT
	movl	$0, %eax
	call	Calculator
	movl	$0, %edi
	call	exit@PLT
.L16:
	movl	-12(%rbp), %eax
	cmpl	$2, %eax
	jne	.L17
	leaq	.LC20(%rip), %rdi
	call	puts@PLT
	movl	$0, %edi
	call	exit@PLT
.L17:
	leaq	.LC21(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC12(%rip), %rdi
	call	puts@PLT
	movl	$0, %edi
	call	exit@PLT
	.cfi_endproc
.LFE7:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
