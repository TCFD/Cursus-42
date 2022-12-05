#!/bin/bash

#------////////////////// Couleurs \\\\\\\\\\\\\\\\------#
#
#

violetclair='\e[1;35m'
rougeclair='\e[1;31m'
vertclair='\e[1;32m'
bleuclair='\e[1;34m'
jaune='\e[0;33m'
neutre='\e[0;m'

#
#
#----/\----#

#-------////////////////// MAKEFILE \\\\\\\\\\\\\\\\-------#
#
#

#----------- Fonction(s) -----------#
#

print_with_space(){
    sentence="$1"
    valid="$2"

    length=`expr 20 - ${#sentence}`

    while [ $length -gt 0 ]
    do
        sentence="$sentence "
        length=`expr $length - 1`
    done

    echo -e "$sentence --> $3 $valid ${neutre}"
}

#
#--------- FIN Fonction(s) ---------#

#----------- Variable(s) -----------#
#

liste_test_Makefile=(
    "make"
    "make clean"
    "make re"
    "make fclean"
)

ErreurMakefileOutput="ErreurMakefile"

#
#--------- FIN Variable(s) ---------#


#--------- Initialisation ----------#
#

rm $ErreurMakefileOutput>/dev/null 2>&1

#
#-------- FIN Initialisation -------#

#------------ Main Code ------------#
#

clear

echo -e "#-------------- ${jaune}Makefile testing${neutre} --------------#\n|"

for test_Makefile in "${liste_test_Makefile[@]}"
do
    if $test_Makefile>/dev/null 2>>$ErreurMakefileOutput;then
        print_with_space "$test_Makefile" "SUCCESS" "${vertclair}"
    else
        print_with_space "$test_Makefile" "FAIL" "${rougeclair}"
    fi
done

if [ ! -s $ErreurMakefileOutput ];then
    rm $ErreurMakefileOutput            #--- If the file is empty, remove it
    echo "
    Si vous avez .PHONY dans votre Makefile, testez sans.    
    "
else
    echo -e "
    
    Avant de continuer plus loin, veuillez corriger les erreurs spécifiées dans ${jaune} $ErreurMakefileOutput ${neutre}."
    exit 1
fi

#
#--------- FIN Main Code ---------#

#
#
#----/\----#

#-------////////////////// PRINTF \\\\\\\\\\\\\\\\-------#
#
#

#----------- Fonction(s) -----------#
#

create_main(){
    file="$2"
    printf_file="printf_$file"
    ft_printf_file="ft_printf_$file"

    if [ "$1" = "0" ];then
        echo -e "#include <stdio.h>\n">$printf_file
        echo -e "#include \"$3\"\n">$ft_printf_file

        echo -e "int     main(void){\n">>$printf_file
        echo -e "int     main(void){\n">>$ft_printf_file

    elif [ "$1" = "1" ];then

        echo -e "  return (0);\n}">>$printf_file
        echo -e "  return (0);\n}">>$ft_printf_file

    fi
}


test_printf(){
    file="$1"
    printf_file="printf_$file"
    ft_printf_file="ft_printf_$file"

    echo "  printf$2">>$printf_file
    echo "  ft_printf$2">>$ft_printf_file
}

#
#--------- FIN Fonction(s) ---------#

#----------- Variable(s) -----------#
#

liste_test_printf=(
    "(\"str = %s\n\", \"Teststr\");" # Str
    "(\"char = %c\n\", 'A');"         # Char
    
    "(\"int(d) = %d\n\", 0);"           # Int (%d)
    "(\"int(d) = %d\n\", 134);"         #
    "(\"int(d) = %d\n\", -134);"        #
    "(\"int(d) = %d\n\", 2147483646);"  #
    "(\"int(d) = %d\n\", -2147483647);" #

    "(\"int(i) = %i\n\", 0);"           # Int (%i)
    "(\"int(i) = %i\n\", 134);"         #
    "(\"int(i) = %i\n\", -134);"        #
    "(\"int(i) = %i\n\", 2147483646);"  #
    "(\"int(i) = %i\n\", -2147483647);" #

    "(\"unsigned int = %u\n\", 0);"           # Unsigned int
    "(\"unsigned int = %u\n\", 134);"         #
    "(\"unsigned int = %u\n\", -134);"        #
    "(\"unsigned int = %u\n\", -1);"          #
    "(\"unsigned int = %u\n\", -0);"          #

    "(\"hexa min = %x\n\", 0);"           # Hexa min
    "(\"hexa min = %x\n\", 1);"           #
    "(\"hexa min = %x\n\", -1);"          #
    "(\"hexa min = %x\n\", -0);"          #
    "(\"hexa min = %x\n\", 123456);"      #

    "(\"hexa MAJ = %X\n\", 0);"           # Hexa Maj
    "(\"hexa MAJ = %X\n\", 1);"           #
    "(\"hexa MAJ = %X\n\", -1);"          #
    "(\"hexa MAJ = %X\n\", -0);"          #
    "(\"hexa MAJ = %X\n\", 123456);"      #

    "(\"Pourcent = %%\n\");"              # %
)


# Manque %p

echo ""
read -p "Nom du header > " header_name

OutputFile="main.c"
FileTest_printf="printf_test"
FileTest_ft_printf="ft_printf_test"
File_Deepthought="deepthought"

statu=0

#
#--------- FIN Variable(s) ---------#

#--------- Initialisation ----------#
#

rm $OutputFile>/dev/null 2>&1
rm $FileTest_printf>/dev/null 2>&1
rm $FileTest_ft_printf>/dev/null 2>&1
rm $File_Deepthought>/dev/null 2>&1
rm "LeaksError">/dev/null 2>&1

touch $FileTest_printf
touch $FileTest_ft_printf

#
#-------- FIN Initialisation -------#

#------------ Main Code ------------#
#

echo -e "\n#-------------- ${jaune}Main Generation${neutre} --------------#\n|"

create_main "0" "$OutputFile" "$header_name"

for tests in "${liste_test_printf[@]}"
do
    test_printf "$OutputFile" "$tests"
done

create_main "1" "$OutputFile"

echo -e "--> ${bleuclair}SUCCESS${neutre}"

#
#--------- FIN Main Code ---------#

#------ Commande Execution -------#
#

make>/dev/null 2>&1

gcc -c printf_main.c
gcc *.o
echo "$(./a.out)" >$FileTest_printf
rm printf_main.o

gcc -c ft_printf_main.c
gcc *.o
echo "$(./a.out)" >$FileTest_ft_printf
rm ft_printf_main.o

diff -u $FileTest_printf $FileTest_ft_printf>$File_Deepthought

rm $FileTest_printf
rm $FileTest_ft_printf

make fclean>/dev/null 2>&1

echo -e "\n${vertclair}#------------------- TEST --------------------#${neutre}"


#############

echo -e "\n#---------------- ${jaune}Code Tests${neutre} -----------------#\n|"

if [ ! -s $File_Deepthought ];then

    rm $File_Deepthought>/dev/null 2>&1
    echo -e "--> ${vertclair}OK${neutre} !"
    statu=`expr $statu + 1`

else

    echo -e "-->${rougeclair} FAIL${neutre}\n--> Consulte ${violetclair}$File_Deepthought${neutre}."

fi

##############

echo -e "\n#------------------ ${jaune}Leaks ?${neutre} ------------------#\n|"


valgrind --leak-check=full --track-origins=yes ./a.out>/dev/null 2>"LeaksError"
testV=$( sed -n '/ERROR SUMMARY: 0 errors/=' "LeaksError" )

if [ "$testV" ];then
    rm "LeaksError">/dev/null 2>&1
    echo -e "-->${vertclair}SUCCESS${neutre}\nEt bien, BG, rien à dire."
    statu=`expr $statu + 1`
else
    echo -e "${rougeclair}WOUHAAAAAA CATASTROUPHE${neutre} !\n--> Consulte ${violetclair}LeaksError${neutre}"
fi


#if sed -n '/Error 0/=' "$( valgrind ./a.out>/dev/null 2>&1 )"; then

 #   echo -e "${rougeclair}WOUHAAAAAA CATASTROUPHE${neutre} !\nConsulte ${violetclair}LeaksError${neutre}"
  #  valgrind --leak-check=full --show-leak-kinds=all ./a.out>/dev/null 2>"LeaksError"

#else

 #   echo -e "-->${vertclair}SUCCESS${neutre}\nEt bien, BG, rien à dire."
  #  statu=`expr $statu + 1`

#fi

##############

echo -e "\n#------------------ ${bleuclair}Result${neutre} -------------------#\n|\t\t\t\t\t      |"

if [ "$statu" -eq 2 ];then

    echo -e "\t      ft_printf : ${vertclair}OK${neutre}    \t      |"
    exit 0

else

    echo -e "|\t      ft_printf : ${rougeclair}FAIL${neutre}    \t      |"
    echo    "|_____________________________________________|"
    exit 1

fi


#
#---- FIN Commande Execution -----#

#
#
#----/\----#