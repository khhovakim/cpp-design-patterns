#pragma once // fullMealBuilder.h

# include "mealBuilder.h" // For MealBuilder

class Meal; // Forward declaration of Meal

class FullMealBuilder : public MealBuilder
{
  public:
    FullMealBuilder() : m_meal{ new Meal() } {}
    ~FullMealBuilder() override { delete m_meal; }

  public:
    void buildMainCourse() override { m_meal->setMainCourse("Steak with Vegetables"); }
    void buildDessert()    override { m_meal->setDissert("Cheesecake");               }
    void buildDrink()      override { m_meal->setDrink("Red Wine");                   }

    const Meal* getMeal() const override { return m_meal; }

  private:
    Meal* m_meal; // Pointer to the meal being built
};