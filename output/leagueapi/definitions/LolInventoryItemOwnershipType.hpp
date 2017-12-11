#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolInventoryItemOwnershipType { /**/ 
    F2P_e = 2, /**/ 
    OWNED_e = 0, /**/ 
    RENTED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolInventoryItemOwnershipType& v) {
    switch(v) { 
    case LolInventoryItemOwnershipType::F2P_e:
      j = "F2P";
    break;
    case LolInventoryItemOwnershipType::OWNED_e:
      j = "OWNED";
    break;
    case LolInventoryItemOwnershipType::RENTED_e:
      j = "RENTED";
    break;
    };
  }
  static void from_json(const json& j, LolInventoryItemOwnershipType& v) {
    auto s = j.get<std::string>(); 
    if(s == "F2P") {
      v = LolInventoryItemOwnershipType::F2P_e;
      return;
    } 
    if(s == "OWNED") {
      v = LolInventoryItemOwnershipType::OWNED_e;
      return;
    } 
    if(s == "RENTED") {
      v = LolInventoryItemOwnershipType::RENTED_e;
      return;
    } 
  }
} 