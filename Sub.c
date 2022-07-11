#include <stdio.h>

int main()
{
    char plaintext[250];
    int size, index;
    

    printf("Enter the plaintext: ");
    scanf("%s", plaintext);

    char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char random[26] =   {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};

    index = 0;
    size = sizeof(plaintext);

    for(index = 0; index < 250; index++)
    {
        for(size = 0; size < 26; size++)
        {
            if(plaintext[index] == alphabet[size] && plaintext[index] != '\0')
            {
                plaintext[index] = random[size];   
                break;
            }
        }
    }

    printf("Encrypted text: %s\n", plaintext);
    return 0;
}
