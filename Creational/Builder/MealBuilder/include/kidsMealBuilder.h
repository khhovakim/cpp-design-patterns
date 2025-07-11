#pragma once // kidsMealBuilder.h

# include "mealBuilder.h" // For MealBuilder

class Meal; // Forward declaration of Meal

class KidsMealBuilder : public MealBuilder
{
  public:
    KidsMealBuilder() : m_meal{ new Meal() } {}
    ~KidsMealBuilder() override { delete m_meal; }

  public:
    void buildMainCourse() override { m_meal->setMainCourse("Kids Burger");      }
    void buildDessert()    override { m_meal->setDissert("Chocolate Ice Cream"); }
    void buildDrink()      override { m_meal->setDrink("Apple Juice");           }

    const Meal* getMeal() const override { return m_meal; }

  private:
    Meal* m_meal; // Pointer to the meal being built
};
