#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLootLootRarity { /**/ 
    Default_e = 0, /**/ 
  };
  static void to_json(json& j, const LolLootLootRarity& v) {
    switch(v) { 
    case LolLootLootRarity::Default_e:
      j = "Default";
    break;
    };
  }
  static void from_json(const json& j, LolLootLootRarity& v) {
    auto s = j.get<std::string>(); 
    if(s == "Default") {
      v = LolLootLootRarity::Default_e;
      return;
    } 
  }
} 