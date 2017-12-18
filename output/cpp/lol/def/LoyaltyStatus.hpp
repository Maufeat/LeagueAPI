#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LoyaltyStatus {  
    CHANGE_e = 3,
    DISABLED_e = 5,
    EXPIRY_e = 2,
    LEGACY_e = 0,
    REVOKE_e = 4,
    REWARDS_GRANT_e = 1,
  };
  inline void to_json(json& j, const LoyaltyStatus& v) {
    if(v == LoyaltyStatus::CHANGE_e) {
      j = "CHANGE";
      return;
    }
    if(v == LoyaltyStatus::DISABLED_e) {
      j = "DISABLED";
      return;
    }
    if(v == LoyaltyStatus::EXPIRY_e) {
      j = "EXPIRY";
      return;
    }
    if(v == LoyaltyStatus::LEGACY_e) {
      j = "LEGACY";
      return;
    }
    if(v == LoyaltyStatus::REVOKE_e) {
      j = "REVOKE";
      return;
    }
    if(v == LoyaltyStatus::REWARDS_GRANT_e) {
      j = "REWARDS_GRANT";
      return;
    }
  }
  inline void from_json(const json& j, LoyaltyStatus& v) {
    if(j.get<std::string>() == "CHANGE") {
      v = LoyaltyStatus::CHANGE_e;
      return;
    } 
    if(j.get<std::string>() == "DISABLED") {
      v = LoyaltyStatus::DISABLED_e;
      return;
    } 
    if(j.get<std::string>() == "EXPIRY") {
      v = LoyaltyStatus::EXPIRY_e;
      return;
    } 
    if(j.get<std::string>() == "LEGACY") {
      v = LoyaltyStatus::LEGACY_e;
      return;
    } 
    if(j.get<std::string>() == "REVOKE") {
      v = LoyaltyStatus::REVOKE_e;
      return;
    } 
    if(j.get<std::string>() == "REWARDS_GRANT") {
      v = LoyaltyStatus::REWARDS_GRANT_e;
      return;
    } 
  }
}