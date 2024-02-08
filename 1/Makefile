CC	= clang
INSTDIR = ./
CFLAGS	= -w -I/usr/local/include -I. -DDEBUG -O3
LIBDIR  = -L/usr/local/lib -Wl,--rpath -Wl,/usr/local/lib
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
