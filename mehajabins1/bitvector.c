#include<stdio.h>
#include<ctype.h>

int i;
char univ_set[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

char set1[26], set2[26];
int bit_vec1[26], bit_vec2[26], result[26];

void initializeSet()
{
    for(i=0;i<26;i++)
    {
        bit_vec1[i]=0;
        bit_vec2[i]=0;
        result[i]=0;
    }
}

void bitvector(char ary[26], int bit[26], int num)
{
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<26; j++)
        {
            char c = tolower(ary[i]);
            if(c == univ_set[j])
                bit[j] = 1;
        }
    }
}

void setUnion(int bit1[26], int bit2[26])
{
    for(int i=0; i<26; i++)
        result[i] = bit1[i] | bit2[i];   // FIXED 26 → i
}

void setIntersection(int bit1[26], int bit2[26])
{
    for(int i=0; i<26; i++)
        result[i] = bit1[i] & bit2[i];   // FIXED 26 → i
}

void setCompliment(int bit[26])
{
    for(int i=0;i<26;i++)
        result[i] = (bit[i] == 0) ? 1 : 0;
}

void setDifference(int bit1[26], int bit2[26])
{
    int temp[26];
    for(int i=0;i<26;i++)
        temp[i] = (bit2[i] == 0) ? 1 : 0; // compliment

    for(int i=0;i<26;i++)
        result[i] = bit1[i] & temp[i];
}

int main()
{setUnion(bit_vec1, bit_vec2);
setIntersection(bit_vec1, bit_vec2);
setCompliment(bit_vec1);
setDifference(bit_vec1, bit_vec2);

/* ← ADD PRINT STATEMENTS HERE */

printf("\nUnion result (in bit form): ");
for(int i=0; i<26; i++)
    printf("%d ", result[i]);

setIntersection(bit_vec1, bit_vec2);
printf("\nIntersection result (in bit form): ");
for(int i=0; i<26; i++)
    printf("%d ", result[i]);

setCompliment(bit_vec1);
printf("\nComplement of set1 (in bit form): ");
for(int i=0; i<26; i++)
    printf("%d ", result[i]);

setDifference(bit_vec1, bit_vec2);
printf("\nDifference (set1 - set2) (in bit form): ");
for(int i=0; i<26; i++)
    printf("%d ", result[i]);

printf("\n");


    return 0;
}

