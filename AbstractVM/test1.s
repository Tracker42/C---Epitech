		   ;; dfdsgd
push int32(42) 					; aaaaahhhh
	push int32(33)
  ; Here the stack contains two elements

add
; The two operands on the stack are added then poped
; The result is then pushed onto the stack

push float(44.55)
; Here the stack contains two values, the result of the
; addition and the value 44.55

mul
; the two values are then multiplied

push double(42.42)
push int32(42)

dump
; Then dump the content of the stack

pop
; Pop the value on top of the stack

assert double(42.42)
; This opcode may stop the execution of the program if
; the value on top of the stack does not equal the operand.
exit