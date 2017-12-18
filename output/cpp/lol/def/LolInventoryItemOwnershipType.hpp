#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolInventoryItemOwnershipType {  
    F2P_e = 2,
    OWNED_e = 0,
    RENTED_e = 1,
  };
  inline void to_json(json& j, const LolInventoryItemOwnershipType& v) {
    if(v == LolInventoryItemOwnershipType::F2P_e) {
      j = "F2P";
      return;
    }
    if(v == LolInventoryItemOwnershipType::OWNED_e) {
      j = "OWNED";
      return;
    }
    if(v == LolInventoryItemOwnershipType::RENTED_e) {
      j = "RENTED";
      return;
    }
  }
  inline void from_json(const json& j, LolInventoryItemOwnershipType& v) {
    if(j.get<std::string>() == "F2P") {
      v = LolInventoryItemOwnershipType::F2P_e;
      return;
    } 
    if(j.get<std::string>() == "OWNED") {
      v = LolInventoryItemOwnershipType::OWNED_e;
      return;
    } 
    if(j.get<std::string>() == "RENTED") {
      v = LolInventoryItemOwnershipType::RENTED_e;
      return;
    } 
  }
}