	.file	"if_else.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"Enter a number less or equal to 3 "
.LC1:
	.string	"%d"
.LC2:
	.string	"I owe you three deaths "
.LC3:
	.string	"I owe you two deaths "
.LC4:
	.string	"I owe you one death"
.LC5:
	.string	"We are even "
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
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
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-12(%rbp), %eax
	cmpl	$3, %eax
	jne	.L2
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	jmp	.L3
.L2:
	movl	-12(%rbp), %eax
	cmpl	$2, %eax
	jne	.L4
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	jmp	.L3
.L4:
	movl	-12(%rbp), %eax
	cmpl	$1, %eax
	jne	.L5
	leaq	.LC4(%rip), %rdi
	call	puts@PLT
	jmp	.L3
.L5:
	leaq	.LC5(%rip), %rdi
	call	puts@PLT
.L3:
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
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
