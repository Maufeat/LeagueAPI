#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLootRedeemableStatus { /**/ 
    ALREADY_OWNED_e = 5, /**/ 
    ALREADY_RENTED_e = 6, /**/ 
    CHAMPION_NOT_OWNED_e = 7, /**/ 
    NOT_REDEEMABLE_e = 3, /**/ 
    NOT_REDEEMABLE_RENTAL_e = 4, /**/ 
    REDEEMABLE_e = 1, /**/ 
    REDEEMABLE_RENTAL_e = 2, /**/ 
    SKIN_NOT_OWNED_e = 8, /**/ 
    UNKNOWN_e = 0, /**/ 
  };
  static void to_json(json& j, const LolLootRedeemableStatus& v) {
    switch(v) { 
    case LolLootRedeemableStatus::ALREADY_OWNED_e:
      j = "ALREADY_OWNED";
    break;
    case LolLootRedeemableStatus::ALREADY_RENTED_e:
      j = "ALREADY_RENTED";
    break;
    case LolLootRedeemableStatus::CHAMPION_NOT_OWNED_e:
      j = "CHAMPION_NOT_OWNED";
    break;
    case LolLootRedeemableStatus::NOT_REDEEMABLE_e:
      j = "NOT_REDEEMABLE";
    break;
    case LolLootRedeemableStatus::NOT_REDEEMABLE_RENTAL_e:
      j = "NOT_REDEEMABLE_RENTAL";
    break;
    case LolLootRedeemableStatus::REDEEMABLE_e:
      j = "REDEEMABLE";
    break;
    case LolLootRedeemableStatus::REDEEMABLE_RENTAL_e:
      j = "REDEEMABLE_RENTAL";
    break;
    case LolLootRedeemableStatus::SKIN_NOT_OWNED_e:
      j = "SKIN_NOT_OWNED";
    break;
    case LolLootRedeemableStatus::UNKNOWN_e:
      j = "UNKNOWN";
    break;
    };
  }
  static void from_json(const json& j, LolLootRedeemableStatus& v) {
    auto s = j.get<std::string>(); 
    if(s == "ALREADY_OWNED") {
      v = LolLootRedeemableStatus::ALREADY_OWNED_e;
      return;
    } 
    if(s == "ALREADY_RENTED") {
      v = LolLootRedeemableStatus::ALREADY_RENTED_e;
      return;
    } 
    if(s == "CHAMPION_NOT_OWNED") {
      v = LolLootRedeemableStatus::CHAMPION_NOT_OWNED_e;
      return;
    } 
    if(s == "NOT_REDEEMABLE") {
      v = LolLootRedeemableStatus::NOT_REDEEMABLE_e;
      return;
    } 
    if(s == "NOT_REDEEMABLE_RENTAL") {
      v = LolLootRedeemableStatus::NOT_REDEEMABLE_RENTAL_e;
      return;
    } 
    if(s == "REDEEMABLE") {
      v = LolLootRedeemableStatus::REDEEMABLE_e;
      return;
    } 
    if(s == "REDEEMABLE_RENTAL") {
      v = LolLootRedeemableStatus::REDEEMABLE_RENTAL_e;
      return;
    } 
    if(s == "SKIN_NOT_OWNED") {
      v = LolLootRedeemableStatus::SKIN_NOT_OWNED_e;
      return;
    } 
    if(s == "UNKNOWN") {
      v = LolLootRedeemableStatus::UNKNOWN_e;
      return;
    } 
  }
} 