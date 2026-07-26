 
             MCQs Time!
{
	Mcqs 1.
 	int b = 6.6 / a+2*n;
	which operation should be performed 1st?
	1. 6.6/a   right option
	2. a+b
	3. 2*n
	4. Depends upon compiler
	solution:
		operator precedence in C/C++
		1. * and / have the same preceence, higher than +
		2. When operators have the same precedence,evaluated is left to right.
		so first 6.6/a is evaluated then 2*n, and finally the +
}

{
	Mcqs 2.
	The expression a = 7/22*(3.14+2)*3/5
	1. 8.28
	2. 6.28
	3. 3.14
	4. 0    //right ans
	solution:
		1st solve bracket
		a = 7/22*(3.14+2)*3/5
		a = 7/22*5.14*3/5
		now from left to write bec div and multi has same value
		a = 0*5.14*3/5
		a = 0*3/5
		a = 0/5
		a = 0.
		
		rules:
			1. if int/int or int*int so ans will be in int value.
			1. if int/float or int*float so ans will be in float value.
			1. if float/int or float*int so ans will be in float value.
			1. if float/float or int*int so ans will be in float value.
}

{
	Mcqs 3.
	The expression x = 4+2%-8 evaluates to
	1. -6
	2. 6  //right option
	3. 4
	4. None of the above
	solution:
		1. /,*,% has 1st and same priority order.
		2. /,*,% has more priority than +,-
		so:
			x = 4+2%-8
			x = 4+ 2%-8
			x = 4+ 2%8
			x = 4+ 2
			x = 6
			
			rules:
				1. a%(-b) = a%b
				2. a%b = a because a is less than b [a<b]
}

{
	Mcqs 3
	What will be the value of d if d is a float after the operation d = 2/7?
	1. 0   //right option
	2. 0.2857
	3. cannot be determined
	4. None of the above
	solution:
		as we know that int/int = int value because computer 1st solve the operaion then store that result
		into as a datatype.
		so:
			the 2/7 = 0.
	
}
