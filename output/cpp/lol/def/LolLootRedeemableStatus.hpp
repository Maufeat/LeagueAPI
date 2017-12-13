#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLootRedeemableStatus {  
    ALREADY_OWNED_e = 5,
    ALREADY_RENTED_e = 6,
    CHAMPION_NOT_OWNED_e = 7,
    NOT_REDEEMABLE_e = 3,
    NOT_REDEEMABLE_RENTAL_e = 4,
    REDEEMABLE_e = 1,
    REDEEMABLE_RENTAL_e = 2,
    SKIN_NOT_OWNED_e = 8,
    UNKNOWN_e = 0,
  };
  void to_json(json& j, const LolLootRedeemableStatus& v) {
  if(v == LolLootRedeemableStatus::ALREADY_OWNED_e) {
    j = "ALREADY_OWNED";
    return;
  }
  if(v == LolLootRedeemableStatus::ALREADY_RENTED_e) {
    j = "ALREADY_RENTED";
    return;
  }
  if(v == LolLootRedeemableStatus::CHAMPION_NOT_OWNED_e) {
    j = "CHAMPION_NOT_OWNED";
    return;
  }
  if(v == LolLootRedeemableStatus::NOT_REDEEMABLE_e) {
    j = "NOT_REDEEMABLE";
    return;
  }
  if(v == LolLootRedeemableStatus::NOT_REDEEMABLE_RENTAL_e) {
    j = "NOT_REDEEMABLE_RENTAL";
    return;
  }
  if(v == LolLootRedeemableStatus::REDEEMABLE_e) {
    j = "REDEEMABLE";
    return;
  }
  if(v == LolLootRedeemableStatus::REDEEMABLE_RENTAL_e) {
    j = "REDEEMABLE_RENTAL";
    return;
  }
  if(v == LolLootRedeemableStatus::SKIN_NOT_OWNED_e) {
    j = "SKIN_NOT_OWNED";
    return;
  }
  if(v == LolLootRedeemableStatus::UNKNOWN_e) {
    j = "UNKNOWN";
    return;
  }
  }
  void from_json(const json& j, LolLootRedeemableStatus& v) {
  if(j.get<std::string>() == "ALREADY_OWNED") {
    v = LolLootRedeemableStatus::ALREADY_OWNED_e;
    return;
  } 
  if(j.get<std::string>() == "ALREADY_RENTED") {
    v = LolLootRedeemableStatus::ALREADY_RENTED_e;
    return;
  } 
  if(j.get<std::string>() == "CHAMPION_NOT_OWNED") {
    v = LolLootRedeemableStatus::CHAMPION_NOT_OWNED_e;
    return;
  } 
  if(j.get<std::string>() == "NOT_REDEEMABLE") {
    v = LolLootRedeemableStatus::NOT_REDEEMABLE_e;
    return;
  } 
  if(j.get<std::string>() == "NOT_REDEEMABLE_RENTAL") {
    v = LolLootRedeemableStatus::NOT_REDEEMABLE_RENTAL_e;
    return;
  } 
  if(j.get<std::string>() == "REDEEMABLE") {
    v = LolLootRedeemableStatus::REDEEMABLE_e;
    return;
  } 
  if(j.get<std::string>() == "REDEEMABLE_RENTAL") {
    v = LolLootRedeemableStatus::REDEEMABLE_RENTAL_e;
    return;
  } 
  if(j.get<std::string>() == "SKIN_NOT_OWNED") {
    v = LolLootRedeemableStatus::SKIN_NOT_OWNED_e;
    return;
  } 
  if(j.get<std::string>() == "UNKNOWN") {
    v = LolLootRedeemableStatus::UNKNOWN_e;
    return;
  } 
  }
}