#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootLootRecipeGdsResource { 
    std::string placeholder; 
  };
  inline void to_json(json& j, const LolLootLootRecipeGdsResource& v) {
    j["placeholder"] = v.placeholder; 
  }
  inline void from_json(const json& j, LolLootLootRecipeGdsResource& v) {
    v.placeholder = j.at("placeholder").get<std::string>(); 
  }
}