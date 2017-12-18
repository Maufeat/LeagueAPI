#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LCDSLoyaltyStateChangeNotificationCategory {  
    change_e = 3,
    disabled_e = 5,
    expiry_e = 2,
    grant_e = 1,
    legacy_e = 0,
    revoke_e = 4,
  };
  inline void to_json(json& j, const LCDSLoyaltyStateChangeNotificationCategory& v) {
    if(v == LCDSLoyaltyStateChangeNotificationCategory::change_e) {
      j = "change";
      return;
    }
    if(v == LCDSLoyaltyStateChangeNotificationCategory::disabled_e) {
      j = "disabled";
      return;
    }
    if(v == LCDSLoyaltyStateChangeNotificationCategory::expiry_e) {
      j = "expiry";
      return;
    }
    if(v == LCDSLoyaltyStateChangeNotificationCategory::grant_e) {
      j = "grant";
      return;
    }
    if(v == LCDSLoyaltyStateChangeNotificationCategory::legacy_e) {
      j = "legacy";
      return;
    }
    if(v == LCDSLoyaltyStateChangeNotificationCategory::revoke_e) {
      j = "revoke";
      return;
    }
  }
  inline void from_json(const json& j, LCDSLoyaltyStateChangeNotificationCategory& v) {
    if(j.get<std::string>() == "change") {
      v = LCDSLoyaltyStateChangeNotificationCategory::change_e;
      return;
    } 
    if(j.get<std::string>() == "disabled") {
      v = LCDSLoyaltyStateChangeNotificationCategory::disabled_e;
      return;
    } 
    if(j.get<std::string>() == "expiry") {
      v = LCDSLoyaltyStateChangeNotificationCategory::expiry_e;
      return;
    } 
    if(j.get<std::string>() == "grant") {
      v = LCDSLoyaltyStateChangeNotificationCategory::grant_e;
      return;
    } 
    if(j.get<std::string>() == "legacy") {
      v = LCDSLoyaltyStateChangeNotificationCategory::legacy_e;
      return;
    } 
    if(j.get<std::string>() == "revoke") {
      v = LCDSLoyaltyStateChangeNotificationCategory::revoke_e;
      return;
    } 
  }
}