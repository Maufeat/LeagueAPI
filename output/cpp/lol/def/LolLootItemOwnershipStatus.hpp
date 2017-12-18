#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLootItemOwnershipStatus {  
    FREE_e = 1,
    NONE_e = 0,
    OWNED_e = 3,
    RENTAL_e = 2,
  };
  inline void to_json(json& j, const LolLootItemOwnershipStatus& v) {
    if(v == LolLootItemOwnershipStatus::FREE_e) {
      j = "FREE";
      return;
    }
    if(v == LolLootItemOwnershipStatus::NONE_e) {
      j = "NONE";
      return;
    }
    if(v == LolLootItemOwnershipStatus::OWNED_e) {
      j = "OWNED";
      return;
    }
    if(v == LolLootItemOwnershipStatus::RENTAL_e) {
      j = "RENTAL";
      return;
    }
  }
  inline void from_json(const json& j, LolLootItemOwnershipStatus& v) {
    if(j.get<std::string>() == "FREE") {
      v = LolLootItemOwnershipStatus::FREE_e;
      return;
    } 
    if(j.get<std::string>() == "NONE") {
      v = LolLootItemOwnershipStatus::NONE_e;
      return;
    } 
    if(j.get<std::string>() == "OWNED") {
      v = LolLootItemOwnershipStatus::OWNED_e;
      return;
    } 
    if(j.get<std::string>() == "RENTAL") {
      v = LolLootItemOwnershipStatus::RENTAL_e;
      return;
    } 
  }
}