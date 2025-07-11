#pragma once // mealDirector.h

#include "mealBuilder.h" // For MealBuilder

class MealDirector {
public:
    constexpr explicit MealDirector(MealBuilder* builder)
      : m_builder(builder) {}

    constexpr void constructMeal()
    {
      m_builder->buildMainCourse();
      m_builder->buildDrink();
      m_builder->buildDessert();
    }

private:
    MealBuilder* m_builder;
};