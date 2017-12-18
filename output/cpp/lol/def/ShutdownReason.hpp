#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct ShutdownReason {  
    Invalid_e = 0,
    LcuAlphaDisabled_e = 2,
    PlatformMaintenance_e = 1,
    PlayerBanned_e = 3,
  };
  inline void to_json(json& j, const ShutdownReason& v) {
    if(v == ShutdownReason::Invalid_e) {
      j = "Invalid";
      return;
    }
    if(v == ShutdownReason::LcuAlphaDisabled_e) {
      j = "LcuAlphaDisabled";
      return;
    }
    if(v == ShutdownReason::PlatformMaintenance_e) {
      j = "PlatformMaintenance";
      return;
    }
    if(v == ShutdownReason::PlayerBanned_e) {
      j = "PlayerBanned";
      return;
    }
  }
  inline void from_json(const json& j, ShutdownReason& v) {
    if(j.get<std::string>() == "Invalid") {
      v = ShutdownReason::Invalid_e;
      return;
    } 
    if(j.get<std::string>() == "LcuAlphaDisabled") {
      v = ShutdownReason::LcuAlphaDisabled_e;
      return;
    } 
    if(j.get<std::string>() == "PlatformMaintenance") {
      v = ShutdownReason::PlatformMaintenance_e;
      return;
    } 
    if(j.get<std::string>() == "PlayerBanned") {
      v = ShutdownReason::PlayerBanned_e;
      return;
    } 
  }
}