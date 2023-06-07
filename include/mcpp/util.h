#pragma once

#include <vector>

#include "block.h"

namespace mcpp {
/**
 * Represented using integers since sub-unit coordinates are not of particular relevance. Allows for
 * operations such as addition between coordinates.
 */
    class Coordinate {
    public:
        explicit Coordinate(int x = 0, int y = 0, int z = 0);

        Coordinate(double x, double y, double z);

        Coordinate operator+(const Coordinate& obj) const;

        bool operator==(const Coordinate& obj) const;

        Coordinate operator-(const Coordinate& obj) const;

        [[nodiscard]] Coordinate clone() const;

        int x;
        int y;
        int z;
    };

    std::vector<std::vector<std::vector<BlockType>>>
    unflattenBlocksArray(const Coordinate& loc1, const Coordinate& loc2, const std::vector<BlockType>& inVector);

    std::vector<std::vector<int>>
    unflattenHeightsArray(const Coordinate& loc1, const Coordinate& loc2, const std::vector<int>& inVector);
}