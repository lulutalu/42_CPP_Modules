# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 18:29:51 by lduboulo          #+#    #+#              #
#    Updated: 2022/09/26 17:04:22 by lduboulo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLORS

GREEN	= \033[1;32m
RED 	= \033[1;31m
ORANGE	= \033[1;33m
BUILD	= \e[38;5;225m
SEP		= \e[38;5;120m
DUCK	= \e[38;5;227m
RESET	= \033[0m

# COLORS


SRCS_DIR		= .
SRCS_FILES		= main.cpp

SRCS			= ${patsubst %, ${SRCS_DIR}%, ${SRCS_FILES}}

O_DIR			= ./objs/

OBJS_FILES		:= ${SRCS_FILES:.cpp=.o}

OBJS			:= ${patsubst %, ${O_DIR}%, ${OBJS_FILES}}

NAME			= Sed

CC				= c++
AR				= ar rcs
MKDIR			= mkdir
RM				= rm -rf

CXX_FLAGS		= -Wall -Wextra -Werror -std=c++98 -pedantic

TSEP			= ${SEP}=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=${RESET}


all:			${NAME}

${NAME}:		${O_DIR} ${OBJS}
				@printf "\n"
				@printf "${TSEP}\n"
				@printf "\n${GREEN} ๐ป Successfully compiled ${NAME} .o's${RESET} โ\n"
				@${CC} ${CXX_FLAGS} -o ${NAME} ${OBJS}
				@printf "${GREEN} ๐ป Successfully created ${NAME} executable${RESET} โ\n"
				@printf "\n${TSEP}\n"

${O_DIR}:
				@${MKDIR} ${O_DIR}
				@printf "${BUILD}${O_DIR} Directory Created ๐${RESET}\n\n"

${O_DIR}%.o:%.cpp
				@${CC} ${CXX_FLAGS} -o $@ -c $<
				@printf "\e[1K\r${BUILD} ๐ง $@ from $<${RESET}"

clean :
				@${RM} ${O_DIR}
				@printf "\n${RED} ๐งน Deleted ${NAME} .o's${RESET} โ\n\n"

fclean : 		clean
				@${RM} ${NAME} ${NAME}.dSYM
				@printf "${RED} ๐ฅ Deleted ${NAME} files${RESET} โ\n\n"

re : 			fclean all

.PHONY : all clean fclean re
