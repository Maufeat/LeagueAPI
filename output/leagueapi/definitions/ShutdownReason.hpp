#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class ShutdownReason { /**/ 
    Invalid_e = 0, /**/ 
    LcuAlphaDisabled_e = 2, /**/ 
    PlatformMaintenance_e = 1, /**/ 
    PlayerBanned_e = 3, /**/ 
  };
  static void to_json(json& j, const ShutdownReason& v) {
    switch(v) { 
    case ShutdownReason::Invalid_e:
      j = "Invalid";
    break;
    case ShutdownReason::LcuAlphaDisabled_e:
      j = "LcuAlphaDisabled";
    break;
    case ShutdownReason::PlatformMaintenance_e:
      j = "PlatformMaintenance";
    break;
    case ShutdownReason::PlayerBanned_e:
      j = "PlayerBanned";
    break;
    };
  }
  static void from_json(const json& j, ShutdownReason& v) {
    auto s = j.get<std::string>(); 
    if(s == "Invalid") {
      v = ShutdownReason::Invalid_e;
      return;
    } 
    if(s == "LcuAlphaDisabled") {
      v = ShutdownReason::LcuAlphaDisabled_e;
      return;
    } 
    if(s == "PlatformMaintenance") {
      v = ShutdownReason::PlatformMaintenance_e;
      return;
    } 
    if(s == "PlayerBanned") {
      v = ShutdownReason::PlayerBanned_e;
      return;
    } 
  }
} 