#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLootLootRarity {  
    Default_e = 0,
  };
  void to_json(json& j, const LolLootLootRarity& v) {
    if(v == LolLootLootRarity::Default_e) {
      j = "Default";
      return;
    }
  }
  void from_json(const json& j, LolLootLootRarity& v) {
    if(j.get<std::string>() == "Default") {
      v = LolLootLootRarity::Default_e;
      return;
    } 
  }
}