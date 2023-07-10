
# Wshadow & Wno-shadow

Ce sont des options spécifiques au compilateur GCC (GNU Compiler Collection) pour détecter et gérer les ombres (shadowing) de variables.

Lorsque vous activez l'option de compilation `-Wshadow`, le compilateur GCC vous avertira lorsqu'une variable locale est déclarée avec le même nom qu'une variable déjà déclarée dans une portée englobante. Le shadowing se produit lorsque deux variables avec le même nom se trouvent dans des portées imbriquées, ce qui peut entraîner une confusion et des erreurs lors de l'accès à ces variables.

Par exemple, considérez le code suivant :

```cpp
#include <iostream>

int main() {
    int x = 5;

    if (x > 0) {
        int x = 10;  // Shadowing de la variable x définie précédemment
        std::cout << x << std::endl;  // Affiche 10
    }

    std::cout << x << std::endl;  // Affiche 5

    return 0;
}
```

Lorsque vous compilez ce code avec `-Wshadow`, le compilateur générera un avertissement indiquant que la variable `x` dans la portée interne de `if` est en train de masquer (shadow) la variable `x` dans la portée externe du `main`.

Par contre, si vous utilisez l'option `-Wno-shadow`, vous désactivez les avertissements de shadowing lors de la compilation. Cela signifie que le compilateur n'émettra pas d'avertissements même si des variables sont ombragées (shadowed) dans des portées imbriquées.

Les options de compilation `-Wshadow` et `-Wno-shadow` vous permettent de contrôler le comportement du compilateur en matière de détection et de gestion des ombres de variables, en fonction de vos préférences et de vos besoins spécifiques dans votre projet.