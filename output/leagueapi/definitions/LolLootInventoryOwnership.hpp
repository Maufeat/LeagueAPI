#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLootInventoryOwnership { /**/ 
    F2P_e = 2, /**/ 
    OWNED_e = 0, /**/ 
    RENTED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolLootInventoryOwnership& v) {
    switch(v) { 
    case LolLootInventoryOwnership::F2P_e:
      j = "F2P";
    break;
    case LolLootInventoryOwnership::OWNED_e:
      j = "OWNED";
    break;
    case LolLootInventoryOwnership::RENTED_e:
      j = "RENTED";
    break;
    };
  }
  static void from_json(const json& j, LolLootInventoryOwnership& v) {
    auto s = j.get<std::string>(); 
    if(s == "F2P") {
      v = LolLootInventoryOwnership::F2P_e;
      return;
    } 
    if(s == "OWNED") {
      v = LolLootInventoryOwnership::OWNED_e;
      return;
    } 
    if(s == "RENTED") {
      v = LolLootInventoryOwnership::RENTED_e;
      return;
    } 
  }
} 