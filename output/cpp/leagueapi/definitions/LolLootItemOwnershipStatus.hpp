#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLootItemOwnershipStatus { /**/ 
    FREE_e = 1, /**/ 
    NONE_e = 0, /**/ 
    OWNED_e = 3, /**/ 
    RENTAL_e = 2, /**/ 
  };
  static void to_json(json& j, const LolLootItemOwnershipStatus& v) {
    switch(v) { 
    case LolLootItemOwnershipStatus::FREE_e:
      j = "FREE";
    break;
    case LolLootItemOwnershipStatus::NONE_e:
      j = "NONE";
    break;
    case LolLootItemOwnershipStatus::OWNED_e:
      j = "OWNED";
    break;
    case LolLootItemOwnershipStatus::RENTAL_e:
      j = "RENTAL";
    break;
    };
  }
  static void from_json(const json& j, LolLootItemOwnershipStatus& v) {
    auto s = j.get<std::string>(); 
    if(s == "FREE") {
      v = LolLootItemOwnershipStatus::FREE_e;
      return;
    } 
    if(s == "NONE") {
      v = LolLootItemOwnershipStatus::NONE_e;
      return;
    } 
    if(s == "OWNED") {
      v = LolLootItemOwnershipStatus::OWNED_e;
      return;
    } 
    if(s == "RENTAL") {
      v = LolLootItemOwnershipStatus::RENTAL_e;
      return;
    } 
  }
} 