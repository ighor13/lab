CC	= clang
INSTDIR = ./
CFLAGS	= -w -I. -DDEBUG -O3
LIBDIR  = 
LIB     = 
SOURCES	= main.c
OBJS	= main.o
TARGET	= doit
RM      = rm

all: $(OBJS)
	$(CC) $(LIBDIR) -o ${TARGET} $(OBJS) $(LIB)

$(OBJS): 
	$(CC) $(CFLAGS) -c $(SOURCES)

clean: 
	@-$(RM) *.o $(TARGET)
install:
	cp ${TARGET} ${INSTDIR}
