#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LCDSLoyaltyStateChangeNotificationCategory { /**/ 
    change_e = 3, /**/ 
    disabled_e = 5, /**/ 
    expiry_e = 2, /**/ 
    grant_e = 1, /**/ 
    legacy_e = 0, /**/ 
    revoke_e = 4, /**/ 
  };
  static void to_json(json& j, const LCDSLoyaltyStateChangeNotificationCategory& v) {
    switch(v) { 
    case LCDSLoyaltyStateChangeNotificationCategory::change_e:
      j = "change";
    break;
    case LCDSLoyaltyStateChangeNotificationCategory::disabled_e:
      j = "disabled";
    break;
    case LCDSLoyaltyStateChangeNotificationCategory::expiry_e:
      j = "expiry";
    break;
    case LCDSLoyaltyStateChangeNotificationCategory::grant_e:
      j = "grant";
    break;
    case LCDSLoyaltyStateChangeNotificationCategory::legacy_e:
      j = "legacy";
    break;
    case LCDSLoyaltyStateChangeNotificationCategory::revoke_e:
      j = "revoke";
    break;
    };
  }
  static void from_json(const json& j, LCDSLoyaltyStateChangeNotificationCategory& v) {
    auto s = j.get<std::string>(); 
    if(s == "change") {
      v = LCDSLoyaltyStateChangeNotificationCategory::change_e;
      return;
    } 
    if(s == "disabled") {
      v = LCDSLoyaltyStateChangeNotificationCategory::disabled_e;
      return;
    } 
    if(s == "expiry") {
      v = LCDSLoyaltyStateChangeNotificationCategory::expiry_e;
      return;
    } 
    if(s == "grant") {
      v = LCDSLoyaltyStateChangeNotificationCategory::grant_e;
      return;
    } 
    if(s == "legacy") {
      v = LCDSLoyaltyStateChangeNotificationCategory::legacy_e;
      return;
    } 
    if(s == "revoke") {
      v = LCDSLoyaltyStateChangeNotificationCategory::revoke_e;
      return;
    } 
  }
} 