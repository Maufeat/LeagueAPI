#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LootLcdsClientConfigurationDTO { 
    std::vector<std::string> lootMaterialsToAlwaysRender;
    std::vector<std::string> currenciesUsingCapWallets;
    std::vector<std::string> lootItemsUsingBreakoutRecipeMenu; 
  };
  inline void to_json(json& j, const LootLcdsClientConfigurationDTO& v) {
    j["lootMaterialsToAlwaysRender"] = v.lootMaterialsToAlwaysRender; 
    j["currenciesUsingCapWallets"] = v.currenciesUsingCapWallets; 
    j["lootItemsUsingBreakoutRecipeMenu"] = v.lootItemsUsingBreakoutRecipeMenu; 
  }
  inline void from_json(const json& j, LootLcdsClientConfigurationDTO& v) {
    v.lootMaterialsToAlwaysRender = j.at("lootMaterialsToAlwaysRender").get<std::vector<std::string>>(); 
    v.currenciesUsingCapWallets = j.at("currenciesUsingCapWallets").get<std::vector<std::string>>(); 
    v.lootItemsUsingBreakoutRecipeMenu = j.at("lootItemsUsingBreakoutRecipeMenu").get<std::vector<std::string>>(); 
  }
}