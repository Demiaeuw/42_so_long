# Nom de l'executable
NAME = so_long

# Fichiers source
SRCS =	main.c\
	srcs/00_erreur/erreur00.c\
	srcs/00_erreur/erreur01.c\
	srcs/01_argument/argument00.c\
	srcs/01_argument/argument01.c\
	srcs/01_argument/argument02.c

UTILS =	srcs/utils/utils_so_long/ft_putendl_fd.c\
	srcs/utils/utils_so_long/ft_strcmpend.c

OTHER =	srcs/utils/ft_printf/ft_printf00.c\
	srcs/utils/ft_printf/ft_printf01.c\
	srcs/utils/ft_printf/ft_printf02.c

# Fichiers objets
OBJS = $(SRCS:.c=.o)
OBJSUTILS = $(UTILS:.c=.o)
OBJSOTHER = $(OTHER:.c=.o)

# Flags de compilation
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

# Règle par défaut
all: printhader printactionobj $(NAME) printactionobjok printend
rapide: $(NAME)

# Règle pour créer l'exécutable
$(NAME): $(OBJS) $(OBJSUTILS) $(OBJSOTHER)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(OBJSUTILS) $(OBJSOTHER)

# Règle pour nettoyer les fichiers objets
exe: all clean

clean:
	@$(RM) $(OBJS) $(OBJSUTILS) $(OBJSOTHER)

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) printendclean

re: fclean all

#----------------------------------------------------------------------------

# Règle d'affichage
printhader: 
	@sleep 0.1
	@echo "                                                   "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo "                                                   "
	@sleep 0.1
	@echo "             _                   "

	@sleep 0.1
	@echo "            | |                  "
	@sleep 0.1
	@echo "  ___  ___  | | ___  _ __   ____ "
	@sleep 0.1
	@echo " / __|/ _ \ | |/ _ \| |_ \ / _  |"
	@sleep 0.1
	@echo " \__ \ (_) || | (_) | | | | (_| |"
	@sleep 0.1
	@echo " |___/\___/ |_|\___/|_| |_|\__, |"
	@sleep 0.1
	@echo "        ______              __/ |"
	@sleep 0.1
	@echo "       |______|            |___/ "
	@sleep 0.1
	@echo "                                                   "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo "\033[97m                                                   \033[0m"
	@sleep 1

printactionobj:
	@echo " "
	@echo " "
	@sleep 0.5
	@echo "\033[97m   Compilation des\033[0m \033[38;5;208mfichiers OBJET\033[0m --> 💻"
	@echo " "
	@echo " "
	@sleep 0.5

printactionobjok:
	@echo " "
	@echo " "
	@sleep 0.5
	@echo "   Compilation des \033[32mfichiers OBJET\033[0m --> ✅"
	@echo " "
	@echo " "
	@sleep 0.5

printend:
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "   Utilitaire : \033[94m./so_long\033[0m est utilisable."
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo " "
	@sleep 0.1

printendclean:
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@echo " "
	@sleep 0.1
	@echo "   Tous les fichiers sont supprimé 🚮"
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "   \033[32mMerci d'avoir utilisé\033[0m \033[94mso_long\033[0m"
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo " "
	@sleep 0.1