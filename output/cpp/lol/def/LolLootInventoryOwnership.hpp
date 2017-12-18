#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLootInventoryOwnership {  
    F2P_e = 2,
    OWNED_e = 0,
    RENTED_e = 1,
  };
  inline void to_json(json& j, const LolLootInventoryOwnership& v) {
    if(v == LolLootInventoryOwnership::F2P_e) {
      j = "F2P";
      return;
    }
    if(v == LolLootInventoryOwnership::OWNED_e) {
      j = "OWNED";
      return;
    }
    if(v == LolLootInventoryOwnership::RENTED_e) {
      j = "RENTED";
      return;
    }
  }
  inline void from_json(const json& j, LolLootInventoryOwnership& v) {
    if(j.get<std::string>() == "F2P") {
      v = LolLootInventoryOwnership::F2P_e;
      return;
    } 
    if(j.get<std::string>() == "OWNED") {
      v = LolLootInventoryOwnership::OWNED_e;
      return;
    } 
    if(j.get<std::string>() == "RENTED") {
      v = LolLootInventoryOwnership::RENTED_e;
      return;
    } 
  }
}