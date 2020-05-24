#
##############################################################################################
# file name: makefile
#
# On command line:
#
# make all = Create project
#
# make clean = Clean project files.
#
# To rebuild project do "make clean" and "make all".
#
# create by: huangping
# date: 2011
##############################################################################################
#
#-Dmacro=string，等价于在头文件中定义: #define   macro   string.
#	例如：-DTRUE=true，等价于: #define   TRUE   true  
#	      -Dmacro，等价于在头文件中定义: #define   macro   1
#
#CROSS_COMPILE = arm-linux-
CC = $(CROSS_COMPILE)g++
AR = $(CROSS_COMPILE)ar
STRIP = $(CROSS_COMPILE)strip

EXTRA_CFLAGS = -rdynamic -g
PROJECT = wt-server

SRC  =	main.cpp \
HttpService.cpp \
mongoose.cpp

OBJS = $(SRC:.cpp=.o)
All: $(OBJS) $(PROJECT)


%o : %c
	@echo "Compiling $<"
	$(CC) -c $(EXTRA_CFLAGS) $< -o $@

$(PROJECT): $(OBJS)
	@echo "Linking $@"
	@$(CC) $(OBJS)  -lpthread -ldl -lrt -lm $(EXTPA_LFLAGS)  -o $@
	$(STRIP) $(PROJECT)

clean :
	@echo "cleaning"
	rm -rf $(PROJECT) $(OBJS)
	
