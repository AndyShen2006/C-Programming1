	.file	"aaa.c"
	.text
.globl _swap
	.def	_swap;	.scl	2;	.type	32;	.endef
_swap:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$4, %esp
	movl	8(%ebp), %eax
	movzbl	(%eax), %eax
	movb	%al, -1(%ebp)
	movl	8(%ebp), %edx
	movl	12(%ebp), %eax
	movzbl	(%eax), %eax
	movb	%al, (%edx)
	movl	12(%ebp), %edx
	movzbl	-1(%ebp), %eax
	movb	%al, (%edx)
	leave
	ret
	.def	___main;	.scl	2;	.type	32;	.endef
.globl _main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	andl	$-16, %esp
	movl	$0, %eax
	addl	$15, %eax
	addl	$15, %eax
	shrl	$4, %eax
	sall	$4, %eax
	movl	%eax, -8(%ebp)
	movl	-8(%ebp), %eax
	call	__alloca
	call	___main
	movb	$65, -1(%ebp)
	movb	$66, -2(%ebp)
	movsbl	-1(%ebp),%eax
	movl	%eax, (%esp)
	call	_putchar
	movsbl	-2(%ebp),%eax
	movl	%eax, (%esp)
	call	_putchar
	leal	-2(%ebp), %eax
	movl	%eax, 4(%esp)
	leal	-1(%ebp), %eax
	movl	%eax, (%esp)
	call	_swap
	movsbl	-1(%ebp),%eax
	movl	%eax, (%esp)
	call	_putchar
	movsbl	-2(%ebp),%eax
	movl	%eax, (%esp)
	call	_putchar
	movl	$0, %eax
	leave
	ret
	.def	_putchar;	.scl	2;	.type	32;	.endef
