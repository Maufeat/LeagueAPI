#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LootLcdsClientConfigurationDTO { 
    std::vector<std::string> lootItemsUsingBreakoutRecipeMenu;
    std::vector<std::string> lootMaterialsToAlwaysRender;
    std::vector<std::string> currenciesUsingCapWallets; 
  };
  inline void to_json(json& j, const LootLcdsClientConfigurationDTO& v) {
    j["lootItemsUsingBreakoutRecipeMenu"] = v.lootItemsUsingBreakoutRecipeMenu; 
    j["lootMaterialsToAlwaysRender"] = v.lootMaterialsToAlwaysRender; 
    j["currenciesUsingCapWallets"] = v.currenciesUsingCapWallets; 
  }
  inline void from_json(const json& j, LootLcdsClientConfigurationDTO& v) {
    v.lootItemsUsingBreakoutRecipeMenu = j.at("lootItemsUsingBreakoutRecipeMenu").get<std::vector<std::string>>(); 
    v.lootMaterialsToAlwaysRender = j.at("lootMaterialsToAlwaysRender").get<std::vector<std::string>>(); 
    v.currenciesUsingCapWallets = j.at("currenciesUsingCapWallets").get<std::vector<std::string>>(); 
  }
}