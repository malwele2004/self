
#ifndef DEF
#define DEF

struct memory {
  char* ptr;
  long allocated, 
		   write_ptr;
};

struct block 
{
		struct block *parent,
								 *handler,
								 *chandler,
								 *children;
                 
    long nchildren;
		struct memory data;
}; 
#endif
