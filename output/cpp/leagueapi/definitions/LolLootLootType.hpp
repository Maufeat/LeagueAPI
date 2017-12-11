#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLootLootType { /**/ 
    Chest_e = 0, /**/ 
    Currency_e = 1, /**/ 
  };
  static void to_json(json& j, const LolLootLootType& v) {
    switch(v) { 
    case LolLootLootType::Chest_e:
      j = "Chest";
    break;
    case LolLootLootType::Currency_e:
      j = "Currency";
    break;
    };
  }
  static void from_json(const json& j, LolLootLootType& v) {
    auto s = j.get<std::string>(); 
    if(s == "Chest") {
      v = LolLootLootType::Chest_e;
      return;
    } 
    if(s == "Currency") {
      v = LolLootLootType::Currency_e;
      return;
    } 
  }
} 