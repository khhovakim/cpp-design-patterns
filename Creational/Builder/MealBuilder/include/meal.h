#pragma once // meal.h

# include <string>   // For std::string
# include <iostream> // For std::cout
# include <optional> // For std::optional

class Meal
{
  public:
    Meal() = default;
    ~Meal() = default;

  public:
    constexpr void setMainCourse(const std::string& mainCourse) { m_mainCourse = mainCourse; }
    constexpr void setDissert(const std::string& dessert)       { m_dessert    = dessert;    }
    constexpr void setDrink(const std::string& drink)           { m_drink      = drink;      }

    void show() const
    {
      std::cout << "🍽️ Your Meal:\n";
      if (m_mainCourse) std::cout << "  • Main Course: " << *m_mainCourse << "\n";
      if (m_drink)      std::cout << "  • Drink: "       << *m_drink      << "\n";
      if (m_dessert)    std::cout << "  • Dessert: "     << *m_dessert    << "\n";
    }
  private:
    std::optional<std::string> m_mainCourse {};
    std::optional<std::string> m_dessert    {};
    std::optional<std::string> m_drink      {};
};