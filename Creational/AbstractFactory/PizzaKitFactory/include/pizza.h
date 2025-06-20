#pragma once // __Pizza__

# include <memory>  // For std::unique_ptr
# include <vector>  // For std::vector

# include "ingredient.h"              // For IIngredient interface
# include "pizzaIngredientFactory.h"  // For IPizzaIngredientFactory interface

class Pizza {
public:
    explicit Pizza(const std::string& name, std::unique_ptr<IPizzaIngredientFactory> factory);
    ~Pizza() = default;

public:
    void prepare()  const;
    void bake()     const;
    void cut()      const;
    void box()      const;
    void describe() const;

private:
    const std::string m_name;

    std::unique_ptr<IPizzaIngredientFactory>  m_factory;
    std::vector<std::unique_ptr<IIngredient>> m_ingredients;

};
