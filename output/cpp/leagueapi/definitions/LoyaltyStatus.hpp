#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LoyaltyStatus { /**/ 
    CHANGE_e = 3, /**/ 
    DISABLED_e = 5, /**/ 
    EXPIRY_e = 2, /**/ 
    LEGACY_e = 0, /**/ 
    REVOKE_e = 4, /**/ 
    REWARDS_GRANT_e = 1, /**/ 
  };
  static void to_json(json& j, const LoyaltyStatus& v) {
    switch(v) { 
    case LoyaltyStatus::CHANGE_e:
      j = "CHANGE";
    break;
    case LoyaltyStatus::DISABLED_e:
      j = "DISABLED";
    break;
    case LoyaltyStatus::EXPIRY_e:
      j = "EXPIRY";
    break;
    case LoyaltyStatus::LEGACY_e:
      j = "LEGACY";
    break;
    case LoyaltyStatus::REVOKE_e:
      j = "REVOKE";
    break;
    case LoyaltyStatus::REWARDS_GRANT_e:
      j = "REWARDS_GRANT";
    break;
    };
  }
  static void from_json(const json& j, LoyaltyStatus& v) {
    auto s = j.get<std::string>(); 
    if(s == "CHANGE") {
      v = LoyaltyStatus::CHANGE_e;
      return;
    } 
    if(s == "DISABLED") {
      v = LoyaltyStatus::DISABLED_e;
      return;
    } 
    if(s == "EXPIRY") {
      v = LoyaltyStatus::EXPIRY_e;
      return;
    } 
    if(s == "LEGACY") {
      v = LoyaltyStatus::LEGACY_e;
      return;
    } 
    if(s == "REVOKE") {
      v = LoyaltyStatus::REVOKE_e;
      return;
    } 
    if(s == "REWARDS_GRANT") {
      v = LoyaltyStatus::REWARDS_GRANT_e;
      return;
    } 
  }
} 