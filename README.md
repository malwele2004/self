Self
====

Is an interpreted general purpose programming language.
That can be statically or dynamically typed.
Cleans up declared variables if their aren't referred to.
It is a block oriented language where cascading of blocks elicits logic and structure.

Feels like C and runs like any typical interepreted programming language.
Help me grow by reporting bugs and criticize this project `email: malwele085@gmail.com`

Syntax
------

include types.sf INCLUDING MODULE

Types
------
Types With Default Values: ptr(?), any(?), i8(0), u8(0), i16(0), u16(0), i32(0), u32(0), i64(0), u64(0), type(type,...)(function ret_type(parater_list)), cstr, string, bool, f32, f64
Operators : +, -, %, *, / , <, >, <= , >=, is, ^, and, or, <- (assignment), ->(calling a method off instance), .(getting attribute)
Prefixes  : @ (address of), # Deference, !(readonly pointer), &(readwrite pointer), const(makes type const)
Suffixes  : [N], []

?   : Null value
!?  : Throws exception
??  : Fatal error

Handling Exception 
-----------------

func <- (a, b) {
  $ this is a comment
  !? 
} :: {
  parent.variable = SOMETHING;
  parent->some_function(); FUNCTION DECLARED IN PARENT
  
  println("Success");
} :: {
  THIS CASCADING CAN CONTINUE
  skip; SKIP BLOCK
  break; BREAK BLOCK goes out of cascading blocks
  self; CALL ITSELF creating loops
}

loop
-----

x <- 0;

x < 10 {
  println("Hello world");
  x++;
  self;
}

x < 10 {
  print("This is a if-else-if-block");
} x == 10 :: {
  MUST HAVE A CONDITION OR ELSE THIS WILL BE A CASCADING BLOCK THAT ONLY WORKS ON PARENT FAIL, CONDITIONAL BLOCKS CAN'T ACCESS PARENT INFORMATION
  print("e");
} x > 10 and x < 20 :: {
  print("wow");
} any :: { ELSE
  print("Infinite loop else");
  self; THAT IS A LOOP
}

!? EXITING FATAL USE WITH CAUTION, CANT BE HANDLED

Casting
-------

x <- 12.45:i32

Declaring array
---------------
arr[5] <- 1,2,3,4,5; ; DECLARING OF I32
arr[2] <- "hello", 45.5 ; DECLARING ARRAY OF ANY

arr[34] <- 0; FILLS THE REST WITH ZERO, i32

With type
----
arr:i32[10];
arr:i32[10] <- 1,2,3;

Indexing
--------
y <- arr[5]:f64; ELEMENT IS CASTED TO F64, AND PUT INTO Y THAT IF DOES NOT EXIST CREATES AN F64

Interface/Class
-----

Interface simply adds more methods to existing class

specifiers on methods of inteface or Class

global, local, private, public

global: Public method called without instance e.g. i32::parse_string(str);
local : Private method called without instance e.g. i32::is_overflow(); USED INTERNALLY IN CLASS/INTERFACE
private: Private method called on instance
public: Public method called on instance

i32 {
  + <- (a,b) {
    return add(a,b);
  }
}

instance:Class <- Class(); CREATING OBJECT WITH EXPLICIT TYPE
instance  <- Class();      CREATING OBJECT WITH NO EXPLICIT TYPE

Creating a vector
-----------------

vec[]; TYPE ANY[]
vec[] <- 9, 0, 3, 4; TYPE i32


