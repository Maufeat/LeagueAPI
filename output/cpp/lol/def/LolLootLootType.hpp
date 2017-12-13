#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLootLootType {  
    Chest_e = 0,
    Currency_e = 1,
  };
  void to_json(json& j, const LolLootLootType& v) {
    if(v == LolLootLootType::Chest_e) {
      j = "Chest";
      return;
    }
    if(v == LolLootLootType::Currency_e) {
      j = "Currency";
      return;
    }
  }
  void from_json(const json& j, LolLootLootType& v) {
    if(j.get<std::string>() == "Chest") {
      v = LolLootLootType::Chest_e;
      return;
    } 
    if(j.get<std::string>() == "Currency") {
      v = LolLootLootType::Currency_e;
      return;
    } 
  }
}