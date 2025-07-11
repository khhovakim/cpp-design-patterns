#pragma once // mealBuilder.h

# include "meal.h" // For Meal

class MealBuilder
{
  public:
    virtual ~MealBuilder() = default;

  public:
    virtual void buildMainCourse() = 0;
    virtual void buildDessert()    = 0;
    virtual void buildDrink()      = 0;

    virtual const Meal* getMeal() const = 0;
};
