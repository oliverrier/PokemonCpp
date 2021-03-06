//
// Created by notitou on 25/01/2021.
//

#ifndef POKEMONCPP_POKEMON_H
#define POKEMONCPP_POKEMON_H
#include <iostream>
#include "../Move/Move.h"
#include "../PokemonType/PokemonType.h"
#include <vector>


class Pokemon {
    private:

    int id;
    std::string pokemonName;
    std::string name;
    PokemonType type;
    int currentHP;
    int maxHP;
    bool isCaptured;
public:

    Pokemon(int id, const std::string &name, const PokemonType &type, int currentHp, int maxHp,
            const std::vector<Move> &moves, bool isCaptured);

    Pokemon();

    void rename(std::string pokemonName);

    int useTM(Move move);

    int getId() const;

    void setId(int id);

    const std::string &getPokemonName() const;

    void setPokemonName(const std::string &pokemonName);

    const std::string &getName() const;

    void setName(const std::string &name);

    const PokemonType &getType() const;

    void setType(const PokemonType &type);

    int getCurrentHp() const;

    void setCurrentHp(int currentHp);

    int getMaxHp() const;

    void setMaxHp(int maxHp);

    const std::vector<Move> &getMoves();

    void setMoves(const std::vector<Move> &moves);

    void setIsCaptured(bool isCaptured);

    bool getIsCaptured() const;

    std::vector<Move> moves;
};


#endif //POKEMONCPP_POKEMON_H
