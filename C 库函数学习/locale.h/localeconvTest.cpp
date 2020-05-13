    #include <stdio.h>
    #include <locale.h>
    #include <string.h>
    int main ()
    {
        setlocale (LC_ALL,"");  //在Windows下请写作setlocale (LC_ALL,"zh-CN");
        struct lconv * lc;
        lc=localeconv();
        printf ("decimal_point: %s\n",lc->decimal_point);
        printf ("thousands_sep: %s\n",lc->thousands_sep);
        printf ("grouping: %s\n",lc->grouping);
        printf ("int_curr_symbol: %s\n",lc->int_curr_symbol);
        printf ("currency_symbol: %s\n",lc->currency_symbol);
        printf ("mon_decimal_point: %s\n",lc->mon_decimal_point);
        printf ("mon_thousands_sep: %s\n",lc->mon_thousands_sep);
        printf ("mon_grouping: %s\n",lc->mon_grouping);
        printf ("positive_sign: %s\n",lc->positive_sign);
        printf ("negative_sign: %s\n",lc->negative_sign);
        printf ("int_frac_digits: %d\n",lc->int_frac_digits);
        printf ("frac_digits: %d\n",lc->frac_digits);
        printf ("p_cs_precedes: %d\n",lc->p_cs_precedes);        
        printf ("p_sep_by_space: %d\n",lc->p_sep_by_space);
        printf ("n_cs_precedes: %d\n",lc->n_cs_precedes);
        printf ("n_sep_by_space: %d\n",lc->n_sep_by_space);
        printf ("p_sign_posn: %d\n",lc->p_sign_posn);
        printf ("n_sign_posn: %d\n",lc->n_sign_posn);
       
        return 0;
    }

/*
decimal_point: .
thousands_sep: ,
grouping: ╚
int_curr_symbol: CNY
currency_symbol: ￥
mon_decimal_point: .
mon_thousands_sep: ,
mon_grouping: ╚
positive_sign:
negative_sign: -
int_frac_digits: 2
frac_digits: 2
p_cs_precedes: 1
p_sep_by_space: 0
n_cs_precedes: 1
n_sep_by_space: 0
p_sign_posn: 4
n_sign_posn: 4
*/


